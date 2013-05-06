<?php
/**
 * @file
 * humanitarianresponse_minimal_layout.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function humanitarianresponse_minimal_layout_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer contexts.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'context_ui',
  );

  return $permissions;
}
