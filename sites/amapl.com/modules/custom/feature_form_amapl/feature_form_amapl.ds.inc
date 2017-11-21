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
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_historique_paiement',
      ),
      'left' => array(
        1 => 'field_forme_juridique',
        2 => 'field_fj_autre',
        3 => 'field_nombre_associes',
        4 => 'field_nom_prenom',
        5 => 'field_ou_denomination_sociale',
        6 => 'field_adresse_professionnelle',
        7 => 'field_adresse_correspondance',
        8 => 'field_phone',
        9 => 'field_email',
        10 => 'field_siret',
        11 => 'field_non_pro',
        12 => 'field_source_etrangere',
        13 => 'field_micro_autoentrepreneur',
      ),
      'right' => array(
        14 => 'field_nature_activite',
        15 => 'field_date_debut',
        16 => 'field_type_adhesion',
        17 => 'field_autre_type_adhesion',
        18 => 'field_autre_aga',
        19 => 'field_assistance',
        20 => 'field_choix_antenne',
        21 => 'field_assistance_email',
        22 => 'field_provenance',
        23 => 'field_autre_provenance',
      ),
      'footer' => array(
        24 => 'field_paiement',
      ),
    ),
    'fields' => array(
      'field_historique_paiement' => 'header',
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
      'field_assistance_email' => 'right',
      'field_provenance' => 'right',
      'field_autre_provenance' => 'right',
      'field_paiement' => 'footer',
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
