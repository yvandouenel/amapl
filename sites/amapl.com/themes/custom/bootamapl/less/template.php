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