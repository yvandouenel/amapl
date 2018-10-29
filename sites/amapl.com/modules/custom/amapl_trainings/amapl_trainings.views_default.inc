<?php
/**
 * @file
 * amapl_trainings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function amapl_trainings_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'registrations_trainings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Inscriptions formations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Inscriptions formations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_session_dates' => 'field_session_dates',
    'title' => 'title',
    'field_amapl_form_member' => 'field_amapl_form_member',
    'anon_mail' => 'anon_mail',
    'field_amapl_form_last_name' => 'field_amapl_form_last_name',
    'field_amapl_form_first_name' => 'field_amapl_form_first_name',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_session_dates' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_amapl_form_member' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'anon_mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_amapl_form_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_amapl_form_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relation: Gestionnaire défectueux/manquant */
  $handler->display->display_options['relationships']['registration_rel']['id'] = 'registration_rel';
  $handler->display->display_options['relationships']['registration_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['registration_rel']['field'] = 'registration_rel';
  $handler->display->display_options['relationships']['registration_rel']['required'] = TRUE;
  /* Champ: Contenu : Dates */
  $handler->display->display_options['fields']['field_session_dates']['id'] = 'field_session_dates';
  $handler->display->display_options['fields']['field_session_dates']['table'] = 'field_data_field_session_dates';
  $handler->display->display_options['fields']['field_session_dates']['field'] = 'field_session_dates';
  $handler->display->display_options['fields']['field_session_dates']['label'] = 'Date de début de session';
  $handler->display->display_options['fields']['field_session_dates']['settings'] = array(
    'format_type' => 'tres_court_francais',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '0',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_session_dates']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_session_dates']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_session_dates']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_session_dates']['delta_offset'] = '0';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Titre de la session';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Champ: Registration : Num. adhérent AMAPL */
  $handler->display->display_options['fields']['field_amapl_form_member']['id'] = 'field_amapl_form_member';
  $handler->display->display_options['fields']['field_amapl_form_member']['table'] = 'field_data_field_amapl_form_member';
  $handler->display->display_options['fields']['field_amapl_form_member']['field'] = 'field_amapl_form_member';
  $handler->display->display_options['fields']['field_amapl_form_member']['relationship'] = 'registration_rel';
  /* Champ: Registration : Anonymous e-mail */
  $handler->display->display_options['fields']['anon_mail']['id'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['table'] = 'registration';
  $handler->display->display_options['fields']['anon_mail']['field'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['relationship'] = 'registration_rel';
  /* Champ: Registration : Nom */
  $handler->display->display_options['fields']['field_amapl_form_last_name']['id'] = 'field_amapl_form_last_name';
  $handler->display->display_options['fields']['field_amapl_form_last_name']['table'] = 'field_data_field_amapl_form_last_name';
  $handler->display->display_options['fields']['field_amapl_form_last_name']['field'] = 'field_amapl_form_last_name';
  $handler->display->display_options['fields']['field_amapl_form_last_name']['relationship'] = 'registration_rel';
  /* Champ: Registration : Prénom */
  $handler->display->display_options['fields']['field_amapl_form_first_name']['id'] = 'field_amapl_form_first_name';
  $handler->display->display_options['fields']['field_amapl_form_first_name']['table'] = 'field_data_field_amapl_form_first_name';
  $handler->display->display_options['fields']['field_amapl_form_first_name']['field'] = 'field_amapl_form_first_name';
  $handler->display->display_options['fields']['field_amapl_form_first_name']['relationship'] = 'registration_rel';
  /* Critère de tri: Contenu : Dates (field_session_dates) */
  $handler->display->display_options['sorts']['field_session_dates_value']['id'] = 'field_session_dates_value';
  $handler->display->display_options['sorts']['field_session_dates_value']['table'] = 'field_data_field_session_dates';
  $handler->display->display_options['sorts']['field_session_dates_value']['field'] = 'field_session_dates_value';
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_session' => 'training_session',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'registration_training_list');
  $handler->display->display_options['path'] = 'inscriptions-formations';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'registration_training_list_export');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 0;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'inscriptions-formations-amapl.csv';
  $handler->display->display_options['displays'] = array(
    'registration_training_list' => 'registration_training_list',
    'default' => 0,
  );
  $translatables['registrations_trainings'] = array(
    t('Master'),
    t('Inscriptions formations'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('registration_rel'),
    t('Date de début de session'),
    t('Titre de la session'),
    t('Num. adhérent AMAPL'),
    t('Anonymous e-mail'),
    t('Nom'),
    t('Prénom'),
    t('Page'),
    t('Data export'),
  );
  $export['registrations_trainings'] = $view;

  $view = new view();
  $view->name = 'trainings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Formations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training' => 'training',
  );
  /* Critère de filtrage: Contenu : Thématique (field_training_domain) */
  $handler->display->display_options['filters']['field_training_domain_tid']['id'] = 'field_training_domain_tid';
  $handler->display->display_options['filters']['field_training_domain_tid']['table'] = 'field_data_field_training_domain';
  $handler->display->display_options['filters']['field_training_domain_tid']['field'] = 'field_training_domain_tid';
  $handler->display->display_options['filters']['field_training_domain_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['operator_id'] = 'field_training_domain_tid_op';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['label'] = 'Domaine';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['operator'] = 'field_training_domain_tid_op';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['identifier'] = 'field_training_domain_tid';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_training_domain_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_training_domain_tid']['vocabulary'] = 'training_domains';

  /* Display: Catalogue des formations */
  $handler = $view->new_display('page', 'Catalogue des formations', 'liste_page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training' => 'training',
  );
  /* Critère de filtrage: Contenu : Thématique (field_training_domain) */
  $handler->display->display_options['filters']['field_training_domain_tid']['id'] = 'field_training_domain_tid';
  $handler->display->display_options['filters']['field_training_domain_tid']['table'] = 'field_data_field_training_domain';
  $handler->display->display_options['filters']['field_training_domain_tid']['field'] = 'field_training_domain_tid';
  $handler->display->display_options['filters']['field_training_domain_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['operator_id'] = 'field_training_domain_tid_op';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['label'] = 'Domaine';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['operator'] = 'field_training_domain_tid_op';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['identifier'] = 'field_training_domain_tid';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_training_domain_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_training_domain_tid']['vocabulary'] = 'training_domains';
  /* Critère de filtrage: Contenu : Champ de recherche (field_training_search) */
  $handler->display->display_options['filters']['field_training_search_value']['id'] = 'field_training_search_value';
  $handler->display->display_options['filters']['field_training_search_value']['table'] = 'field_data_field_training_search';
  $handler->display->display_options['filters']['field_training_search_value']['field'] = 'field_training_search_value';
  $handler->display->display_options['filters']['field_training_search_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_training_search_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_search_value']['expose']['operator_id'] = 'field_training_search_value_op';
  $handler->display->display_options['filters']['field_training_search_value']['expose']['label'] = 'Mots clés';
  $handler->display->display_options['filters']['field_training_search_value']['expose']['operator'] = 'field_training_search_value_op';
  $handler->display->display_options['filters']['field_training_search_value']['expose']['identifier'] = 'field_training_search_value';
  $handler->display->display_options['filters']['field_training_search_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
  );
  /* Critère de filtrage: Contenu : Affichage dans le catalogue ? (field_training_catalog) */
  $handler->display->display_options['filters']['field_training_catalog_value']['id'] = 'field_training_catalog_value';
  $handler->display->display_options['filters']['field_training_catalog_value']['table'] = 'field_data_field_training_catalog';
  $handler->display->display_options['filters']['field_training_catalog_value']['field'] = 'field_training_catalog_value';
  $handler->display->display_options['filters']['field_training_catalog_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'formations-old';

  /* Display: Toutes les sessions d'une formation */
  $handler = $view->new_display('page', 'Toutes les sessions d\'une formation', 'all_sessions');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Entity Reference : Referenced Entity */
  $handler->display->display_options['relationships']['field_related_training_target_id']['id'] = 'field_related_training_target_id';
  $handler->display->display_options['relationships']['field_related_training_target_id']['table'] = 'field_data_field_related_training';
  $handler->display->display_options['relationships']['field_related_training_target_id']['field'] = 'field_related_training_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Contenu : Formation (field_related_training) */
  $handler->display->display_options['arguments']['field_related_training_target_id']['id'] = 'field_related_training_target_id';
  $handler->display->display_options['arguments']['field_related_training_target_id']['table'] = 'field_data_field_related_training';
  $handler->display->display_options['arguments']['field_related_training_target_id']['field'] = 'field_related_training_target_id';
  $handler->display->display_options['arguments']['field_related_training_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_related_training_target_id']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_related_training_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_related_training_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_related_training_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_related_training_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_session' => 'training_session',
  );
  $handler->display->display_options['path'] = 'formations/toutes-les-sessions';

  /* Display: Liste formations */
  $handler = $view->new_display('page', 'Liste formations', 'page_training_list');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training' => 'training',
  );
  $handler->display->display_options['path'] = 'liste-formations';

  /* Display: Nombre de sessions */
  $handler = $view->new_display('block', 'Nombre de sessions', 'sessions_count');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Contenu : Formation (field_related_training) */
  $handler->display->display_options['arguments']['field_related_training_target_id']['id'] = 'field_related_training_target_id';
  $handler->display->display_options['arguments']['field_related_training_target_id']['table'] = 'field_data_field_related_training';
  $handler->display->display_options['arguments']['field_related_training_target_id']['field'] = 'field_related_training_target_id';
  $handler->display->display_options['arguments']['field_related_training_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_related_training_target_id']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_related_training_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_related_training_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_related_training_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_related_training_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_session' => 'training_session',
  );
  /* Critère de filtrage: Contenu : Dates (field_session_dates) */
  $handler->display->display_options['filters']['field_session_dates_value']['id'] = 'field_session_dates_value';
  $handler->display->display_options['filters']['field_session_dates_value']['table'] = 'field_data_field_session_dates';
  $handler->display->display_options['filters']['field_session_dates_value']['field'] = 'field_session_dates_value';
  $handler->display->display_options['filters']['field_session_dates_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_session_dates_value']['default_date'] = 'now';

  /* Display: Prochaines sessions d'une formation */
  $handler = $view->new_display('page', 'Prochaines sessions d\'une formation', 'next_sessions');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Champ: Première date */
  $handler->display->display_options['fields']['field_session_dates']['id'] = 'field_session_dates';
  $handler->display->display_options['fields']['field_session_dates']['table'] = 'field_data_field_session_dates';
  $handler->display->display_options['fields']['field_session_dates']['field'] = 'field_session_dates';
  $handler->display->display_options['fields']['field_session_dates']['ui_name'] = 'Première date';
  $handler->display->display_options['fields']['field_session_dates']['label'] = '';
  $handler->display->display_options['fields']['field_session_dates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_session_dates']['delta_offset'] = '0';
  /* Champ: Dernière date */
  $handler->display->display_options['fields']['field_session_dates_1']['id'] = 'field_session_dates_1';
  $handler->display->display_options['fields']['field_session_dates_1']['table'] = 'field_data_field_session_dates';
  $handler->display->display_options['fields']['field_session_dates_1']['field'] = 'field_session_dates';
  $handler->display->display_options['fields']['field_session_dates_1']['ui_name'] = 'Dernière date';
  $handler->display->display_options['fields']['field_session_dates_1']['label'] = '';
  $handler->display->display_options['fields']['field_session_dates_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_dates_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_dates_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_session_dates_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_session_dates_1']['delta_reversed'] = TRUE;
  /* Champ: Contenu : Détail de l'adresse */
  $handler->display->display_options['fields']['field_session_place']['id'] = 'field_session_place';
  $handler->display->display_options['fields']['field_session_place']['table'] = 'field_data_field_session_place';
  $handler->display->display_options['fields']['field_session_place']['field'] = 'field_session_place';
  $handler->display->display_options['fields']['field_session_place']['label'] = '';
  $handler->display->display_options['fields']['field_session_place']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_place']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_session_place']['alter']['text'] = 'à [field_session_place]';
  $handler->display->display_options['fields']['field_session_place']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_session_place']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_place']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_session_place']['settings'] = array(
    'trim_length' => '120',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Session débutant le [field_session_dates] [field_session_place]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Champ: Modifier */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Modifier';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Modifier';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/edit';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'session-modification';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Contenu : Formation (field_related_training) */
  $handler->display->display_options['arguments']['field_related_training_target_id']['id'] = 'field_related_training_target_id';
  $handler->display->display_options['arguments']['field_related_training_target_id']['table'] = 'field_data_field_related_training';
  $handler->display->display_options['arguments']['field_related_training_target_id']['field'] = 'field_related_training_target_id';
  $handler->display->display_options['arguments']['field_related_training_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_related_training_target_id']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_related_training_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_related_training_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_related_training_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_related_training_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_session' => 'training_session',
  );
  $handler->display->display_options['path'] = 'formations/prochaines-sessions';

  /* Display: Catalogue des formations */
  $handler = $view->new_display('page', 'Catalogue des formations', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Entity Reference : Referenced Entity */
  $handler->display->display_options['relationships']['field_training_session_linked_target_id']['id'] = 'field_training_session_linked_target_id';
  $handler->display->display_options['relationships']['field_training_session_linked_target_id']['table'] = 'field_data_field_training_session_linked';
  $handler->display->display_options['relationships']['field_training_session_linked_target_id']['field'] = 'field_training_session_linked_target_id';
  $handler->display->display_options['relationships']['field_training_session_linked_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Champ: Contenu : Lieu court */
  $handler->display->display_options['fields']['field_session_short_place']['id'] = 'field_session_short_place';
  $handler->display->display_options['fields']['field_session_short_place']['table'] = 'field_data_field_session_short_place';
  $handler->display->display_options['fields']['field_session_short_place']['field'] = 'field_session_short_place';
  $handler->display->display_options['fields']['field_session_short_place']['relationship'] = 'field_training_session_linked_target_id';
  $handler->display->display_options['fields']['field_session_short_place']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training' => 'training',
  );
  /* Critère de filtrage: Contenu : Thématique (field_training_domain) */
  $handler->display->display_options['filters']['field_training_domain_tid']['id'] = 'field_training_domain_tid';
  $handler->display->display_options['filters']['field_training_domain_tid']['table'] = 'field_data_field_training_domain';
  $handler->display->display_options['filters']['field_training_domain_tid']['field'] = 'field_training_domain_tid';
  $handler->display->display_options['filters']['field_training_domain_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['operator_id'] = 'field_training_domain_tid_op';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['label'] = 'Domaine';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['operator'] = 'field_training_domain_tid_op';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['identifier'] = 'field_training_domain_tid';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_training_domain_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_training_domain_tid']['vocabulary'] = 'training_domains';
  /* Critère de filtrage: Contenu : Champ de recherche (field_training_search) */
  $handler->display->display_options['filters']['field_training_search_value']['id'] = 'field_training_search_value';
  $handler->display->display_options['filters']['field_training_search_value']['table'] = 'field_data_field_training_search';
  $handler->display->display_options['filters']['field_training_search_value']['field'] = 'field_training_search_value';
  $handler->display->display_options['filters']['field_training_search_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_training_search_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_search_value']['expose']['operator_id'] = 'field_training_search_value_op';
  $handler->display->display_options['filters']['field_training_search_value']['expose']['label'] = 'Mots clés';
  $handler->display->display_options['filters']['field_training_search_value']['expose']['operator'] = 'field_training_search_value_op';
  $handler->display->display_options['filters']['field_training_search_value']['expose']['identifier'] = 'field_training_search_value';
  $handler->display->display_options['filters']['field_training_search_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
  );
  /* Critère de filtrage: Contenu : Affichage dans le catalogue ? (field_training_catalog) */
  $handler->display->display_options['filters']['field_training_catalog_value']['id'] = 'field_training_catalog_value';
  $handler->display->display_options['filters']['field_training_catalog_value']['table'] = 'field_data_field_training_catalog';
  $handler->display->display_options['filters']['field_training_catalog_value']['field'] = 'field_training_catalog_value';
  $handler->display->display_options['filters']['field_training_catalog_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'formations';
  $translatables['trainings'] = array(
    t('Master'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Domaine'),
    t('Catalogue des formations'),
    t('Mots clés'),
    t('Toutes les sessions d\'une formation'),
    t('Contenu entity referenced from field_related_training'),
    t('Tout'),
    t('Liste formations'),
    t('Nid'),
    t('Nombre de sessions'),
    t('Prochaines sessions d\'une formation'),
    t('à [field_session_place]'),
    t('Session débutant le [field_session_dates] [field_session_place]'),
    t('Modifier'),
    t('Contenu entity referenced from field_training_session_linked'),
    t('Titre'),
    t('Lieu court'),
  );
  $export['trainings'] = $view;

  return $export;
}
