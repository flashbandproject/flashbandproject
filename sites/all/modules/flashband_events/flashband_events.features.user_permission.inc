<?php
/**
 * @file
 * flashband_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function flashband_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: create flashband_event content.
  $permissions['create flashband_event content'] = array(
    'name' => 'create flashband_event content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any flashband_event content.
  $permissions['delete any flashband_event content'] = array(
    'name' => 'delete any flashband_event content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own flashband_event content.
  $permissions['delete own flashband_event content'] = array(
    'name' => 'delete own flashband_event content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any flashband_event content.
  $permissions['edit any flashband_event content'] = array(
    'name' => 'edit any flashband_event content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own flashband_event content.
  $permissions['edit own flashband_event content'] = array(
    'name' => 'edit own flashband_event content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
