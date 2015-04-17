<?php 
/**
 * @file It containes the TEXT LIST content type.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('HTML bxSlider'),
  'description' => t('HTML bxSlider'),
  'single' => FALSE,
  'cct' => array('bxslider_cct_html'),
  'render callback' => 'bxslider_cct_html_render',
  'edit form' => 'bxslider_cct_html_edit_form',
  'icon' => 'icon.png',
  'category' => 'bxSlider',
);

/**
 * It renders the content type.
 */
function bxslider_cct_html_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $ukey = $conf['form_build_id'];
  $settings = $conf['settings'];
  $items = array ();
  foreach ($conf['list'] as $list_item) {
    if ($list_item['enabled']) {
      $items[] = check_markup($list_item['html']['value'], $list_item['html']['format']);
    }
  }
  $source = _bxslider_get_render_source($items, $settings, $ukey);
  $block->content = render($source);

  return $block;
}

/**
 * It is the config form of the content type.
 */
function bxslider_cct_html_edit_form($form, &$form_state) {
  $item_limit = 10;
  $values = $form_state['conf'];
  unset($form['override_title']);
  unset($form['override_title_html']);
  $form['#tree'] = TRUE;
  $form['settings'] = array (
    '#type' => 'fieldset',
    '#title' => t('Settings'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  ) + _bxslider_settings_form($values['settings']);
  $form['list'] = array(
    '#type' => 'fieldset',
    '#title' => t('List of texts'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  for ($i = 0; $i < $item_limit; $i++) {
    $form['list'][$i] = array(
      '#type' => 'fieldset',
      '#title' => t('Text' . ' - ' . $i),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
      'enabled' => array (
        '#type' => 'checkbox',
        '#title' => t('Enabled'),
        '#default_value' => $values['list'][$i]['enabled'],
      ),
      'html' => array (
        '#type' => 'text_format',
        '#default_value' => $values['list'][$i]['html']['value'],
        '#format' => $values['list'][$i]['html']['format'],
      ),
    );
  }

  return $form;
}

/**
 * It is the config form of the content type.
 */
function bxslider_cct_html_edit_form_submit($form, &$form_state) {
  $form_state['conf'] = $form_state['values'];
}
