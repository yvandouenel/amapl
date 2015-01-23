<?php
/**
 * @file
 * feature_crumbs.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_crumbs_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_crumbs:admin/structure/crumbs
  $menu_links['management_crumbs:admin/structure/crumbs'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/crumbs',
    'router_path' => 'admin/structure/crumbs',
    'link_title' => 'Crumbs',
    'options' => array(
      'identifier' => 'management_crumbs:admin/structure/crumbs',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Crumbs');


  return $menu_links;
}
