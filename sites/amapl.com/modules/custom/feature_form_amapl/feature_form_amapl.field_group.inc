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
    'weight' => '4',
    'children' => array(
      0 => 'field_autre_aga',
      1 => 'field_autre_type_adhesion',
      2 => 'field_code_ape',
      3 => 'field_date_debut',
      4 => 'field_micro_autoentrepreneur',
      5 => 'field_nature_activite',
      6 => 'field_non_pro',
      7 => 'field_siret',
      8 => 'field_source_etrangere',
      9 => 'field_type_adhesion',
      10 => 'field_activity_details',
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
  $field_group->identifier = 'group_annee_adhesion|entityform|inscription_amapl|form';
  $field_group->group_name = 'group_annee_adhesion';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'inscription_amapl';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Année d\'adhésion',
    'weight' => '1',
    'children' => array(
      0 => 'field_pour_les_revenus',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Année d\'adhésion',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-annee-adhesion field-group-div',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_annee_adhesion|entityform|inscription_amapl|form'] = $field_group;

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
    'weight' => '2',
    'children' => array(
      0 => 'field_fj_autre',
      1 => 'field_forme_juridique',
      2 => 'field_nombre_associes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Forme juridique',
      'instance_settings' => array(
        'required_fields' => 1,
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
    'weight' => '3',
    'children' => array(
      0 => 'field_adresse_correspondance',
      1 => 'field_adresse_professionnelle',
      2 => 'field_email',
      3 => 'field_nom_prenom',
      4 => 'field_ou_denomination_sociale',
      5 => 'field_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Identification',
      'instance_settings' => array(
        'required_fields' => 1,
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
  $field_group->identifier = 'group_prix|entityform|inscription_amapl|form';
  $field_group->group_name = 'group_prix';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'inscription_amapl';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Cotisation',
    'weight' => '6',
    'children' => array(
      0 => 'field_paiement',
      1 => 'field_prix',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Cotisation',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-prix field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_prix|entityform|inscription_amapl|form'] = $field_group;

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
    'weight' => '5',
    'children' => array(
      0 => 'field_assistance',
      1 => 'field_assistance_adresse',
      2 => 'field_assistance_email',
      3 => 'field_assistance_fax',
      4 => 'field_assistance_nom',
      5 => 'field_assistance_phone',
      6 => 'field_profession',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Tenue des documents comptables',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-tenue field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_tenue|entityform|inscription_amapl|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Année d\'adhésion');
  t('Cotisation');
  t('Forme juridique');
  t('Identification');
  t('Renseignements relatifs à l\'activité');
  t('Tenue des documents comptables');

  return $field_groups;
}
