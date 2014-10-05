<?php
/**
 * @file
 * luggage_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function luggage_roles_user_default_roles() {
  $roles = array();

  // Exported role: access admin.
  $roles['access admin'] = array(
    'name' => 'access admin',
    'weight' => 4,
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

  // Exported role: luggage admin.
  $roles['luggage admin'] = array(
    'name' => 'luggage admin',
    'weight' => 6,
  );

  // Exported role: site admin.
  $roles['site admin'] = array(
    'name' => 'site admin',
    'weight' => 4,
  );

  return $roles;
}
