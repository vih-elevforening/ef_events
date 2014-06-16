<?php
/**
 * @file
 * ef_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ef_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ef_events_node_info() {
  $items = array(
    'event_payable' => array(
      'name' => t('Event (Payable)'),
      'base' => 'node_content',
      'description' => t('Post information about planned activities or meetings, which can be purchased.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
