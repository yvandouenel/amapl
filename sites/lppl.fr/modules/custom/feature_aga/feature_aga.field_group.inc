<?php
/**
 * @file
 * feature_aga.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_aga_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_accordion_appointment|node|aga_membre|default';
  $field_group->group_name = 'group_accordion_appointment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'aga_membre';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Accordéon RDV',
    'weight' => '4',
    'children' => array(
      0 => 'group_appointment_accordion',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'label' => 'Accordéon RDV',
      'instance_settings' => array(
        'classes' => 'group-accordion-appointment field-group-accordion',
        'description' => '',
        'effect' => 'bounceslide',
      ),
    ),
  );
  $export['group_accordion_appointment|node|aga_membre|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_appointment_accordion|node|aga_membre|default';
  $field_group->group_name = 'group_appointment_accordion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'aga_membre';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_accordion_appointment';
  $field_group->data = array(
    'label' => 'Demande de RDV',
    'weight' => '19',
    'children' => array(
      0 => 'field_aga_appointment',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-appointment-accordion field-group-accordion-item',
      ),
    ),
  );
  $export['group_appointment_accordion|node|aga_membre|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coord|node|aga_membre|default';
  $field_group->group_name = 'group_coord';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'aga_membre';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Coordonnées',
    'weight' => '3',
    'children' => array(
      0 => 'field_aga_tel',
      1 => 'field_aga_web_site',
      2 => 'field_aga_mail',
      3 => 'field_aga_adress',
      4 => 'field_aga_zip_code',
      5 => 'field_aga_city',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Coordonnées',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-coord field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_coord|node|aga_membre|default'] = $field_group;

  return $export;
}
