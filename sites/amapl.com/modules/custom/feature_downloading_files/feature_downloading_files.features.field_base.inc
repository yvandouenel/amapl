<?php
/**
 * @file
 * feature_downloading_files.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function feature_downloading_files_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_files_img'.
  $field_bases['field_files_img'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_files_img',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  return $field_bases;
}
