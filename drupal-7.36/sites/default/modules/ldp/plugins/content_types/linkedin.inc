<?php 
/**
 * @file It containes the TEXT LIST content type.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array (
  'title' => t('LinkedIn profile'),
  'description' => t('It displays LinkedIn profile'),
  'single' => FALSE,
  'cct' => array('ldp_cct_linkedin'),
  'admin title' => 'ldp_cct_linkedin_admin_title',
  'render callback' => 'ldp_cct_linkedin_render',
  'edit form' => 'ldp_cct_linkedin_edit_form',
  'icon' => 'icon.png',
  'category' => 'LDP',
  'required context' => new ctools_context_required(t('LinkedIn profile context'), 'ldp_contexts_profile'),
);

/**
 * Builds title.
 */
function ldp_cct_linkedin_admin_title($subtype, $conf, $context = NULL) {
  $output = t("LinkedIn Profile") . ' - ' . $context->data->login;
  return $output;
}

/**
 * It renders the content type.
 */
function ldp_cct_linkedin_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->title = 'LinkedIn profile';
  $block->content = 'Hello' . '<script type="IN/MemberProfile" data-id="http://www.linkedin.com/in/' . $context->data->login . '"
data-format="inline"></script>';

  return $block;
}

/**
 * It is the config form of the content type.
 */
function ldp_cct_linkedin_edit_form($form, &$form_state) {
  $values = $form_state['conf'];
  unset($form['override_title']);
  unset($form['override_title_html']);
  unset($form['override_title_text']);
  $form['#tree'] = TRUE;
  $form['some_settings'] = array (
    '#title' => t('Some settings.'),
    '#type' => 'textfield',
    '#default_value' => $values['some_settings']
  );

  return $form;
}

/**
 * It is the config form of the content type.
 */
function ldp_cct_linkedin_edit_form_submit($form, &$form_state) {
  $form_state['conf'] = $form_state['values'];
}
