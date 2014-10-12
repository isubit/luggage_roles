<?php
/**
 * @file
 * luggage_roles.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function luggage_roles_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_:categories
  $menu_links['main-menu_:categories'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'categories',
    'router_path' => 'categories',
    'link_title' => '≡',
    'options' => array(
      'identifier' => 'main-menu_:categories',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer_site-index:site-index
  $menu_links['menu-footer_site-index:site-index'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'site-index',
    'router_path' => 'site-index',
    'link_title' => 'Site Index',
    'options' => array(
      'identifier' => 'menu-footer_site-index:site-index',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Site Index');
  t('≡');


  return $menu_links;
}
