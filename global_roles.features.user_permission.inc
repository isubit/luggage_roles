<?php
/**
 * @file
 * global_roles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function global_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
