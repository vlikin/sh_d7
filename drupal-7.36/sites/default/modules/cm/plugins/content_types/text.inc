<?php 
/**
 * @file It containes the TEXT content type.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array (
  'title' => t('Text'),
  'description' => t('It is the multilingual text box.'),
  'single' => FALSE,
  'cct' => array('cm_cct_text'),
  'render callback' => 'cm_cct_text_render',
  'edit form' => 'cm_cct_text_edit_form',
  'admin info' => 'cm_cct_text_admin_info',
  'icon' => 'icon.png',
  'category' => 'Shelepen',
);

/**
 * It renders the content type.
 */
function cm_cct_text_render($subtype, $conf, $args, $context) {
  global $language;
  $langcode = $language->language;

  $block = new stdClass();
  $block->content = [
    '#type' => 'container',
    '#attributes' => [
      'class' => ['cm_cct_text']
    ],
    'text' => [
      '#markup' => check_markup($conf[$langcode]['text']['value'], $conf[$langcode]['text']['format']),
    ]
  ];

  return $block;
}

/**
 * 'admin info' callback for panel pane.
 */
function cm_cct_text_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = '';

    return $block;
  }
}

/**
 * It is the config form of the content type.
 */
function cm_cct_text_edit_form($form, &$form_state) {
  $values = $form_state['conf'];

  hide($form['override_title']);
  hide($form['override_title_text']);
  hide($form['override_title_heading']);
  hide($form['override_title_markup']);

  $form['#tree'] = TRUE;
  $form['vertical_tabs'] = array(
    '#type' => 'vertical_tabs',
  );
  foreach (language_list() as $langcode => $lang) {
    $form[$langcode] = [
      '#type' => 'fieldset',
      '#title' => $lang->name,
      '#group' => 'vertical_tabs',
      'text' => [
        '#type' => 'text_format',
        '#format' => $values[$langcode]['text']['format'],
        '#default_value' => $values[$langcode]['text']['value'],
      ],
    ];
  }

  return $form;
}

/**
 * It is the config form of the content type.
 */
function cm_cct_text_edit_form_submit($form, &$form_state) {
  $form_state['conf'] = $form_state['values'];
}
