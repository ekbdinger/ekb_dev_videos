<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ekb_dev_videos_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ekb_dev_videos_node_info() {
  $items = array(
    'dv' => array(
      'name' => t('Development Video'),
      'module' => 'features',
      'description' => t('For Video segment information'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function ekb_dev_videos_views_api() {
  return array(
    'api' => '2',
  );
}
