<?php 
/**
 * @file It containes the LOGO content type.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array (
  'title' => t('Logo'),
  'description' => t('Site logo'),
  'single' => FALSE,
  'cct' => array('cm_cct_logo'),
  'render callback' => 'cm_cct_logo_render',
  'edit form' => 'cm_cct_logo_edit_form',
  'admin info' => 'cm_cct_logo_admin_info',
  'icon' => 'icon.png',
  'category' => 'Shelepen',
);

/**
 * It renders the content type.
 */
function cm_cct_logo_render($subtype, $conf, $args, $context) {
  global $language;
  $langcode = $language->language;

  $block = new stdClass();
  $block->content = [
    '#type' => 'container',
    '#attributes' => [
      'class' => ['cm_cct_logo', $conf['image']['side']]
    ],
    'image' => [
      '#type' => 'container',
      'image' => [
        '#theme' => 'image_formatter',
        '#item' => array ('uri' => str_replace('/sites/default/files/', 'public://', $conf['image']['path'])),
        '#image_style' => $conf['image']['style'],
      ],
      '#attributes' => [
        'class' => ['image']
      ],
    ],
    'site_name' => [
      '#type' => 'container',
      'text' => [
        '#markup' => check_markup($conf['site_name'][$langcode])
      ],
      '#attributes' => [
        'class' => ['site_name']
      ],
    ],
    'site_slogan' => [
      '#type' => 'container',
      'text' => [
        '#markup' => check_markup($conf['site_slogan'][$langcode])
      ],
      '#attributes' => [
        'class' => ['site_slogan']
      ],
    ],
  ];

  return $block;
}

/**
 * 'admin info' callback for panel pane.
 */
function cm_cct_logo_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = $conf['block_title']['en'];

    return $block;
  }
}

/**
 * It is the config form of the content type.
 */
function cm_cct_logo_edit_form($form, &$form_state) {
  $values = $form_state['conf'];

  hide($form['override_title']);
  hide($form['override_title_text']);
  hide($form['override_title_heading']);
  hide($form['override_title_markup']);

  $form['vertical_tabs'] = array(
    '#type' => 'vertical_tabs',
  );
  $style_options = [];
  foreach(image_styles() as $key => $style) {
    $style_options[$key] = $style['label'];
  }

  $form['image'] = [
    '#type' => 'fieldset',
    '#title' => t('Image'),
    '#tree' => TRUE,
    '#group' => 'vertical_tabs',
    'path' => [
      '#type' => 'cm_imce',
      '#title' => t('Image'),
      '#default_value' => $values['image']['path'],
     ],
    'style' => [
      '#type' => 'select',
      '#title' => t('Image style'),
      '#options' => $style_options,
      '#default_value' => $values['image']['style'],
    ],
  ];

  $form['site_name'] = array (
    '#type' => 'fieldset',
    '#title' => t('Site name'),
    '#tree' => TRUE,
    '#group' => 'vertical_tabs',
  );
  foreach (language_list() as $langcode => $lang) {
    $form['site_name'][$langcode] = array (
      '#type' => 'textfield',
      '#title' => $lang->name,
      '#default_value' => $values['site_name'][$langcode]
    );
  }

  $form['site_slogan'] = array (
    '#type' => 'fieldset',
    '#title' => t('Site slogan'),
    '#tree' => TRUE,
    '#group' => 'vertical_tabs',
  );
  foreach (language_list() as $langcode => $lang) {
    $form['site_slogan'][$langcode] = array (
      '#type' => 'textfield',
      '#title' => $lang->name,
      '#default_value' => $values['site_slogan'][$langcode]
    );
  }

  return $form;
}

/**
 * It is the config form of the content type.
 */
function cm_cct_logo_edit_form_submit($form, &$form_state) {
  $form_state['conf'] = $form_state['values'];
}
