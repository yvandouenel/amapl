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
  /* Champ: Node : Dates */
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
  /* Champ: Registration : Num. adhérent Amapl */
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
  /* Critère de tri: Node : Dates (field_session_dates) */
  $handler->display->display_options['sorts']['field_session_dates_value']['id'] = 'field_session_dates_value';
  $handler->display->display_options['sorts']['field_session_dates_value']['table'] = 'field_data_field_session_dates';
  $handler->display->display_options['sorts']['field_session_dates_value']['field'] = 'field_session_dates_value';
  /* Critère de filtrage: Contenu : Published status */
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
    t('Num. adhérent Amapl'),
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
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  /* Critère de filtrage: Contenu : Published status */
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
  /* Critère de filtrage: Node : Thématique (field_training_domain) */
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
  /* Critère de filtrage: Contenu : Published status */
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
  /* Critère de filtrage: Node : Thématique (field_training_domain) */
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
  /* Critère de filtrage: Node : Champ de recherche (field_training_search) */
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
  /* Critère de filtrage: Node : Affichage dans le catalogue ? (field_training_catalog) */
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
  /* Filtre contextuel: Node : Formation (field_related_training) */
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
  /* Critère de filtrage: Contenu : Published status */
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
  /* Critère de filtrage: Contenu : Published status */
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
  /* Filtre contextuel: Node : Formation (field_related_training) */
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
  /* Critère de filtrage: Contenu : Published status */
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
  /* Critère de filtrage: Node : Dates (field_session_dates) */
  $handler->display->display_options['filters']['field_session_dates_value']['id'] = 'field_session_dates_value';
  $handler->display->display_options['filters']['field_session_dates_value']['table'] = 'field_data_field_session_dates';
  $handler->display->display_options['filters']['field_session_dates_value']['field'] = 'field_session_dates_value';
  $handler->display->display_options['filters']['field_session_dates_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_session_dates_value']['default_date'] = 'now';

  /* Display: Prochaines sessions d'une formation */
  $handler = $view->new_display('page', 'Prochaines sessions d\'une formation', 'next_sessions');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
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
  /* Champ: Node : Focus */
  $handler->display->display_options['fields']['field_session_focus']['id'] = 'field_session_focus';
  $handler->display->display_options['fields']['field_session_focus']['table'] = 'field_data_field_session_focus';
  $handler->display->display_options['fields']['field_session_focus']['field'] = 'field_session_focus';
  $handler->display->display_options['fields']['field_session_focus']['label'] = '';
  $handler->display->display_options['fields']['field_session_focus']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_focus']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_session_focus']['alter']['text'] = '<span class="focus-training">[field_session_focus]</span>';
  $handler->display->display_options['fields']['field_session_focus']['element_label_colon'] = FALSE;
  /* Champ: Node : Mode de formaion */
  $handler->display->display_options['fields']['field_session_mode']['id'] = 'field_session_mode';
  $handler->display->display_options['fields']['field_session_mode']['table'] = 'field_data_field_session_mode';
  $handler->display->display_options['fields']['field_session_mode']['field'] = 'field_session_mode';
  $handler->display->display_options['fields']['field_session_mode']['label'] = '';
  $handler->display->display_options['fields']['field_session_mode']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_mode']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_session_mode']['alter']['text'] = '<span class="mode-training">[field_session_mode] </span>';
  $handler->display->display_options['fields']['field_session_mode']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_mode']['type'] = 'taxonomy_term_reference_plain';
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
  /* Champ: Node : Détail de l'adresse */
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
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_session_focus] [field_session_mode] 
Session débutant le [field_session_dates] [field_session_place]';
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
  /* Filtre contextuel: Node : Formation (field_related_training) */
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
  /* Critère de filtrage: Contenu : Published status */
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
  $handler = $view->new_display('page', 'Catalogue des formations', 'page_trainings');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Rechercher';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Sélectionnez n\'importe quel filtre et cliquez sur Appliquer pour voir les résultats',
          'format' => 'full_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Options avancées',
      'secondary_collapse_override' => '0',
    ),
    'field_training_domain_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_training_search_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_session_short_place_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_training_free_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_session_short_place' => 'field_session_short_place',
    'field_session_dates' => 'field_session_dates',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_short_place' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_dates' => array(
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
  $handler->display->display_options['fields']['title']['group_type'] = 'min';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Champ: Node : Lieu court */
  $handler->display->display_options['fields']['field_session_short_place']['id'] = 'field_session_short_place';
  $handler->display->display_options['fields']['field_session_short_place']['table'] = 'field_data_field_session_short_place';
  $handler->display->display_options['fields']['field_session_short_place']['field'] = 'field_session_short_place';
  $handler->display->display_options['fields']['field_session_short_place']['relationship'] = 'field_training_session_linked_target_id';
  $handler->display->display_options['fields']['field_session_short_place']['label'] = 'Lieu';
  $handler->display->display_options['fields']['field_session_short_place']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Node : Dates */
  $handler->display->display_options['fields']['field_session_dates']['id'] = 'field_session_dates';
  $handler->display->display_options['fields']['field_session_dates']['table'] = 'field_data_field_session_dates';
  $handler->display->display_options['fields']['field_session_dates']['field'] = 'field_session_dates';
  $handler->display->display_options['fields']['field_session_dates']['relationship'] = 'field_training_session_linked_target_id';
  $handler->display->display_options['fields']['field_session_dates']['group_type'] = 'min';
  $handler->display->display_options['fields']['field_session_dates']['label'] = 'Date';
  $handler->display->display_options['fields']['field_session_dates']['settings'] = array(
    'format_type' => 'tres_court_francais',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_session_dates']['group_columns'] = array(
    'entity_id' => 'entity_id',
  );
  $handler->display->display_options['fields']['field_session_dates']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_session_dates']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Node : Dates (field_session_dates) */
  $handler->display->display_options['sorts']['field_session_dates_value']['id'] = 'field_session_dates_value';
  $handler->display->display_options['sorts']['field_session_dates_value']['table'] = 'field_data_field_session_dates';
  $handler->display->display_options['sorts']['field_session_dates_value']['field'] = 'field_session_dates_value';
  $handler->display->display_options['sorts']['field_session_dates_value']['relationship'] = 'field_training_session_linked_target_id';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Published status */
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
  /* Critère de filtrage: Node : Thématique (field_training_domain) */
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
  /* Critère de filtrage: Node : Champ de recherche (field_training_search) */
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
  /* Critère de filtrage: Node : Affichage dans le catalogue ? (field_training_catalog) */
  $handler->display->display_options['filters']['field_training_catalog_value']['id'] = 'field_training_catalog_value';
  $handler->display->display_options['filters']['field_training_catalog_value']['table'] = 'field_data_field_training_catalog';
  $handler->display->display_options['filters']['field_training_catalog_value']['field'] = 'field_training_catalog_value';
  $handler->display->display_options['filters']['field_training_catalog_value']['value'] = array(
    1 => '1',
  );
  /* Critère de filtrage: Node : Lieu court (field_session_short_place) */
  $handler->display->display_options['filters']['field_session_short_place_tid']['id'] = 'field_session_short_place_tid';
  $handler->display->display_options['filters']['field_session_short_place_tid']['table'] = 'field_data_field_session_short_place';
  $handler->display->display_options['filters']['field_session_short_place_tid']['field'] = 'field_session_short_place_tid';
  $handler->display->display_options['filters']['field_session_short_place_tid']['relationship'] = 'field_training_session_linked_target_id';
  $handler->display->display_options['filters']['field_session_short_place_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_session_short_place_tid']['expose']['operator_id'] = 'field_session_short_place_tid_op';
  $handler->display->display_options['filters']['field_session_short_place_tid']['expose']['label'] = 'Lieu';
  $handler->display->display_options['filters']['field_session_short_place_tid']['expose']['operator'] = 'field_session_short_place_tid_op';
  $handler->display->display_options['filters']['field_session_short_place_tid']['expose']['identifier'] = 'field_session_short_place_tid';
  $handler->display->display_options['filters']['field_session_short_place_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_session_short_place_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_session_short_place_tid']['vocabulary'] = 'training_place';
  /* Critère de filtrage: Node : Gratuit ? (field_training_free) */
  $handler->display->display_options['filters']['field_training_free_value']['id'] = 'field_training_free_value';
  $handler->display->display_options['filters']['field_training_free_value']['table'] = 'field_data_field_training_free';
  $handler->display->display_options['filters']['field_training_free_value']['field'] = 'field_training_free_value';
  $handler->display->display_options['filters']['field_training_free_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_free_value']['expose']['operator_id'] = 'field_training_free_value_op';
  $handler->display->display_options['filters']['field_training_free_value']['expose']['label'] = 'Gratuit ?';
  $handler->display->display_options['filters']['field_training_free_value']['expose']['operator'] = 'field_training_free_value_op';
  $handler->display->display_options['filters']['field_training_free_value']['expose']['identifier'] = 'field_training_free_value';
  $handler->display->display_options['filters']['field_training_free_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
  );
  /* Critère de filtrage: Node : Dates (field_session_dates) */
  $handler->display->display_options['filters']['field_session_dates_value']['id'] = 'field_session_dates_value';
  $handler->display->display_options['filters']['field_session_dates_value']['table'] = 'field_data_field_session_dates';
  $handler->display->display_options['filters']['field_session_dates_value']['field'] = 'field_session_dates_value';
  $handler->display->display_options['filters']['field_session_dates_value']['relationship'] = 'field_training_session_linked_target_id';
  $handler->display->display_options['filters']['field_session_dates_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_session_dates_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'formations-old';

  /* Display: Sessions */
  $handler = $view->new_display('page', 'Sessions', 'list_sessions');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Rechercher';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Sélectionnez n\'importe quel filtre et cliquez sur Appliquer pour voir les résultats',
          'format' => 'full_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Options avancées',
      'secondary_collapse_override' => '0',
    ),
    'field_training_domain_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_training_free_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_training_search_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_session_short_place_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '24';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportement en l'absence de résultats: Global : Zone de texte */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h3>Pas de résultats pour cette requête. Veuillez modifier vos critères de recherche.</h3>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Entity Reference : Referenced Entity */
  $handler->display->display_options['relationships']['field_related_training_target_id']['id'] = 'field_related_training_target_id';
  $handler->display->display_options['relationships']['field_related_training_target_id']['table'] = 'field_data_field_related_training';
  $handler->display->display_options['relationships']['field_related_training_target_id']['field'] = 'field_related_training_target_id';
  $handler->display->display_options['relationships']['field_related_training_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Node : Mode de formaion */
  $handler->display->display_options['fields']['field_session_mode']['id'] = 'field_session_mode';
  $handler->display->display_options['fields']['field_session_mode']['table'] = 'field_data_field_session_mode';
  $handler->display->display_options['fields']['field_session_mode']['field'] = 'field_session_mode';
  $handler->display->display_options['fields']['field_session_mode']['label'] = '';
  $handler->display->display_options['fields']['field_session_mode']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_mode']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_session_mode']['alter']['text'] = '<div class="mode-training"><span class="glyphicon glyphicon-triangle-right" aria-hidden="true"></span>[field_session_mode]</div>';
  $handler->display->display_options['fields']['field_session_mode']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_mode']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Node : Focus */
  $handler->display->display_options['fields']['field_session_focus']['id'] = 'field_session_focus';
  $handler->display->display_options['fields']['field_session_focus']['table'] = 'field_data_field_session_focus';
  $handler->display->display_options['fields']['field_session_focus']['field'] = 'field_session_focus';
  $handler->display->display_options['fields']['field_session_focus']['label'] = '';
  $handler->display->display_options['fields']['field_session_focus']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_focus']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_session_focus']['alter']['text'] = '<div class="focus-training">[field_session_focus]</div>';
  $handler->display->display_options['fields']['field_session_focus']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
  /* Champ: Node : Dates */
  $handler->display->display_options['fields']['field_session_dates']['id'] = 'field_session_dates';
  $handler->display->display_options['fields']['field_session_dates']['table'] = 'field_data_field_session_dates';
  $handler->display->display_options['fields']['field_session_dates']['field'] = 'field_session_dates';
  $handler->display->display_options['fields']['field_session_dates']['label'] = '';
  $handler->display->display_options['fields']['field_session_dates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_session_dates']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_session_dates']['separator'] = ' - ';
  /* Champ: Node : Lieu court */
  $handler->display->display_options['fields']['field_session_short_place']['id'] = 'field_session_short_place';
  $handler->display->display_options['fields']['field_session_short_place']['table'] = 'field_data_field_session_short_place';
  $handler->display->display_options['fields']['field_session_short_place']['field'] = 'field_session_short_place';
  $handler->display->display_options['fields']['field_session_short_place']['label'] = '';
  $handler->display->display_options['fields']['field_session_short_place']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_short_place']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_short_place']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Node : Thématique */
  $handler->display->display_options['fields']['field_training_domain']['id'] = 'field_training_domain';
  $handler->display->display_options['fields']['field_training_domain']['table'] = 'field_data_field_training_domain';
  $handler->display->display_options['fields']['field_training_domain']['field'] = 'field_training_domain';
  $handler->display->display_options['fields']['field_training_domain']['relationship'] = 'field_related_training_target_id';
  $handler->display->display_options['fields']['field_training_domain']['label'] = '';
  $handler->display->display_options['fields']['field_training_domain']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_training_domain']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_domain']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_training_domain']['delta_offset'] = '0';
  /* Champ: Node : cible */
  $handler->display->display_options['fields']['field_session_target']['id'] = 'field_session_target';
  $handler->display->display_options['fields']['field_session_target']['table'] = 'field_data_field_session_target';
  $handler->display->display_options['fields']['field_session_target']['field'] = 'field_session_target';
  $handler->display->display_options['fields']['field_session_target']['label'] = '';
  $handler->display->display_options['fields']['field_session_target']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_target']['type'] = 'list_key';
  /* Champ: Rendu global */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Rendu global';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<article class="[field_session_target]">
<div class="wrapper-focus-training">
[field_session_mode]
[field_session_focus]
</div>
<h3 class="title-training-list">[title_1]</h3>
<div class="bottom-fields-training-list">
<p><label>Thématique : </label>[field_training_domain]</p>
<p><label>Lieu : </label>[field_session_short_place]</p>
<p><label>Date de début : </label>[field_session_dates]</p>
</div>
</article>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Node : Début de sessions (field_session_begin) */
  $handler->display->display_options['sorts']['field_session_begin_value']['id'] = 'field_session_begin_value';
  $handler->display->display_options['sorts']['field_session_begin_value']['table'] = 'field_data_field_session_begin';
  $handler->display->display_options['sorts']['field_session_begin_value']['field'] = 'field_session_begin_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Published status */
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
  /* Critère de filtrage: Node : Début de sessions (field_session_begin) */
  $handler->display->display_options['filters']['field_session_begin_value']['id'] = 'field_session_begin_value';
  $handler->display->display_options['filters']['field_session_begin_value']['table'] = 'field_data_field_session_begin';
  $handler->display->display_options['filters']['field_session_begin_value']['field'] = 'field_session_begin_value';
  $handler->display->display_options['filters']['field_session_begin_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_session_begin_value']['default_date'] = 'now-1';
  /* Critère de filtrage: Node : Thématique (field_training_domain) */
  $handler->display->display_options['filters']['field_training_domain_tid']['id'] = 'field_training_domain_tid';
  $handler->display->display_options['filters']['field_training_domain_tid']['table'] = 'field_data_field_training_domain';
  $handler->display->display_options['filters']['field_training_domain_tid']['field'] = 'field_training_domain_tid';
  $handler->display->display_options['filters']['field_training_domain_tid']['relationship'] = 'field_related_training_target_id';
  $handler->display->display_options['filters']['field_training_domain_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['operator_id'] = 'field_training_domain_tid_op';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['label'] = 'Thématique : ';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['operator'] = 'field_training_domain_tid_op';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['identifier'] = 'field_training_domain_tid';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_training_domain_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_training_domain_tid']['vocabulary'] = 'training_domains';
  /* Critère de filtrage: Node : Gratuit ? (field_training_free) */
  $handler->display->display_options['filters']['field_training_free_value']['id'] = 'field_training_free_value';
  $handler->display->display_options['filters']['field_training_free_value']['table'] = 'field_data_field_training_free';
  $handler->display->display_options['filters']['field_training_free_value']['field'] = 'field_training_free_value';
  $handler->display->display_options['filters']['field_training_free_value']['relationship'] = 'field_related_training_target_id';
  $handler->display->display_options['filters']['field_training_free_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_free_value']['expose']['operator_id'] = 'field_training_free_value_op';
  $handler->display->display_options['filters']['field_training_free_value']['expose']['label'] = 'Gratuit ?';
  $handler->display->display_options['filters']['field_training_free_value']['expose']['operator'] = 'field_training_free_value_op';
  $handler->display->display_options['filters']['field_training_free_value']['expose']['identifier'] = 'field_training_free_value';
  $handler->display->display_options['filters']['field_training_free_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
  );
  /* Critère de filtrage: Node : Champ de recherche (field_training_search) */
  $handler->display->display_options['filters']['field_training_search_value']['id'] = 'field_training_search_value';
  $handler->display->display_options['filters']['field_training_search_value']['table'] = 'field_data_field_training_search';
  $handler->display->display_options['filters']['field_training_search_value']['field'] = 'field_training_search_value';
  $handler->display->display_options['filters']['field_training_search_value']['relationship'] = 'field_related_training_target_id';
  $handler->display->display_options['filters']['field_training_search_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_training_search_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_search_value']['expose']['operator_id'] = 'field_training_search_value_op';
  $handler->display->display_options['filters']['field_training_search_value']['expose']['label'] = 'Mots clés : ';
  $handler->display->display_options['filters']['field_training_search_value']['expose']['operator'] = 'field_training_search_value_op';
  $handler->display->display_options['filters']['field_training_search_value']['expose']['identifier'] = 'field_training_search_value';
  $handler->display->display_options['filters']['field_training_search_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Critère de filtrage: Node : Lieu court (field_session_short_place) */
  $handler->display->display_options['filters']['field_session_short_place_tid']['id'] = 'field_session_short_place_tid';
  $handler->display->display_options['filters']['field_session_short_place_tid']['table'] = 'field_data_field_session_short_place';
  $handler->display->display_options['filters']['field_session_short_place_tid']['field'] = 'field_session_short_place_tid';
  $handler->display->display_options['filters']['field_session_short_place_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_session_short_place_tid']['expose']['operator_id'] = 'field_session_short_place_tid_op';
  $handler->display->display_options['filters']['field_session_short_place_tid']['expose']['label'] = 'Lieu : ';
  $handler->display->display_options['filters']['field_session_short_place_tid']['expose']['operator'] = 'field_session_short_place_tid_op';
  $handler->display->display_options['filters']['field_session_short_place_tid']['expose']['identifier'] = 'field_session_short_place_tid';
  $handler->display->display_options['filters']['field_session_short_place_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_session_short_place_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    5 => '5',
    4 => '4',
    6 => '6',
    3 => '3',
  );
  $handler->display->display_options['filters']['field_session_short_place_tid']['group_info']['label'] = 'Lieu court (field_session_short_place)';
  $handler->display->display_options['filters']['field_session_short_place_tid']['group_info']['identifier'] = 'field_session_short_place_tid';
  $handler->display->display_options['filters']['field_session_short_place_tid']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_session_short_place_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
  );
  $handler->display->display_options['filters']['field_session_short_place_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_session_short_place_tid']['vocabulary'] = 'training_place';
  /* Critère de filtrage: Node : Type (field_training_type) */
  $handler->display->display_options['filters']['field_training_type_tid']['id'] = 'field_training_type_tid';
  $handler->display->display_options['filters']['field_training_type_tid']['table'] = 'field_data_field_training_type';
  $handler->display->display_options['filters']['field_training_type_tid']['field'] = 'field_training_type_tid';
  $handler->display->display_options['filters']['field_training_type_tid']['relationship'] = 'field_related_training_target_id';
  $handler->display->display_options['filters']['field_training_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_type_tid']['expose']['operator_id'] = 'field_training_type_tid_op';
  $handler->display->display_options['filters']['field_training_type_tid']['expose']['label'] = 'Format';
  $handler->display->display_options['filters']['field_training_type_tid']['expose']['operator'] = 'field_training_type_tid_op';
  $handler->display->display_options['filters']['field_training_type_tid']['expose']['identifier'] = 'field_training_type_tid';
  $handler->display->display_options['filters']['field_training_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_training_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_training_type_tid']['vocabulary'] = 'training_type';
  $handler->display->display_options['path'] = 'formations';

  /* Display: Bloc formation accueil */
  $handler = $view->new_display('block', 'Bloc formation accueil', 'block_home_training');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Voir toutes les formations disponibles';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'list_sessions';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<img id="top-training" src="/sites/amapl.com/themes/custom/bootamapl/less/images/home_formations_img.png" alt="" />';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Node : Début de sessions (field_session_begin) */
  $handler->display->display_options['sorts']['field_session_begin_value']['id'] = 'field_session_begin_value';
  $handler->display->display_options['sorts']['field_session_begin_value']['table'] = 'field_data_field_session_begin';
  $handler->display->display_options['sorts']['field_session_begin_value']['field'] = 'field_session_begin_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Published status */
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
  /* Critère de filtrage: Node : Début de sessions (field_session_begin) */
  $handler->display->display_options['filters']['field_session_begin_value']['id'] = 'field_session_begin_value';
  $handler->display->display_options['filters']['field_session_begin_value']['table'] = 'field_data_field_session_begin';
  $handler->display->display_options['filters']['field_session_begin_value']['field'] = 'field_session_begin_value';
  $handler->display->display_options['filters']['field_session_begin_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_session_begin_value']['default_date'] = 'now-1';
  $handler->display->display_options['block_description'] = 'Formation accueil';
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
    t('Titre'),
    t('Domaine'),
    t('Catalogue des formations'),
    t('Mots clés'),
    t('Toutes les sessions d\'une formation'),
    t('Node entity referenced from field_related_training'),
    t('Tout'),
    t('Liste formations'),
    t('Nid'),
    t('Nombre de sessions'),
    t('Prochaines sessions d\'une formation'),
    t('<span class="focus-training">[field_session_focus]</span>'),
    t('<span class="mode-training">[field_session_mode] </span>'),
    t('à [field_session_place]'),
    t('[field_session_focus] [field_session_mode] 
Session débutant le [field_session_dates] [field_session_place]'),
    t('Modifier'),
    t('Rechercher'),
    t('Sélectionnez n\'importe quel filtre et cliquez sur Appliquer pour voir les résultats'),
    t('Options avancées'),
    t('Node entity referenced from field_training_session_linked'),
    t('Lieu'),
    t('Date'),
    t('Gratuit ?'),
    t('Sessions'),
    t('<h3>Pas de résultats pour cette requête. Veuillez modifier vos critères de recherche.</h3>'),
    t('<div class="mode-training"><span class="glyphicon glyphicon-triangle-right" aria-hidden="true"></span>[field_session_mode]</div>'),
    t('<div class="focus-training">[field_session_focus]</div>'),
    t('<article class="[field_session_target]">
<div class="wrapper-focus-training">
[field_session_mode]
[field_session_focus]
</div>
<h3 class="title-training-list">[title_1]</h3>
<div class="bottom-fields-training-list">
<p><label>Thématique : </label>[field_training_domain]</p>
<p><label>Lieu : </label>[field_session_short_place]</p>
<p><label>Date de début : </label>[field_session_dates]</p>
</div>
</article>'),
    t('Thématique : '),
    t('Mots clés : '),
    t('Lieu : '),
    t('Lieu court (field_session_short_place)'),
    t('Format'),
    t('Bloc formation accueil'),
    t('Voir toutes les formations disponibles'),
    t('<img id="top-training" src="/sites/amapl.com/themes/custom/bootamapl/less/images/home_formations_img.png" alt="" />'),
    t('Formation accueil'),
  );
  $export['trainings'] = $view;

  return $export;
}
