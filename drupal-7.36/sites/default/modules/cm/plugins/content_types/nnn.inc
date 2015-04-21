<?php 
/**
 * @file It containes the NODE content type.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array (
  'title' => t('Node'),
  'description' => t('It displays last nnns.'),
  'single' => FALSE,
  'cct' => array('cm_cct_nnn'),
  'render callback' => 'cm_cct_nnn_render',
  'edit form' => 'cm_cct_nnn_edit_form',
  'admin info' => 'cm_cct_nnn_admin_info',
  'icon' => 'icon.png',
  'category' => 'Shelepen',
);

/**
 * It renders the content type.
 */
function cm_cct_nnn_render($subtype, $conf, $args, $context) {
  global $language;
  $langcode = $language->language;

  $block = new stdClass();
  $block->content = [];

  $select = db_select('node', 'n')
    ->fields('n', array('nid', 'sticky', 'created'))
    ->condition('n.promote', 1)
    ->condition('n.status', 1)
    ->orderBy('n.sticky', 'DESC')
    ->orderBy('n.created', 'DESC')
    ->extend('PagerDefault')
    ->limit(variable_get('default_nnns_main', 2))
    ->addTag('nnn_access');

  $nids = $select->execute()->fetchCol();

  if (!empty($nids)) {
    $nnns = node_load_multiple($nids);
    $build = node_view_multiple($nnns);

    // 'rss.xml' is a path, not a file, registered in nnn_menu().
    drupal_add_feed('rss.xml', variable_get('site_name', 'Drupal') . ' ' . t('RSS'));
    $block->content = $build;
  }

  return $block;
}

/**
 * 'admin info' callback for panel pane.
 */
function cm_cct_nnn_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = '';

    return $block;
  }
}

/**
 * It is the config form of the content type.
 */
function cm_cct_nnn_edit_form($form, &$form_state) {
  $values = $form_state['conf'];

  //hide($form['override_title']);
  //hide($form['override_title_text']);
  //hide($form['override_title_heading']);
  //hide($form['override_title_markup']);

  $form['#tree'] = TRUE;

  return $form;
}

/**
 * It is the config form of the content type.
 */
function cm_cct_nnn_edit_form_submit($form, &$form_state) {
  $form_state['conf'] = $form_state['values'];
}
