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
  $fe_block_boxes->info = 'logo constellation de bas de page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'logo_constellation';
  $fe_block_boxes->body = '<p><a href="http://constellians.com" onclick="window.open(this.href, \'\', \'resizable=yes,status=no,location=no,toolbar=no,menubar=no,fullscreen=no,scrollbars=yes,dependent=no,width=600,height=1500\'); return false;"><img alt="" src="/sites/bdpl.fr/files/images/logos/logo-constellians.png" style="height:85px; width:217px" /></a></p>
';

  $export['logo_constellation'] = $fe_block_boxes;

  return $export;
}
