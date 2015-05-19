<?php
/**
 * In contains module helpers.
 */

function _cm_init_facebook_sdk() {
  drupal_add_js(array('cm' => array('facebook_app_id' => CM_FACEBOOK_APP_ID)), 'setting');
  drupal_add_js(drupal_get_path('module', 'cm') . '/js/init_facebook_sdk.js');
}