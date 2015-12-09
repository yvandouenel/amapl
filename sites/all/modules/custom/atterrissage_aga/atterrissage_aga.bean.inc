<?php
/**
 * @file
 * atterrissage_aga.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function atterrissage_aga_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'bloc_logo';
  $bean_type->label = 'bloc logo';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['bloc_logo'] = $bean_type;

  return $export;
}
