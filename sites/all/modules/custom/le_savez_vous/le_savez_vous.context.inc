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
        'views-le_saviez_vous_ss-block' => array(
          'module' => 'views',
          'delta' => 'le_saviez_vous_ss-block',
          'region' => 'slideshow',
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
