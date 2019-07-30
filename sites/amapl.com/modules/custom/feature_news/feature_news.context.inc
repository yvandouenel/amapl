<?php
/**
 * @file
 * feature_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'actus';
  $context->description = '';
  $context->tag = 'Pages spécifiques';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        's-informer/actualites' => 's-informer/actualites',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'aggregator-feed-1' => array(
          'module' => 'aggregator',
          'delta' => 'feed-1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages spécifiques');
  $export['actus'] = $context;

  return $export;
}
