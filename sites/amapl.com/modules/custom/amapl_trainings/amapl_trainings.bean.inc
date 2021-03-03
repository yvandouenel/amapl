<?php
/**
 * @file
 * amapl_trainings.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function amapl_trainings_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'intro_formation';
  $bean_type->label = 'Intro formation';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['intro_formation'] = $bean_type;

  return $export;
}
