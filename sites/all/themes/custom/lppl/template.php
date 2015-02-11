<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */
/*
 * Hook preprocess_page
 */
/*function lppl_preprocess_html(&$vars){
  $vars['attributes_array']['class'][] = 'site-' . current(array_splice(explode('.', $_SERVER['SERVER_NAME']), -2, 1)); 
}*/
/**
 * Add a google font
 */
function omega_preprocess_html(&$variables) {
  drupal_add_css('http://fonts.googleapis.com/css?family=Roboto',array('type' => 'external'));
  drupal_add_css('http://fonts.googleapis.com/css?family=Signika',array('type' => 'external'));
}
/*
 * Hook preprocess_views_view
 */
/*function lppl_preprocess_views_view(&$vars) {
  $view = &$vars['view'];
  
  // Make sure it's the correct view
  if ($view->name == 'aga_adherentes' and $view->current_display  == 'block_1') {
    dpm($view->name);
    // add needed javascript
    drupal_add_js(drupal_get_path('theme', 'lppl') . '/js/open-close-app.js');
    
  }
}*/
function lppl_preprocess_image(&$variables) {
  $attributes = &$variables['attributes'];
  foreach (array('width', 'height') as $key) {
    unset($attributes[$key]);
    unset($variables[$key]);
  }
}