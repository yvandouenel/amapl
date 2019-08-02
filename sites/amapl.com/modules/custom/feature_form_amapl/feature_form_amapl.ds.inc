<?php
/**
 * @file
 * feature_form_amapl.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function feature_form_amapl_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'entityform|inscription_amapl_caa|default';
  $ds_fieldsetting->entity_type = 'entityform';
  $ds_fieldsetting->bundle = 'inscription_amapl_caa';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_date_du' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Exercice comptable à prendre en compte du ',
        ),
      ),
    ),
  );
  $export['entityform|inscription_amapl_caa|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_form_amapl_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'entityform|inscription_amapl_caa|default';
  $ds_layout->entity_type = 'entityform';
  $ds_layout->bundle = 'inscription_amapl_caa';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_historique_paiement',
      ),
      'left' => array(
        1 => 'field_nom_prenom',
        2 => 'field_ou_denomination_sociale',
        3 => 'field_adresse_professionnelle',
        4 => 'field_adresse_correspondance',
        5 => 'field_phone',
        6 => 'field_email',
        7 => 'field_choix_antenne',
        8 => 'field_date_du',
        9 => 'field_date_au',
        10 => 'field_forme_juridique_caa',
        11 => 'field_fj_autre',
        12 => 'field_nature_activite',
        13 => 'field_date_debut',
        14 => 'field_siret',
        15 => 'field_non_pro',
        16 => 'field_code_ape',
        17 => 'field_source_etrangere',
        18 => 'field_type_adhesion_caa',
        19 => 'field_activity_details',
      ),
      'right' => array(
        20 => 'field_imposition_benefices',
        21 => 'field_regime_declaratif',
        22 => 'field_situation_tva',
        23 => 'field_assistance',
        24 => 'field_assistance_nom',
        25 => 'field_assistance_adresse',
        26 => 'field_assistance_phone',
        27 => 'field_assistance_fax',
        28 => 'field_assistance_email',
        29 => 'field_provenance',
        31 => 'field_cgv',
        32 => 'field_payment_online',
      ),
      'footer' => array(
        30 => 'field_paiement_caa',
      ),
    ),
    'fields' => array(
      'field_historique_paiement' => 'header',
      'field_nom_prenom' => 'left',
      'field_ou_denomination_sociale' => 'left',
      'field_adresse_professionnelle' => 'left',
      'field_adresse_correspondance' => 'left',
      'field_phone' => 'left',
      'field_email' => 'left',
      'field_choix_antenne' => 'left',
      'field_date_du' => 'left',
      'field_date_au' => 'left',
      'field_forme_juridique_caa' => 'left',
      'field_fj_autre' => 'left',
      'field_nature_activite' => 'left',
      'field_date_debut' => 'left',
      'field_siret' => 'left',
      'field_non_pro' => 'left',
      'field_code_ape' => 'left',
      'field_source_etrangere' => 'left',
      'field_type_adhesion_caa' => 'left',
      'field_activity_details' => 'left',
      'field_imposition_benefices' => 'right',
      'field_regime_declaratif' => 'right',
      'field_situation_tva' => 'right',
      'field_assistance' => 'right',
      'field_assistance_nom' => 'right',
      'field_assistance_adresse' => 'right',
      'field_assistance_phone' => 'right',
      'field_assistance_fax' => 'right',
      'field_assistance_email' => 'right',
      'field_provenance' => 'right',
      'field_paiement_caa' => 'footer',
      'field_cgv' => 'right',
      'field_payment_online' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['entityform|inscription_amapl_caa|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'entityform|inscription_amapl|default';
  $ds_layout->entity_type = 'entityform';
  $ds_layout->bundle = 'inscription_amapl';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_historique_paiement',
      ),
      'left' => array(
        1 => 'field_pour_les_revenus',
        2 => 'field_forme_juridique',
        3 => 'field_fj_autre',
        4 => 'field_nombre_associes',
        5 => 'field_nom_prenom',
        6 => 'field_ou_denomination_sociale',
        7 => 'field_adresse_professionnelle',
        8 => 'field_adresse_correspondance',
        9 => 'field_phone',
        10 => 'field_email',
        11 => 'field_siret',
        12 => 'field_non_pro',
        13 => 'field_source_etrangere',
        14 => 'field_micro_autoentrepreneur',
        23 => 'field_activity_details',
      ),
      'right' => array(
        15 => 'field_nature_activite',
        16 => 'field_date_debut',
        17 => 'field_type_adhesion',
        18 => 'field_autre_type_adhesion',
        19 => 'field_autre_aga',
        20 => 'field_assistance',
        21 => 'field_choix_antenne',
      ),
      'footer' => array(
        22 => 'field_paiement',
      ),
    ),
    'fields' => array(
      'field_historique_paiement' => 'header',
      'field_pour_les_revenus' => 'left',
      'field_forme_juridique' => 'left',
      'field_fj_autre' => 'left',
      'field_nombre_associes' => 'left',
      'field_nom_prenom' => 'left',
      'field_ou_denomination_sociale' => 'left',
      'field_adresse_professionnelle' => 'left',
      'field_adresse_correspondance' => 'left',
      'field_phone' => 'left',
      'field_email' => 'left',
      'field_siret' => 'left',
      'field_non_pro' => 'left',
      'field_source_etrangere' => 'left',
      'field_micro_autoentrepreneur' => 'left',
      'field_nature_activite' => 'right',
      'field_date_debut' => 'right',
      'field_type_adhesion' => 'right',
      'field_autre_type_adhesion' => 'right',
      'field_autre_aga' => 'right',
      'field_assistance' => 'right',
      'field_choix_antenne' => 'right',
      'field_paiement' => 'footer',
      'field_activity_details' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
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
        1 => 'group_annee_adhesion',
        2 => 'group_forme_juridique',
        3 => 'field_pour_les_revenus',
        4 => 'field_nom_prenom',
        5 => 'field_ou_denomination_sociale',
        6 => 'field_forme_juridique',
        7 => 'group_identification',
        8 => 'group_activite',
        9 => 'field_fj_autre',
        10 => 'field_adresse_professionnelle',
        11 => 'field_adresse_correspondance',
        12 => 'field_nombre_associes',
        13 => 'group_tenue',
        14 => 'group_prix',
        15 => 'field_provenance',
        16 => 'field_phone',
        17 => 'field_autre_provenance',
        18 => 'field_email',
        19 => 'field_nature_activite',
        20 => 'field_cgv',
        21 => 'field_payment_online',
        22 => 'field_date_debut',
        24 => 'field_non_pro',
        26 => 'field_siret',
        27 => 'field_code_ape',
        29 => 'field_source_etrangere',
        30 => 'field_micro_autoentrepreneur',
        31 => 'field_type_adhesion',
        32 => 'field_autre_type_adhesion',
        33 => 'field_assistance',
        34 => 'field_autre_aga',
        35 => 'field_assistance_nom',
        36 => 'field_profession',
        37 => 'field_assistance_adresse',
        38 => 'field_assistance_phone',
        39 => 'field_assistance_fax',
        40 => 'field_assistance_email',
        41 => 'field_paiement',
        42 => 'field_prix',
      ),
      'hidden' => array(
        23 => 'redirect',
        25 => 'field_historique_paiement',
        28 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_choix_antenne' => 'ds_content',
      'group_annee_adhesion' => 'ds_content',
      'group_forme_juridique' => 'ds_content',
      'field_pour_les_revenus' => 'ds_content',
      'field_nom_prenom' => 'ds_content',
      'field_ou_denomination_sociale' => 'ds_content',
      'field_forme_juridique' => 'ds_content',
      'group_identification' => 'ds_content',
      'group_activite' => 'ds_content',
      'field_fj_autre' => 'ds_content',
      'field_adresse_professionnelle' => 'ds_content',
      'field_adresse_correspondance' => 'ds_content',
      'field_nombre_associes' => 'ds_content',
      'group_tenue' => 'ds_content',
      'group_prix' => 'ds_content',
      'field_provenance' => 'ds_content',
      'field_phone' => 'ds_content',
      'field_autre_provenance' => 'ds_content',
      'field_email' => 'ds_content',
      'field_nature_activite' => 'ds_content',
      'field_cgv' => 'ds_content',
      'field_payment_online' => 'ds_content',
      'field_date_debut' => 'ds_content',
      'redirect' => 'hidden',
      'field_non_pro' => 'ds_content',
      'field_historique_paiement' => 'hidden',
      'field_siret' => 'ds_content',
      'field_code_ape' => 'ds_content',
      '_add_existing_field' => 'hidden',
      'field_source_etrangere' => 'ds_content',
      'field_micro_autoentrepreneur' => 'ds_content',
      'field_type_adhesion' => 'ds_content',
      'field_autre_type_adhesion' => 'ds_content',
      'field_assistance' => 'ds_content',
      'field_autre_aga' => 'ds_content',
      'field_assistance_nom' => 'ds_content',
      'field_profession' => 'ds_content',
      'field_assistance_adresse' => 'ds_content',
      'field_assistance_phone' => 'ds_content',
      'field_assistance_fax' => 'ds_content',
      'field_assistance_email' => 'ds_content',
      'field_paiement' => 'ds_content',
      'field_prix' => 'ds_content',
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
