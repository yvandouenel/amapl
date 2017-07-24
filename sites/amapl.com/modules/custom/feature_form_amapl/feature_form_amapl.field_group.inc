<?php
/**
 * @file
 * feature_form_amapl.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_form_amapl_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_activite|entityform|inscription_amapl|form';
  $field_group->group_name = 'group_activite';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'inscription_amapl';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Renseignements relatifs à l\'activité',
    'weight' => '3',
    'children' => array(
      0 => 'field_nature_activite',
      1 => 'field_non_pro',
      2 => 'field_siret',
      3 => 'field_source_etrangere',
      4 => 'field_micro_autoentrepreneur',
      5 => 'field_date_debut',
      6 => 'field_type_adhesion',
      7 => 'field_autre_type_adhesion',
      8 => 'field_autre_aga',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Renseignements relatifs à l\'activité',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-activite field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_activite|entityform|inscription_amapl|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_forme_juridique|entityform|inscription_amapl|form';
  $field_group->group_name = 'group_forme_juridique';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'inscription_amapl';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Forme juridique',
    'weight' => '1',
    'children' => array(
      0 => 'field_forme_juridique',
      1 => 'field_fj_autre',
      2 => 'field_nombre_associes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Forme juridique',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-forme-juridique field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_forme_juridique|entityform|inscription_amapl|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_identification|entityform|inscription_amapl|form';
  $field_group->group_name = 'group_identification';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'inscription_amapl';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Identification',
    'weight' => '2',
    'children' => array(
      0 => 'field_nom_prenom',
      1 => 'field_ou_denomination_sociale',
      2 => 'field_adresse_professionnelle',
      3 => 'field_adresse_correspondance',
      4 => 'field_phone',
      5 => 'field_email',
      6 => 'field_provenance',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Identification',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-identification field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_identification|entityform|inscription_amapl|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tenue|entityform|inscription_amapl|form';
  $field_group->group_name = 'group_tenue';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'inscription_amapl';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tenue des documents comptables',
    'weight' => '4',
    'children' => array(
      0 => 'field_assistance',
      1 => 'field_assistance_nom',
      2 => 'field_profession',
      3 => 'field_assistance_adresse',
      4 => 'field_assistance_phone',
      5 => 'field_assistance_fax',
      6 => 'field_assistance_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tenue field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tenue|entityform|inscription_amapl|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Forme juridique');
  t('Identification');
  t('Renseignements relatifs à l\'activité');
  t('Tenue des documents comptables');

  return $field_groups;
}
