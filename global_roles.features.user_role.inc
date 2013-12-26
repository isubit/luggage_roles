<?php
/**
 * @file
 * global_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function global_roles_user_default_roles() {
  $roles = array();

  // Exported role: ISUITC admin.
  $roles['ISUITC admin'] = array(
    'name' => 'ISUITC admin',
    'weight' => 5,
  );

  // Exported role: content editor.
  $roles['content editor'] = array(
    'name' => 'content editor',
    'weight' => 2,
  );

  // Exported role: content publisher.
  $roles['content publisher'] = array(
    'name' => 'content publisher',
    'weight' => 3,
  );

  // Exported role: site admin.
  $roles['site admin'] = array(
    'name' => 'site admin',
    'weight' => 4,
  );

  return $roles;
}
