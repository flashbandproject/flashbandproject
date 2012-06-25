<?php
/**
 * @file
 * flashband_users.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function flashband_users_user_default_permissions() {
  $permissions = array();

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'user',
  );

  return $permissions;
}
