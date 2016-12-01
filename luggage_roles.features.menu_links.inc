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

  // Exported menu link: main-menu_:categories.
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
  // Exported menu link: menu-categories-mega-menu_content-by-category:<front>.
  $menu_links['menu-categories-mega-menu_content-by-category:<front>'] = array(
    'menu_name' => 'menu-categories-mega-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Content by Category',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'identifier' => 'menu-categories-mega-menu_content-by-category:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Content by Category');
  t('≡');

  return $menu_links;
}
