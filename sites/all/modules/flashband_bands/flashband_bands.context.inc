<?php
/**
 * @file
 * flashband_bands.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function flashband_bands_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'bands';
  $context->description = '';
  $context->tag = 'bands';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'band' => 'band',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-users_by_band-block' => array(
          'module' => 'views',
          'delta' => 'users_by_band-block',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('bands');
  $export['bands'] = $context;

  return $export;
}
