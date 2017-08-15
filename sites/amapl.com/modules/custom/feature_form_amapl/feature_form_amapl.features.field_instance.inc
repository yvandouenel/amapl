<?php
/**
 * @file
 * feature_form_amapl.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_form_amapl_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-inscription_amapl-field_adresse_correspondance'
  $field_instances['entityform-inscription_amapl-field_adresse_correspondance'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_adresse_correspondance',
    'label' => 'Adresse correspondance',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'show_token_tree' => 0,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_adresse_professionnelle'
  $field_instances['entityform-inscription_amapl-field_adresse_professionnelle'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_adresse_professionnelle',
    'label' => 'Adresse professionnelle',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'show_token_tree' => 0,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_assistance'
  $field_instances['entityform-inscription_amapl-field_assistance'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 21,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_assistance',
    'label' => 'Assistance d’un professionnel',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_assistance_adresse'
  $field_instances['entityform-inscription_amapl-field_assistance_adresse'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_assistance_adresse',
    'label' => 'Adresse',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'show_token_tree' => 0,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_assistance_email'
  $field_instances['entityform-inscription_amapl-field_assistance_email'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 23,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_assistance_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'show_token_tree' => 0,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_assistance_fax'
  $field_instances['entityform-inscription_amapl-field_assistance_fax'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_assistance_fax',
    'label' => 'Fax',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'show_token_tree' => 0,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_assistance_nom'
  $field_instances['entityform-inscription_amapl-field_assistance_nom'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_assistance_nom',
    'label' => 'Nom et prénom ou société',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'show_token_tree' => 0,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_assistance_phone'
  $field_instances['entityform-inscription_amapl-field_assistance_phone'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_assistance_phone',
    'label' => 'Téléphone',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'show_token_tree' => 0,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_autre_aga'
  $field_instances['entityform-inscription_amapl-field_autre_aga'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_autre_aga',
    'label' => 'Nom et adresse de la précédente association agréée',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'show_token_tree' => 0,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_autre_type_adhesion'
  $field_instances['entityform-inscription_amapl-field_autre_type_adhesion'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_autre_type_adhesion',
    'label' => 'Autre',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'show_token_tree' => 0,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_cgv'
  $field_instances['entityform-inscription_amapl-field_cgv'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '<a href="/adherer/cgv" target="_blank">Voir les Conditions Générales de Vente</a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 30,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_cgv',
    'label' => 'J\'accepte les CGV',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_choix_antenne'
  $field_instances['entityform-inscription_amapl-field_choix_antenne'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 22,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_choix_antenne',
    'label' => 'Choix de l\'antenne',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_date_debut'
  $field_instances['entityform-inscription_amapl-field_date_debut'] = array(
    'bundle' => 'inscription_amapl',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 17,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_date_debut',
    'label' => 'Date de début d’activité (ou de reprise d’activité après cessation)',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '1970:+0',
      ),
      'type' => 'date_popup',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_email'
  $field_instances['entityform-inscription_amapl-field_email'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 10,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_fj_autre'
  $field_instances['entityform-inscription_amapl-field_fj_autre'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_fj_autre',
    'label' => 'Autre forme juridique',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'show_token_tree' => 0,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_forme_juridique'
  $field_instances['entityform-inscription_amapl-field_forme_juridique'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_forme_juridique',
    'label' => 'Forme juridique',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_historique_paiement'
  $field_instances['entityform-inscription_amapl-field_historique_paiement'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_historique_paiement',
    'label' => 'Historique de paiement',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'show_token_tree' => 0,
      ),
      'type' => 'text_textarea',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_micro_autoentrepreneur'
  $field_instances['entityform-inscription_amapl-field_micro_autoentrepreneur'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_micro_autoentrepreneur',
    'label' => 'Cochez cette case si Micro-BNC ou Auto-entrepreneur',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_nature_activite'
  $field_instances['entityform-inscription_amapl-field_nature_activite'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_nature_activite',
    'label' => 'Nature de l\'activité',
    'required' => 1,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'show_token_tree' => 0,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_nom_prenom'
  $field_instances['entityform-inscription_amapl-field_nom_prenom'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'L\'un des deux champs suivants est recquis.<span class="form-required" title="Ce champ est requis.">*</span>',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'markup_text_formatter',
        'settings' => array(
          'markup' => 'h3',
        ),
        'type' => 'markup_text',
        'weight' => 5,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_nom_prenom',
    'label' => 'Nom et prénom',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'show_token_tree' => 0,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_nombre_associes'
  $field_instances['entityform-inscription_amapl-field_nombre_associes'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_nombre_associes',
    'label' => 'Nombre associés',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_non_pro'
  $field_instances['entityform-inscription_amapl-field_non_pro'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 13,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_non_pro',
    'label' => 'Cochez cette case si l\'activité n\'est pas professionnelle',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_ou_denomination_sociale'
  $field_instances['entityform-inscription_amapl-field_ou_denomination_sociale'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_ou_denomination_sociale',
    'label' => 'Ou dénomination sociale',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'show_token_tree' => 0,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_paiement'
  $field_instances['entityform-inscription_amapl-field_paiement'] = array(
    'bundle' => 'inscription_amapl',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paymentform',
        'settings' => array(),
        'type' => 'paymentform',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_paiement',
    'label' => 'Paiement',
    'required' => 0,
    'settings' => array(
      'currency_code' => 'EUR',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paymentform',
      'settings' => array(),
      'type' => 'paymentform_line_item',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_phone'
  $field_instances['entityform-inscription_amapl-field_phone'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_phone',
    'label' => 'Téléphone',
    'required' => 1,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'show_token_tree' => 0,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_prix'
  $field_instances['entityform-inscription_amapl-field_prix'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p id="p-price-form-AMAPL">Votre cotisation unique : <span id="price-form-AMAPL"></span></p>
<ul>
<li>Cotisation unique * : <strong>195 € TTC</strong> (162,50 € HT + TVA AU TAUX DE 20 % : 32,50 €)<br>
* COTISATION DE <strong>97 €</strong> POUR MICRO-BNC, AUTO-ENTREPRENEURS ET ADHERENTS AYANT DEBUTE LEUR ACTIVITE PROFESSIONNELLE EN 2017.</li>
<li>UNIQUEMENT SOCIETES ** : <strong>312 € TTC</strong> (162,50 € HT + COUT COMPLEMENTAIRE POUR ETUDE DE LA DECLARATION N ° 2035 : 97,50 € HT +TVA AU TAUX DE 20 % : 52 €)<br>
** EXCEPTEES EURL ET SELARL A ASSOCIE UNIQUE , QUI SONT SEULEMENT SOUMISES A LA COTISATION UNIQUE DE <strong>195 € TTC</strong></li>
</ul>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_prix',
    'label' => 'Prix TTC',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'show_token_tree' => 0,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_profession'
  $field_instances['entityform-inscription_amapl-field_profession'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_profession',
    'label' => 'Profession',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'show_token_tree' => 0,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_provenance'
  $field_instances['entityform-inscription_amapl-field_provenance'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_provenance',
    'label' => 'Comment nous avez-vous connu ?',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'show_token_tree' => 0,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_siret'
  $field_instances['entityform-inscription_amapl-field_siret'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_siret',
    'label' => 'Numéro de siret',
    'required' => 1,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'show_token_tree' => 0,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_source_etrangere'
  $field_instances['entityform-inscription_amapl-field_source_etrangere'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_source_etrangere',
    'label' => 'Revenus de source étrangère ?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'entityform-inscription_amapl-field_type_adhesion'
  $field_instances['entityform-inscription_amapl-field_type_adhesion'] = array(
    'bundle' => 'inscription_amapl',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 18,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_type_adhesion',
    'label' => 'Type d\'adhésion',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<a href="/adherer/cgv" target="_blank">Voir les Conditions Générales de Vente</a>');
  t('<p id="p-price-form-AMAPL">Votre cotisation unique : <span id="price-form-AMAPL"></span></p>
<ul>
<li>Cotisation unique * : <strong>195 € TTC</strong> (162,50 € HT + TVA AU TAUX DE 20 % : 32,50 €)<br>
* COTISATION DE <strong>97 €</strong> POUR MICRO-BNC, AUTO-ENTREPRENEURS ET ADHERENTS AYANT DEBUTE LEUR ACTIVITE PROFESSIONNELLE EN 2017.</li>
<li>UNIQUEMENT SOCIETES ** : <strong>312 € TTC</strong> (162,50 € HT + COUT COMPLEMENTAIRE POUR ETUDE DE LA DECLARATION N ° 2035 : 97,50 € HT +TVA AU TAUX DE 20 % : 52 €)<br>
** EXCEPTEES EURL ET SELARL A ASSOCIE UNIQUE , QUI SONT SEULEMENT SOUMISES A LA COTISATION UNIQUE DE <strong>195 € TTC</strong></li>
</ul>');
  t('Adresse');
  t('Adresse correspondance');
  t('Adresse professionnelle');
  t('Assistance d’un professionnel');
  t('Autre');
  t('Autre forme juridique');
  t('Choix de l\'antenne');
  t('Cochez cette case si Micro-BNC ou Auto-entrepreneur');
  t('Cochez cette case si l\'activité n\'est pas professionnelle');
  t('Comment nous avez-vous connu ?');
  t('Date de début d’activité (ou de reprise d’activité après cessation)');
  t('Email');
  t('Fax');
  t('Forme juridique');
  t('Historique de paiement');
  t('J\'accepte les CGV');
  t('L\'un des deux champs suivants est recquis.<span class="form-required" title="Ce champ est requis.">*</span>');
  t('Nature de l\'activité');
  t('Nom et adresse de la précédente association agréée');
  t('Nom et prénom');
  t('Nom et prénom ou société');
  t('Nombre associés');
  t('Numéro de siret');
  t('Ou dénomination sociale');
  t('Paiement');
  t('Prix TTC');
  t('Profession');
  t('Revenus de source étrangère ?');
  t('Type d\'adhésion');
  t('Téléphone');

  return $field_instances;
}
