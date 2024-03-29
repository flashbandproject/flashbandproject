<?php
/**
 * @file
 * flashband_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function flashband_events_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function flashband_events_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function flashband_events_node_info() {
  $items = array(
    'event' => array(
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
