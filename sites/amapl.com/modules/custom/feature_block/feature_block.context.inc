<?php
/**
 * @file
 * feature_block.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_block_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'allpages';
  $context->description = '';
  $context->tag = 'All Pages';
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
        'bean-partenaires' => array(
          'module' => 'bean',
          'delta' => 'partenaires',
          'region' => 'footer-1',
          'weight' => '-10',
        ),
        'menu-menu-menu-bas' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-bas',
          'region' => 'footer-2',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('All Pages');
  $export['allpages'] = $context;

  return $export;
}
