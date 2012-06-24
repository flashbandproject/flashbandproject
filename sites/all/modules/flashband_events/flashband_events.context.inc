<?php
/**
 * @file
 * flashband_events.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function flashband_events_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events';
  $context->description = '';
  $context->tag = 'events';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-bands_by_event-block' => array(
          'module' => 'views',
          'delta' => 'bands_by_event-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-musicians_by_event-block' => array(
          'module' => 'views',
          'delta' => 'musicians_by_event-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('events');
  $export['events'] = $context;

  return $export;
}
