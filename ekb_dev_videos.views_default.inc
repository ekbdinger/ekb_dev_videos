<?php

/**
 * Implementation of hook_views_default_views().
 */
function ekb_dev_videos_views_default_views() {
  $views = array();

  // Exported view: devvidbyviddate
  $view = new view;
  $view->name = 'devvidbyviddate';
  $view->description = 'New Features - Development Videos - by Weekly Video Page';
  $view->tag = '';
  $view->base_table = 'node';
  $view->core = 0;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'field_feature_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_feature_value',
      'table' => 'node_data_field_feature',
      'field' => 'field_feature_value',
      'relationship' => 'none',
    ),
    'field_sub1_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 1,
        'max_length' => '100',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_sub1_value',
      'table' => 'node_data_field_sub1',
      'field' => 'field_sub1_value',
      'relationship' => 'none',
    ),
    'field_new_feature_value' => array(
      'label' => 'New Feature',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_new_feature_value',
      'table' => 'node_data_field_new_feature',
      'field' => 'field_new_feature_value',
      'relationship' => 'none',
    ),
    'field_date_value' => array(
      'label' => 'Video on',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_node' => 0,
      'repeat' => array(
        'show_repeat_rule' => '',
      ),
      'multiple' => array(
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'group' => TRUE,
      ),
      'fromto' => array(
        'fromto' => 'both',
      ),
      'label_type' => 'custom',
      'format' => 'default',
      'exclude' => 1,
      'id' => 'field_date_value',
      'table' => 'node_data_field_date',
      'field' => 'field_date_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_developer_value' => array(
      'label' => 'Developer',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_developer_value',
      'table' => 'node_data_field_developer',
      'field' => 'field_developer_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_dev_link_vid_url' => array(
      'label' => 'Link to Video',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_dev_link_vid_url',
      'table' => 'node_data_field_dev_link_vid',
      'field' => 'field_dev_link_vid_url',
      'relationship' => 'none',
    ),
    'field_dev_time_value' => array(
      'label' => 'Min:Sec',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_node' => 0,
      'label_type' => 'custom',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_dev_time_value',
      'table' => 'node_data_field_dev_time',
      'field' => 'field_dev_time_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'field_dev_time_value' => array(
      'order' => 'ASC',
      'delta' => -1,
      'id' => 'field_dev_time_value',
      'table' => 'node_data_field_dev_time',
      'field' => 'field_dev_time_value',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'dv' => 'dv',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'role',
    'role' => array(
      3 => 3,
      5 => 5,
      8 => 8,
    ),
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'All Development Videos by Date');
  $handler->override_option('items_per_page', 0);
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => 'field_date_value',
    'override' => 0,
    'sticky' => 0,
    'order' => 'desc',
    'columns' => array(
      'field_feature_value' => 'field_feature_value',
      'field_sub1_value' => 'field_sub1_value',
      'field_new_feature_value' => 'field_new_feature_value',
      'field_date_value' => 'field_date_value',
      'field_developer_value' => 'field_developer_value',
      'field_dev_link_vid_url' => 'field_dev_link_vid_url',
      'field_dev_time_value' => 'field_dev_time_value',
    ),
    'info' => array(
      'field_feature_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_sub1_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_new_feature_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_date_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_developer_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_dev_link_vid_url' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_dev_time_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
    ),
    'default' => 'field_date_value',
  ));
  $handler->override_option('row_options', array(
    'inline' => array(
      'field_date_value' => 'field_date_value',
      'field_feature_value' => 'field_feature_value',
      'field_sub1_value' => 'field_sub1_value',
      'field_sub_sub_feature_value' => 'field_sub_sub_feature_value',
      'field_new_feature_value' => 'field_new_feature_value',
      'field_developer_value' => 'field_developer_value',
      'field_minutes_value' => 'field_minutes_value',
    ),
    'separator' => ' - ',
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'devvidbyviddate');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  // Exported view: devvidfeature
  $view = new view;
  $view->name = 'devvidfeature';
  $view->description = 'New Features - Development Videos - Features  Page';
  $view->tag = '';
  $view->base_table = 'node';
  $view->core = 0;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'field_feature_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_feature_value',
      'table' => 'node_data_field_feature',
      'field' => 'field_feature_value',
      'relationship' => 'none',
    ),
    'field_sub1_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 1,
        'max_length' => '100',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_sub1_value',
      'table' => 'node_data_field_sub1',
      'field' => 'field_sub1_value',
      'relationship' => 'none',
    ),
    'field_sub_sub_feature_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_sub_sub_feature_value',
      'table' => 'node_data_field_sub_sub_feature',
      'field' => 'field_sub_sub_feature_value',
      'relationship' => 'none',
    ),
    'field_new_feature_value' => array(
      'label' => 'New Feature',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_new_feature_value',
      'table' => 'node_data_field_new_feature',
      'field' => 'field_new_feature_value',
      'relationship' => 'none',
    ),
    'field_date_value' => array(
      'id' => 'field_date_value',
      'table' => 'node_data_field_date',
      'field' => 'field_date_value',
    ),
    'field_developer_value' => array(
      'label' => 'Developer',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_developer_value',
      'table' => 'node_data_field_developer',
      'field' => 'field_developer_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_dev_link_vid_url' => array(
      'label' => 'Link to Video',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_dev_link_vid_url',
      'table' => 'node_data_field_dev_link_vid',
      'field' => 'field_dev_link_vid_url',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'field_sub1_value' => array(
      'order' => 'ASC',
      'delta' => -1,
      'id' => 'field_sub1_value',
      'table' => 'node_data_field_sub1',
      'field' => 'field_sub1_value',
      'relationship' => 'none',
    ),
    'field_date_value' => array(
      'order' => 'ASC',
      'delta' => -1,
      'id' => 'field_date_value',
      'table' => 'node_data_field_date',
      'field' => 'field_date_value',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'dv' => 'dv',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'role',
    'role' => array(
      3 => 3,
      5 => 5,
      8 => 8,
    ),
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Development Video Segments by Feature');
  $handler->override_option('items_per_page', 0);
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => 'field_feature_value',
    'override' => 0,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'field_feature_value' => 'field_feature_value',
      'field_sub1_value' => 'field_sub1_value',
      'field_sub_sub_feature_value' => 'field_sub_sub_feature_value',
      'field_new_feature_value' => 'field_new_feature_value',
      'field_date_value' => 'field_date_value',
      'field_developer_value' => 'field_developer_value',
      'field_dev_link_vid_url' => 'field_dev_link_vid_url',
    ),
    'info' => array(
      'field_feature_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_sub1_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_sub_sub_feature_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_new_feature_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_date_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_developer_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_dev_link_vid_url' => array(
        'sortable' => 0,
        'separator' => '',
      ),
    ),
    'default' => 'field_feature_value',
  ));
  $handler->override_option('row_options', array(
    'inline' => array(
      'field_date_value' => 'field_date_value',
      'field_feature_value' => 'field_feature_value',
      'field_sub1_value' => 'field_sub1_value',
      'field_sub_sub_feature_value' => 'field_sub_sub_feature_value',
      'field_new_feature_value' => 'field_new_feature_value',
      'field_developer_value' => 'field_developer_value',
      'field_minutes_value' => 'field_minutes_value',
    ),
    'separator' => ' - ',
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'devvidfeature');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
