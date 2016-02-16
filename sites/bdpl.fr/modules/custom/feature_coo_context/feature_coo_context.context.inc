<?php
/**
 * @file
 * feature_coo_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_coo_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'connected';
  $context->description = '';
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
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'navigation',
          'weight' => '-10',
        ),
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
  $export['connected'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_id';
  $context->description = '';
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
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Page d\'accueil identifié');
  $export['front_id'] = $context;

  return $export;
}
