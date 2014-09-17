<?php
/**
 * @file
 * feature_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function feature_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'logo et baseline';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'logo';
  $fe_block_boxes->body = '<h1><a href="/."><img alt="LPPL.fr" src="/sites/lppl.fr/files/images/logo-lppl.png" style="height:60px; width:227px" /><br />
Le Portail des Professions Libérales</a></h1>';

  $export['logo'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'logo constellation de bas de page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'logo_constellation';
  $fe_block_boxes->body = '<p><a href="/constellation"><img alt="" src="/sites/lppl.fr/files/images/logo-constellians.png" style="height:86px; width:165px" /></a></p>
';

  $export['logo_constellation'] = $fe_block_boxes;

  return $export;
}
