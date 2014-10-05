<?php
/**
 * @file
 * luggage_roles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function luggage_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'access admin' => 'access admin',
      'authenticated user' => 'authenticated user',
      'luggage admin' => 'luggage admin',
      'site admin' => 'site admin',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'content editor' => 'content editor',
      'content publisher' => 'content publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'luggage admin' => 'luggage admin',
      'site admin' => 'site admin',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'luggage admin' => 'luggage admin',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      'luggage admin' => 'luggage admin',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'luggage admin' => 'luggage admin',
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'content editor' => 'content editor',
      'content publisher' => 'content publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'content publisher' => 'content publisher',
      'site admin' => 'site admin',
    ),
    'module' => 'path',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'content publisher' => 'content publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in category'.
  $permissions['delete terms in category'] = array(
    'name' => 'delete terms in category',
    'roles' => array(
      'content publisher' => 'content publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'content publisher' => 'content publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'content editor' => 'content editor',
      'content publisher' => 'content publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in category'.
  $permissions['edit terms in category'] = array(
    'name' => 'edit terms in category',
    'roles' => array(
      'content editor' => 'content editor',
      'content publisher' => 'content publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'content editor' => 'content editor',
      'content publisher' => 'content publisher',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'publish any content'.
  $permissions['publish any content'] = array(
    'name' => 'publish any content',
    'roles' => array(
      'content publisher' => 'content publisher',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'schedule (un)publishing of nodes'.
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'content publisher' => 'content publisher',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'show format tips'.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show more format tips link'.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'unpublish any content'.
  $permissions['unpublish any content'] = array(
    'name' => 'unpublish any content',
    'roles' => array(
      'content publisher' => 'content publisher',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'view menu options'.
  $permissions['view menu options'] = array(
    'name' => 'view menu options',
    'roles' => array(),
    'module' => 'jammer',
  );

  // Exported permission: 'view path options'.
  $permissions['view path options'] = array(
    'name' => 'view path options',
    'roles' => array(),
    'module' => 'jammer',
  );

  // Exported permission: 'view teaser controls'.
  $permissions['view teaser controls'] = array(
    'name' => 'view teaser controls',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'content editor' => 'content editor',
      'content publisher' => 'content publisher',
    ),
    'module' => 'jammer',
  );

  return $permissions;
}
