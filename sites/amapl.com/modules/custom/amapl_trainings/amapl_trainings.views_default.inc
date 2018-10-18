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
  /* Critère de filtrage: Contenu : Domaine (field_training_domain) */
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
  /* Critère de filtrage: Contenu : Domaine (field_training_domain) */
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
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_session_dates]';
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
    t('[field_session_dates]'),
    t('Modifier'),
  );
  $export['trainings'] = $view;

  return $export;
}
