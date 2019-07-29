<?php
/**
 * @file
 * feature_lettre_info.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_lettre_info_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'lettres_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Lettres d\'info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Lettres d\'info';
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
  $handler->display->display_options['row_plugin'] = 'node';
  /* Entête: Global : Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3 class="title-pl title-col">Professionnel libéral</h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'lettre_d_information' => 'lettre_d_information',
  );
  /* Critère de filtrage: Contenu : cible (field_session_target) */
  $handler->display->display_options['filters']['field_session_target_value']['id'] = 'field_session_target_value';
  $handler->display->display_options['filters']['field_session_target_value']['table'] = 'field_data_field_session_target';
  $handler->display->display_options['filters']['field_session_target_value']['field'] = 'field_session_target_value';
  $handler->display->display_options['filters']['field_session_target_value']['value'] = array(
    'both' => 'both',
    'pl' => 'pl',
  );

  /* Display: Lettres d'info PL */
  $handler = $view->new_display('page', 'Lettres d\'info PL', 'page_lettre_info_pl');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3 class="title-pl title-col">Professionnel libéral</h3><p>Imprimée à 9 000 exemplaires, cette lettre d’information parait 4 fois par an, en mars, juin, septembre et décembre. Elle est adressée nominativement à tous les adhérents de l’Amapl et les conseils. Dans chaque numéro, nous prenons le temps de développer un point d’ordre juridique, fiscal ou social appelé « Le dossier », de mettre en avant des artistes adhérents, de faire un zoom sur une actualité chère à l’Amapl (formations, conférences, salons, etc.).</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['path'] = 'lettres-info';

  /* Display: Fichiers attachés CAA */
  $handler = $view->new_display('attachment', 'Fichiers attachés CAA', 'attachment_lettreinfo_caa');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3 class="title-caa title-col">Commerçant, artisan, agriculteur</h3>
<p>Imprimée à 9 000 exemplaires, cette lettre d’information parait 4 fois par an, en mars, juin, septembre et décembre. Elle est adressée nominativement à tous les adhérents de l’Amapl et les conseils. Dans chaque numéro, nous prenons le temps de développer un point d’ordre juridique, fiscal ou social appelé « Le dossier », de mettre en avant des artistes adhérents, de faire un zoom sur une actualité chère à l’Amapl (formations, conférences, salons, etc.).</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
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
    'lettre_d_information' => 'lettre_d_information',
  );
  /* Critère de filtrage: Contenu : cible (field_session_target) */
  $handler->display->display_options['filters']['field_session_target_value']['id'] = 'field_session_target_value';
  $handler->display->display_options['filters']['field_session_target_value']['table'] = 'field_data_field_session_target';
  $handler->display->display_options['filters']['field_session_target_value']['field'] = 'field_session_target_value';
  $handler->display->display_options['filters']['field_session_target_value']['value'] = array(
    'both' => 'both',
    'caa' => 'caa',
  );
  $handler->display->display_options['displays'] = array(
    'page_lettre_info_pl' => 'page_lettre_info_pl',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $translatables['lettres_info'] = array(
    t('Master'),
    t('Lettres d\'info'),
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
    t('<h3 class="title-pl title-col">Professionnel libéral</h3>'),
    t('Lettres d\'info PL'),
    t('<h3 class="title-pl title-col">Professionnel libéral</h3><p>Imprimée à 9 000 exemplaires, cette lettre d’information parait 4 fois par an, en mars, juin, septembre et décembre. Elle est adressée nominativement à tous les adhérents de l’Amapl et les conseils. Dans chaque numéro, nous prenons le temps de développer un point d’ordre juridique, fiscal ou social appelé « Le dossier », de mettre en avant des artistes adhérents, de faire un zoom sur une actualité chère à l’Amapl (formations, conférences, salons, etc.).</p>'),
    t('Fichiers attachés CAA'),
    t('<h3 class="title-caa title-col">Commerçant, artisan, agriculteur</h3>
<p>Imprimée à 9 000 exemplaires, cette lettre d’information parait 4 fois par an, en mars, juin, septembre et décembre. Elle est adressée nominativement à tous les adhérents de l’Amapl et les conseils. Dans chaque numéro, nous prenons le temps de développer un point d’ordre juridique, fiscal ou social appelé « Le dossier », de mettre en avant des artistes adhérents, de faire un zoom sur une actualité chère à l’Amapl (formations, conférences, salons, etc.).</p>'),
  );
  $export['lettres_info'] = $view;

  return $export;
}
