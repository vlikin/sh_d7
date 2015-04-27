<?php 
/**
 * @file It containes the TEXT LIST content type.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Image bxSlider'),
  'description' => t('HTML bxSlider'),
  'single' => FALSE,
  'cct' => array('bxslider_cct_image'),
  'render callback' => 'bxslider_cct_image_render',
  'edit form' => 'bxslider_cct_image_edit_form',
  'icon' => 'icon.png',
  'category' => 'bxSlider',
);

/**
 * It renders the content type.
 */
function bxslider_cct_image_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $ukey = $conf['form_build_id'];
  $settings = $conf['settings'];
  $items = array ();
  foreach ($conf['list'] as $key => $list_item) {
    if (is_numeric($key) && $list_item['enabled']) {
      $items[]  = [
        '#theme' => 'image_formatter',
        '#item' => [
          'uri' => str_replace('/sites/default/files/', 'public://', $list_item['image'])
        ],
        '#image_style' => $conf['image_style'],
      ];
    }
  }
  $source = _bxslider_get_render_source($items, $settings, $ukey);
  $block->content = render($source);

  return $block;
}

/**
 * It is the config form of the content type.
 */
function bxslider_cct_image_edit_form($form, &$form_state) {
  $values = $form_state['conf'];
  hide($form['override_title']);
  hide($form['override_title_text']);
  hide($form['override_title_heading']);
  hide($form['override_title_markup']);
  $item_limit = $values['item_limit'] ? $values['item_limit'] : 3;
  $style_options = [];
  foreach(image_styles() as $key => $style) {
    $style_options[$key] = $style['label'];
  }

  $form['#tree'] = TRUE;
  $form['image_style'] = [
    '#title' => t('Image style'),
    '#type' => 'select',
    '#options' => $style_options,
    '#default_value' => $values['image_style'] ? $values['image_style'] : 'large',
  ];
  $form['item_limit'] = [
    '#title' => t('Item limit'),
    '#type' => 'textfield',
    '#default_value' => $item_limit,
  ];
  $form['list'] = array(
    '#type' => 'vertical_tabs',
  );
  $form['settings'] = array (
    '#type' => 'fieldset',
    '#title' => t('Settings'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  ) + _bxslider_settings_form($values['settings']);
  
  for ($i = 0; $i < $item_limit; $i++) {
    $form['list'][$i] = array(
      '#type' => 'fieldset',
      '#title' => t('Image' . ' - ' . ($i + 1)),
      '#group' => 'vertical_tabs',
      'enabled' => array (
        '#type' => 'checkbox',
        '#title' => t('Enabled'),
        '#default_value' => $values['list'][$i]['enabled'],
      ),
      'image' => array (
        '#type' => 'cm_imce',
        '#default_value' => $values['list'][$i]['image'],
      ),
      'weight' => array (
        '#type' => 'weight',
        '#default_value' => $values['list'][$i]['weight'] ? $values['list'][$i]['weight'] : 0,
      ),
    );
  }

  return $form;
}

/**
 * It is the config form of the content type.
 */
function bxslider_cct_image_edit_form_submit($form, &$form_state) {
  $form_state['conf'] = [];
  $keys = ['image_style', 'item_limit', 'list', 'settings'];
  foreach ($keys as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
  unset($form_state['conf']['list']['list__active_tab']);
  uasort($form_state['conf']['list'], 'drupal_sort_weight');
  $form_state['conf']['list'] = array_values($form_state['conf']['list']);
}
