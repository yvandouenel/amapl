<?php
/**
 * @file
 * atterrissage_aga.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function atterrissage_aga_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'agcs';
  $context->description = '';
  $context->tag = 'Toutes les pages';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'AGCS' => 'AGCS',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-logo-agcs' => array(
          'module' => 'bean',
          'delta' => 'logo-agcs',
          'region' => 'branding',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Toutes les pages');
  $export['agcs'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'agcs_landing_page';
  $context->description = '';
  $context->tag = 'Pages d\'atterrissage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'agcs' => 'agcs',
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
        'bean-agcs-landing-page' => array(
          'module' => 'bean',
          'delta' => 'agcs-landing-page',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages d\'atterrissage');
  $export['agcs_landing_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'amapl';
  $context->description = '';
  $context->tag = 'Toutes les pages';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'Import ADH' => 'Import ADH',
        'Import COR' => 'Import COR',
        'adherent' => 'adherent',
        'administrator' => 'administrator',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-logo-amapl' => array(
          'module' => 'bean',
          'delta' => 'logo-amapl',
          'region' => 'branding',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Toutes les pages');
  $export['amapl'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = '';
  $context->tag = 'Page d\'accueil';
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
  t('Page d\'accueil');
  $export['front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_amapl';
  $context->description = '';
  $context->tag = 'Pages d\'atterrissage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'amapl' => 'amapl',
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
        'bean-atterrissage-amapl' => array(
          'module' => 'bean',
          'delta' => 'atterrissage-amapl',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages d\'atterrissage');
  $export['landing_amapl'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'non_log_in';
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
        'bean-logo-generique' => array(
          'module' => 'bean',
          'delta' => 'logo-generique',
          'region' => 'branding',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Toutes les pages');
  $export['non_log_in'] = $context;

  return $export;
}
