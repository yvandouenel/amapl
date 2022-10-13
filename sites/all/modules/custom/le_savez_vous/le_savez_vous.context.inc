<?php
/**
 * @file
 * le_savez_vous.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function le_savez_vous_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = '';
  $context->tag = 'Home';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-headband-block_headband' => array(
          'module' => 'views',
          'delta' => 'headband-block_headband',
          'region' => 'slideshow',
          'weight' => '-10',
        ),
        'bean-pro-liberal-accueil' => array(
          'module' => 'bean',
          'delta' => 'pro-liberal-accueil',
          'region' => 'block-left-6',
          'weight' => '-10',
        ),
        'bean-caa-accueil' => array(
          'module' => 'bean',
          'delta' => 'caa-accueil',
          'region' => 'block-right-6',
          'weight' => '-10',
        ),
        'views-trainings-block_home_training' => array(
          'module' => 'views',
          'delta' => 'trainings-block_home_training',
          'region' => 'block-training',
          'weight' => '-10',
        ),
        'views-news-block_zoom' => array(
          'module' => 'views',
          'delta' => 'news-block_zoom',
          'region' => 'block-zoom',
          'weight' => '-10',
        ),
        'aggregator-feed-2' => array(
          'module' => 'aggregator',
          'delta' => 'feed-2',
          'region' => 'block-news',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  $export['homepage'] = $context;

  return $export;
}
