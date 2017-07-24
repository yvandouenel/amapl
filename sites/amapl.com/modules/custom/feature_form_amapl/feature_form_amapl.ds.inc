<?php
/**
 * @file
 * feature_form_amapl.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_form_amapl_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'entityform|inscription_amapl|default';
  $ds_layout->entity_type = 'entityform';
  $ds_layout->bundle = 'inscription_amapl';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_choix_antenne',
        1 => 'field_forme_juridique',
        2 => 'field_fj_autre',
        3 => 'field_nombre_associes',
      ),
    ),
    'fields' => array(
      'field_choix_antenne' => 'ds_content',
      'field_forme_juridique' => 'ds_content',
      'field_fj_autre' => 'ds_content',
      'field_nombre_associes' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['entityform|inscription_amapl|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'entityform|inscription_amapl|form';
  $ds_layout->entity_type = 'entityform';
  $ds_layout->bundle = 'inscription_amapl';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_choix_antenne',
        1 => 'group_forme_juridique',
        2 => 'group_identification',
        3 => 'field_nom_prenom',
        4 => 'group_activite',
        5 => 'field_ou_denomination_sociale',
        6 => 'field_forme_juridique',
        7 => 'group_tenue',
        8 => 'field_fj_autre',
        9 => 'field_adresse_professionnelle',
        10 => 'field_adresse_correspondance',
        11 => 'field_nombre_associes',
        13 => 'field_phone',
        14 => 'field_email',
        15 => 'field_provenance',
        16 => 'field_nature_activite',
        17 => 'field_non_pro',
        18 => 'field_siret',
        19 => 'field_source_etrangere',
        20 => 'field_micro_autoentrepreneur',
        21 => 'field_date_debut',
        22 => 'field_type_adhesion',
        23 => 'field_autre_type_adhesion',
        24 => 'field_autre_aga',
        25 => 'field_assistance',
        26 => 'field_assistance_nom',
        27 => 'field_profession',
        28 => 'field_assistance_adresse',
        29 => 'field_assistance_phone',
        30 => 'field_assistance_fax',
        31 => 'field_assistance_email',
      ),
      'hidden' => array(
        12 => 'redirect',
        32 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_choix_antenne' => 'ds_content',
      'group_forme_juridique' => 'ds_content',
      'group_identification' => 'ds_content',
      'field_nom_prenom' => 'ds_content',
      'group_activite' => 'ds_content',
      'field_ou_denomination_sociale' => 'ds_content',
      'field_forme_juridique' => 'ds_content',
      'group_tenue' => 'ds_content',
      'field_fj_autre' => 'ds_content',
      'field_adresse_professionnelle' => 'ds_content',
      'field_adresse_correspondance' => 'ds_content',
      'field_nombre_associes' => 'ds_content',
      'redirect' => 'hidden',
      'field_phone' => 'ds_content',
      'field_email' => 'ds_content',
      'field_provenance' => 'ds_content',
      'field_nature_activite' => 'ds_content',
      'field_non_pro' => 'ds_content',
      'field_siret' => 'ds_content',
      'field_source_etrangere' => 'ds_content',
      'field_micro_autoentrepreneur' => 'ds_content',
      'field_date_debut' => 'ds_content',
      'field_type_adhesion' => 'ds_content',
      'field_autre_type_adhesion' => 'ds_content',
      'field_autre_aga' => 'ds_content',
      'field_assistance' => 'ds_content',
      'field_assistance_nom' => 'ds_content',
      'field_profession' => 'ds_content',
      'field_assistance_adresse' => 'ds_content',
      'field_assistance_phone' => 'ds_content',
      'field_assistance_fax' => 'ds_content',
      'field_assistance_email' => 'ds_content',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['entityform|inscription_amapl|form'] = $ds_layout;

  return $export;
}
