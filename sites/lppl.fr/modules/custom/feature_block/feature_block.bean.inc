<?php
/**
 * @file
 * feature_block.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function feature_block_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'bloc_simple';
  $bean_type->label = 'bloc-simple';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['bloc_simple'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'je_m_installe';
  $bean_type->label = 'Je m_installe';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['je_m_installe'] = $bean_type;

  return $export;
}
