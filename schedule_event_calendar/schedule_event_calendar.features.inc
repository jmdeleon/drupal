<?php
/**
 * @file
 * schedule_event_calendar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function schedule_event_calendar_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function schedule_event_calendar_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function schedule_event_calendar_node_info() {
  $items = array(
    'schedule_event' => array(
      'name' => t('Schedule Event'),
      'base' => 'node_content',
      'description' => t('Events on a schedule.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
