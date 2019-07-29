<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

/**
 * Appel du fichier js /js/homme_ss_images.js depuis la page d'accueil
 */
function bootamapl_preprocess_page(&$vars) {
  /**
   * Gestion de la classe du titre principal
  */
  $vars['title_class'] = "complex-title";
  if (views_get_page_view() && views_get_page_view()->name == "files" ){
    $vars['title_class'] = "simple-title";
  }
  else if (views_get_page_view() && views_get_page_view()->name == "lettres_info" ){
    $vars['title_class'] = "simple-title";
  }
  else if (isset($vars['node']) &&
    isset($vars['node']->field_titre_simple_['und'][0]['value']) &&
    $vars['node']->field_titre_simple_['und'][0]['value']) {
      $vars['title_class'] = "simple-title";
  }

  // Gestion du slideshow d'accueil
  if(drupal_is_front_page()) {
    drupal_add_js(drupal_get_path('theme', 'bootamapl') . '/js/homme_ss_images.js');
  }
  // Gestion des paragraphes qui s'ouvrent et se ferment au click sur un titre
  drupal_add_js(drupal_get_path('theme', 'bootamapl') . '/js/drop-down-para.js');
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
  if($vars['view_mode'] == 'zoom') {
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '__zoom';
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->nid . '__zoom';
  }
}