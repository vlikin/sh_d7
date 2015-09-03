<?php

/**
 * @file LinkedIn Profile context
 */

/**
 * Plugin definition.
 */
$plugin = array(
  'title' => t("LinkedIn Profile"),
  'description' => t('It keeps an linked in profile.'),
  // Function to create the relcontext.
  'context' => 'ldp_contexts_profile_create',
  // Function that does the settings.
  'edit form' => 'ldp_contexts_profile_settings_form',
  'keyword' => 'ldp_contexts_profile',
  'context name' => 'ldp_contexts_profile',
);

/**
 * Create a context, either from manual configuration (form) or from an argument on the URL.
 */
function ldp_contexts_profile_create($empty, $data = NULL, $conf = FALSE) {
  $context = new ctools_context('ldp_contexts_profile');
  #$context->plugin = 'ldp_contexts_profile';
  if ($empty) {
    return $context;
  }

  drupal_add_js('http://platform.linkedin.com/in.js', 'external');
  if ($conf) {
    if (!empty($data)) {
      $context->data = new stdClass();
      $context->title = t("Relcontext context from simplecontext");
      $context->data->login = $data['login'];

      return $context;
    }
  }
  else {
    // $data is coming from an arg - it's just a string.
    // This is used for keyword...
  }
}

/**
 * Plugin settings form.
 */
function ldp_contexts_profile_settings_form($form, &$form_state) {
  $values = $form_state['conf'];

  $form['login'] = array(
    '#type' => 'textfield',
    '#title' => t('LinkedIn User Login'),
    '#size' => 50,
    '#description' => t('User profile to display later.'),
    '#default_value' => !empty($values['login']) ? $values['login'] : '',
  );

  return $form;
}

/**
 * It is the config form of the content type.
 */
function ldp_contexts_profile_settings_form_submit($form, &$form_state) {
  $form_state['conf']['login'] = $form_state['values']['login'];
}

