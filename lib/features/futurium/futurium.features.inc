<?php
/**
 * @file
 * futurium.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function futurium_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function futurium_node_info() {
  $items = array(
    'ideas' => array(
      'name' => t('Ideas'),
      'base' => 'node_content',
      'description' => t('Ideas and experience.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
