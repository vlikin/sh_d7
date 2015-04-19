<?php 
/**
 * @file It containes the TEXT LIST content type.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array (
  'title' => t('Image - text'),
  'description' => t('It is the bljck with two sided blocks(image, text)'),
  'single' => FALSE,
  'cct' => array('cm_cct_image_text'),
  'render callback' => 'cm_cct_image_text_render',
  'edit form' => 'cm_cct_image_text_edit_form',
  'admin info' => 'cm_cct_image_text_admin_info',
  'icon' => 'icon.png',
  'category' => 'Shelepen',
);

/**
 * It renders the content type.
 */
function cm_cct_image_text_render($subtype, $conf, $args, $context) {
  global $language;
  $langcode = $language->language;

  $block = new stdClass();
  $block->content = [
    '#type' => 'container',
    '#attributes' => [
      'class' => ['cm_cct_image_text', $conf['image']['side']]
    ],
    'image' => [
      '#type' => 'container',
      'image' => [
        '#theme' => 'image_formatter',
        '#item' => array ('uri' => str_replace('/sites/default/files/', 'public://', $conf['image']['path'])),
        '#image_style' => $conf['image']['style'],
        // '#weight' => $conf['image']['side'] == 'left' ? 1 : 3,
      ],
      '#attributes' => [
        'class' => ['image']
      ],
    ],
    'title' => [
      '#type' => 'container',
      'text' => [
        '#markup' => check_markup($conf['block_title'][$langcode])
      ],
      // '#weight' => $conf['image']['side'] == 'left' ? 2 : 1,
      '#attributes' => [
        'class' => ['title']
      ],
    ],
    'text' => [
      '#type' => 'container',
      'text' => [
        '#markup' => check_markup($conf['block_text'][$langcode]['value'], $conf['block_text'][$langcode]['format'])
      ],
      // '#weight' => $conf['image']['side'] == 'left' ? 3 : 2,
      '#attributes' => [
        'class' => ['text']
      ],
    ],
  ];

  return $block;
}

/**
 * 'admin info' callback for panel pane.
 */
function cm_cct_image_text_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = $conf['block_title']['en'];

    return $block;
  }
}

/**
 * It is the config form of the content type.
 */
function cm_cct_image_text_edit_form($form, &$form_state) {
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
    'side' => [
      '#type' => 'select',
      '#title' => t('Side'),
      '#options' => array (
        'left' => t('Left'),
        'right' => t('Right'),
      ),
      '#default_value' => $values['image']['side'],
    ],
  ];

  $form['block_title'] = array (
    '#type' => 'fieldset',
    '#title' => t('Title'),
    '#tree' => TRUE,
    '#group' => 'vertical_tabs',
  );
  foreach (language_list() as $langcode => $lang) {
    $form['block_title'][$langcode] = array (
      '#type' => 'textfield',
      '#title' => $lang->name,
      '#default_value' => $values['block_title'][$langcode]
    );
  }

  $form['block_text'] = array (
    '#type' => 'fieldset',
    '#title' => t('Text'),
    '#tree' => TRUE,
    '#group' => 'vertical_tabs',
  );
  foreach (language_list() as $langcode => $lang) {
    $form['block_text'][$langcode] = array (
      '#type' => 'text_format',
      '#title' => $lang->name,
      '#default_value' => $values['block_text'][$langcode]['value'],
      '#format' => $values['block_text'][$langcode]['format']
    );
  }

  return $form;
}

/**
 * It is the config form of the content type.
 */
function cm_cct_image_text_edit_form_submit($form, &$form_state) {
  $form_state['conf'] = $form_state['values'];
}
