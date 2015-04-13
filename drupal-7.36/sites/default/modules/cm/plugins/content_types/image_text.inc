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
  'icon' => 'icon.png',
  'category' => 'Shelepen',
);

/**
 * It renders the content type.
 */
function cm_cct_image_text_render($subtype, $conf, $args, $context) {
  global $language;

  $block = new stdClass();
  $block->content = array (
    '#type' => 'container',
    'text' => array (
      '#markup' => check_markup($conf['text']['value'], $conf['text']['format']),
      '#weight' => $conf['side'] == 'left' ? 2 : 1,
    ),
    'image' => array (
      '#theme' => 'image_formatter',
      '#item' => array ('uri' => str_replace('/sites/default/files/', 'public://', $conf['image'])),
      '#image_style' => $conf['image_style'],
      '#weight' => $conf['side'] == 'left' ? 1 : 2,
    ),
  );

  return $block;
}

/**
 * It is the config form of the content type.
 */
function cm_cct_image_text_edit_form($form, &$form_state) {
  $values = $form_state['conf'];

  $form['image'] = array (
    '#type' => 'cm_imce',
    '#title' => t('Image'),
    '#default_value' => $values['image'],
  );

  $form['image_style'] = array (
    '#type' => 'textfield',
    '#title' => t('Image style'),
    '#default_value' => $values['image_style'],
  );

  $form['side'] = array (
    '#type' => 'select',
    '#title' => t('Side'),
    '#options' => array (
      'left' => t('Left'),
      'right' => t('Right'),
    ),
    '#default_value' => $values['side'],
  );

  $form['text'] = array (
    '#type' => 'text_format',
    '#title' => t('Text'),
    '#default_value' => $values['text']['value'],
    '#format' => $values['text']['format']
  );

  return $form;
}

/**
 * It is the config form of the content type.
 */
function cm_cct_image_text_edit_form_submit($form, &$form_state) {
  $form_state['conf'] = $form_state['values'];
}
