<?php
/**
 * @file
 * The primary PHP file for this theme.
 */
function vigipl_preprocess_html(&$vars, $hook) {
  if ($vars['user']) {
    foreach($vars['user']->roles as $key => $role){
      $role_class = 'role-' . drupal_clean_css_identifier($role);
      $vars['classes_array'][] = $role_class;
    }
  }
}
function vigipl_preprocess_page(&$vars) {
  if(drupal_is_front_page()) {
    drupal_add_js(drupal_get_path('theme', 'vigipl') . '/js/jquery.matchHeight-min.js');
    drupal_add_js(drupal_get_path('theme', 'vigipl') . '/js/match-actu-height.js');
  }
}