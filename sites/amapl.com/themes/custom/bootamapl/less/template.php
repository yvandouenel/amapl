<?php
/**
 * @file
 * The primary PHP file for this theme.
 */
function bootamapl_preprocess_page(&$vars) {
  if(drupal_is_front_page()) {
    drupal_add_js(drupal_get_path('theme', 'bootamapl') . '/js/homme_ss_images.js');
  }
}
/**
 * Permet de choisir un nom de theme pour un display ou un node donné
 * That will let you use a template file like: node--[type|nodeid]--teaser.tpl.php
 */
function bootamapl_preprocess_node(&$vars) {
  if($vars['view_mode'] == 'teaser') {
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '__teaser';
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->nid . '__teaser';
  }
}