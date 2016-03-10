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
  $context->name = 'aga08';
  $context->description = '';
  $context->tag = 'Toutes les pages';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'AGA08' => 'AGA08',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-logo-aga08' => array(
          'module' => 'bean',
          'delta' => 'logo-aga08',
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
  $export['aga08'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'agakam';
  $context->description = '';
  $context->tag = 'Toutes les pages';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'AGAKAM' => 'AGAKAM',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-logo-agakam' => array(
          'module' => 'bean',
          'delta' => 'logo-agakam',
          'region' => 'header',
          'weight' => '31',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Toutes les pages');
  $export['agakam'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'agaprofil';
  $context->description = '';
  $context->tag = 'Toutes les pages';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'AGAPROFIL' => 'AGAPROFIL',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-agaprofil' => array(
          'module' => 'bean',
          'delta' => 'agaprofil',
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
  $export['agaprofil'] = $context;

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
  $export['agcs'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'amapl';
  $context->description = '';
  $context->tag = 'Toutes les pages';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'AMAPL' => 'AMAPL',
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
  $export['amapl'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'angiil';
  $context->description = '';
  $context->tag = 'Toutes les pages';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'ANGIIL' => 'ANGIIL',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-angiil' => array(
          'module' => 'bean',
          'delta' => 'angiil',
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
  $export['angiil'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'demo';
  $context->description = 'bloc logo pour une demo';
  $context->tag = 'Toutes les pages';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'DEMO' => 'DEMO',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-logo-demo' => array(
          'module' => 'bean',
          'delta' => 'logo-demo',
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
  t('bloc logo pour une demo');
  $export['demo'] = $context;

  return $export;
}
