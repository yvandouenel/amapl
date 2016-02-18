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