<?php 
/**
 * @file It containes the TEXT content type.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array (
  'title' => t('Facebook comments'),
  'description' => t('It injects facebook comments into the page.'),
  'single' => FALSE,
  'cct' => array('cm_fb_comments'),
  'render callback' => 'cm_fb_comments_render',
  'edit form' => 'cm_fb_comments_edit_form',
  'admin info' => 'cm_fb_comments_admin_info',
  'icon' => 'icon.png',
  'category' => 'Shelepen',
  'all contexts' => TRUE,
);

/**
 * It renders the content type.
 */
function cm_fb_comments_render($subtype, $conf, $args, $context) {
  global $language;
  $langcode = $language->language;

  _cm_init_facebook_sdk();
  $block = new stdClass();  
  $href = ctools_context_keyword_substitute($conf['href'], array(), $context);
  $block->content = [
    '#type' => 'container',
    '#attributes' => [
      'class' => ['cm_fb_comments', 'fb-comments'],
      'data-href' => $href,
      'data-numposts' => $conf['numposts'],
      'data-colorscheme' => $conf['colorscheme'],
      'data-width' => $conf['width']
    ],
  ];

  return $block;
}

/**
 * 'admin info' callback for panel pane.
 */
function cm_fb_comments_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = '';

    return $block;
  }
}

/**
 * It is the config form of the content type.
 */
function cm_fb_comments_edit_form($form, &$form_state) {
  $values = $form_state['conf'];

  //hide($form['override_title']);
  //hide($form['override_title_text']);
  //hide($form['override_title_heading']);
  //hide($form['override_title_markup']);

  $form['#tree'] = TRUE;
  $form['numposts'] = [
    '#type' => 'textfield',
    '#title' => t('Number of posts'),
    '#default_value' => $values['numposts'] ? $values['numposts'] : 5,
  ];
  $form['href'] = [
    '#type' => 'textfield',
    '#title' => t('Href'),
    '#default_value' => $values['href'],
  ];
  $form['colorscheme'] = [
    '#type' => 'textfield',
    '#title' => t('Color Scheme'),
    '#default_value' => $values['colorscheme'],
  ];
  $form['width'] = [
    '#type' => 'textfield',
    '#title' => t('Width'),
    '#default_value' => $values['width'],
  ];

  return $form;
}

/**
 * It is the config form of the content type.
 */
function cm_fb_comments_edit_form_submit($form, &$form_state) {
  $form_state['conf'] = $form_state['values'];
}
