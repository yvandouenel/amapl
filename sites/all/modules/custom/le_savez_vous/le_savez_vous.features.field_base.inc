<?php
/**
 * @file
 * le_savez_vous.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function le_savez_vous_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_control_ss'
  $field_bases['field_control_ss'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_control_ss',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 1,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}