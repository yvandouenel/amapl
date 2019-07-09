<?php
/**
 * @file
 * featurecoocontext.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function featurecoocontext_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'agadom';
  $context->description = '';
  $context->tag = 'Toutes les pages';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'AGADOM' => 'AGADOM',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-agadom' => array(
          'module' => 'bean',
          'delta' => 'agadom',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Toutes les pages');
  $export['agadom'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'agmps';
  $context->description = '';
  $context->tag = 'Toutes les pages';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'AGMPS BEARN' => 'AGMPS BEARN',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-logo-agmps' => array(
          'module' => 'bean',
          'delta' => 'logo-agmps',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Toutes les pages');
  $export['agmps'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'connected';
  $context->description = 'Menu haut, formulaire de recherche, menu bas';
  $context->tag = 'Toutes les pages';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'navigation',
          'weight' => '1',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-29',
        ),
        'menu-menu-menu-bas' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-bas',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Menu haut, formulaire de recherche, menu bas');
  t('Toutes les pages');
  $export['connected'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'connected_or_not';
  $context->description = 'Lien de déconnexion, logo Constellians';
  $context->tag = 'Toutes les pages';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'header',
          'weight' => '-20',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'footer',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Lien de déconnexion, logo Constellians');
  t('Toutes les pages');
  $export['connected_or_not'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'desktop';
  $context->description = 'Menu gauche (Expandede levels 2+)';
  $context->tag = 'Large';
  $context->conditions = array(
    'breakpoint' => array(
      'values' => array(
        0 => 'breakpoints.theme.domainedo.wide',
      ),
      'options' => array(
        'autoreload' => 1,
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => '3',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Large');
  t('Menu gauche (Expandede levels 2+)');
  $export['desktop'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = '';
  $context->tag = 'Page d\'accueil anonyme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-block-front' => array(
          'module' => 'bean',
          'delta' => 'block-front',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Page d\'accueil anonyme');
  $export['front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_id';
  $context->description = 'Page d\'accueil lorsque l\'on est identifié : actu, 2035 et guide comptable';
  $context->tag = 'Page d\'accueil identifié';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
    'user' => array(
      'values' => array(
        'AGA08' => 'AGA08',
        'AGAKAM' => 'AGAKAM',
        'AGAPROFIL' => 'AGAPROFIL',
        'AGCS' => 'AGCS',
        'AMAPL' => 'AMAPL',
        'ANGIIL' => 'ANGIIL',
        'DEMO' => 'DEMO',
        'Import ADH' => 'Import ADH',
        'Import COR' => 'Import COR',
        'adherent' => 'adherent',
        'administrator' => 'administrator',
        'authenticated user' => 'authenticated user',
        'contributeur' => 'contributeur',
        'utilisateur générique' => 'utilisateur générique',
        'webmaster' => 'webmaster',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-guide-comptable' => array(
          'module' => 'bean',
          'delta' => 'guide-comptable',
          'region' => 'home_row_1_col_1',
          'weight' => '-10',
        ),
        'bean-2035plus' => array(
          'module' => 'bean',
          'delta' => '2035plus',
          'region' => 'home_row_1_col_2',
          'weight' => '-10',
        ),
        'menu_block-5' => array(
          'module' => 'menu_block',
          'delta' => '5',
          'region' => 'home_row_1_col_3',
          'weight' => '-10',
        ),
        'views-news-block_news_dossier' => array(
          'module' => 'views',
          'delta' => 'news-block_news_dossier',
          'region' => 'home_row_2_col_1',
          'weight' => '-10',
        ),
        'views-news-block_news_2035' => array(
          'module' => 'views',
          'delta' => 'news-block_news_2035',
          'region' => 'home_row_2_col_2',
          'weight' => '-10',
        ),
        'views-news-block_news_tva' => array(
          'module' => 'views',
          'delta' => 'news-block_news_tva',
          'region' => 'home_row_2_col_3',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Page d\'accueil identifié');
  t('Page d\'accueil lorsque l\'on est identifié : actu, 2035 et guide comptable');
  $export['front_id'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'not_connected';
  $context->description = '';
  $context->tag = 'Toutes les pages';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Toutes les pages');
  $export['not_connected'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pages_anonymes';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
        '~amapl' => '~amapl',
        '~aga08' => '~aga08',
        '~agakam' => '~agakam',
        '~agaprofil' => '~agaprofil',
        '~agcs' => '~agcs',
        '~agmps' => '~agmps',
        '~angiil' => '~angiil',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-block-front' => array(
          'module' => 'bean',
          'delta' => 'block-front',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['pages_anonymes'] = $context;

  return $export;
}
