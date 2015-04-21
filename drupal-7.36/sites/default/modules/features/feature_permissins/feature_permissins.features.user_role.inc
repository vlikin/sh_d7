<?php
/**
 * @file
 * feature_permissins.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_permissins_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: manager.
  $roles['manager'] = array(
    'name' => 'manager',
    'weight' => 3,
  );

  return $roles;
}
