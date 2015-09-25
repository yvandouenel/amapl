<?php
/**
 * @file
 * feature_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_event_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_practical_event|node|event|default';
  $field_group->group_name = 'group_practical_event';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'En pratique',
    'weight' => '8',
    'children' => array(
      0 => 'field_scald_file',
      1 => 'field_event_place',
      2 => 'field_event_cost_public',
      3 => 'field_cost_members',
      4 => 'field_event_registration',
      5 => 'field_dates',
      6 => 'en_pratique',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'En pratique',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-practical-event field-group-fieldset',
        'wrapper' => 'aside',
      ),
    ),
  );
  $export['group_practical_event|node|event|default'] = $field_group;

  return $export;
}
