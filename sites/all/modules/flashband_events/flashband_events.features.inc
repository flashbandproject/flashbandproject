<?php
/**
 * @file
 * flashband_events.features.inc
 */

/**
 * Implements hook_node_info().
 */
function flashband_events_node_info() {
  $items = array(
    'flashband_event' => array(
      'name' => t('Flash Band Event'),
      'base' => 'node_content',
      'description' => t('Create a new Flash Band event!'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
