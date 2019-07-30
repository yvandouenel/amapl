<?php
/**
 * @file
 * feature_block.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function feature_block_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-menu-bas.
  $menus['menu-menu-bas'] = array(
    'menu_name' => 'menu-menu-bas',
    'title' => 'Menu bas',
    'description' => '',
  );
  // Exported menu: menu-menu-haut.
  $menus['menu-menu-haut'] = array(
    'menu_name' => 'menu-menu-haut',
    'title' => 'Menu haut',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Menu bas');
  t('Menu haut');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
