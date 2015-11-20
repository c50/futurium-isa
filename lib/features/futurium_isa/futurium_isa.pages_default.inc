<?php
/**
 * @file
 * futurium_isa.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function futurium_isa_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__event';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Event',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'event',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'event_d4eu' => 'event_d4eu',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'center' => NULL,
      'top' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '8',
          'sm' => '8',
          'md' => '8',
          'lg' => '8',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'right' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '4',
          'sm' => '4',
          'md' => '4',
          'lg' => '4',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'bottom' => NULL,
      'default' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'middle' => NULL,
      'row1l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '9',
          'sm' => '9',
          'md' => '9',
          'lg' => '9',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row1r' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '3',
          'sm' => '3',
          'md' => '3',
          'lg' => '3',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row2l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row2r' => NULL,
      'row3l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '8',
          'sm' => '8',
          'md' => '8',
          'lg' => '8',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row3r' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '4',
          'sm' => '4',
          'md' => '4',
          'lg' => '4',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row4l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '8',
          'sm' => '8',
          'md' => '8',
          'lg' => '8',
        ),
        'offset' => array(
          'xs' => '2',
          'sm' => '2',
          'md' => '2',
          'lg' => '2',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
      'row6l' => NULL,
      'row6r' => NULL,
      'row7l' => NULL,
      'row7r' => NULL,
      'row8l' => NULL,
      'row8r' => NULL,
      'row9l' => NULL,
      'row9r' => NULL,
      'row10l' => NULL,
      'row10r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'row2l' => array(
      'style' => 'bootstrap_region',
    ),
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
    'row1r' => array(
      'style' => 'bootstrap_region',
    ),
    'row3l' => array(
      'style' => 'bootstrap_region',
    ),
    'row3r' => array(
      'style' => 'bootstrap_region',
    ),
    'row4l' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '7abc777f-cef6-43cf-ad18-be534f15b087';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-61c43ffe-0f6c-4a89-9667-7bd67e690b11';
  $pane->panel = 'row1l';
  $pane->type = 'block';
  $pane->subtype = 'futurium_isa_extras-node_authors';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '61c43ffe-0f6c-4a89-9667-7bd67e690b11';
  $display->content['new-61c43ffe-0f6c-4a89-9667-7bd67e690b11'] = $pane;
  $display->panels['row1l'][1] = 'new-61c43ffe-0f6c-4a89-9667-7bd67e690b11';
  $pane = new stdClass();
  $pane->pid = 'new-e5a98fc1-a0e7-4a9f-8d28-098f66faa8b9';
  $pane->panel = 'row1r';
  $pane->type = 'block';
  $pane->subtype = 'futurium_isa_extras-node_social_share';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e5a98fc1-a0e7-4a9f-8d28-098f66faa8b9';
  $display->content['new-e5a98fc1-a0e7-4a9f-8d28-098f66faa8b9'] = $pane;
  $display->panels['row1r'][0] = 'new-e5a98fc1-a0e7-4a9f-8d28-098f66faa8b9';
  $pane = new stdClass();
  $pane->pid = 'new-78d0a421-8ae5-4daf-82b9-0d787516ae9a';
  $pane->panel = 'row2l';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'smart_trim_format',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'trim_length' => '300',
      'trim_type' => 'chars',
      'trim_suffix' => '...',
      'more_link' => '0',
      'more_text' => 'Read more',
      'summary_handler' => 'full',
      'trim_options' => array(
        'text' => 0,
      ),
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '78d0a421-8ae5-4daf-82b9-0d787516ae9a';
  $display->content['new-78d0a421-8ae5-4daf-82b9-0d787516ae9a'] = $pane;
  $display->panels['row2l'][0] = 'new-78d0a421-8ae5-4daf-82b9-0d787516ae9a';
  $pane = new stdClass();
  $pane->pid = 'new-159bcf64-0b50-4a48-b001-e2302215eed2';
  $pane->panel = 'row3l';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'trim_length' => '600',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '159bcf64-0b50-4a48-b001-e2302215eed2';
  $display->content['new-159bcf64-0b50-4a48-b001-e2302215eed2'] = $pane;
  $display->panels['row3l'][0] = 'new-159bcf64-0b50-4a48-b001-e2302215eed2';
  $pane = new stdClass();
  $pane->pid = 'new-98244a54-a0db-48cf-8826-1b24e7e5453c';
  $pane->panel = 'row3r';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_date_time';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'short',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Date & Place',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '98244a54-a0db-48cf-8826-1b24e7e5453c';
  $display->content['new-98244a54-a0db-48cf-8826-1b24e7e5453c'] = $pane;
  $display->panels['row3r'][0] = 'new-98244a54-a0db-48cf-8826-1b24e7e5453c';
  $pane = new stdClass();
  $pane->pid = 'new-d579a732-0838-487a-8449-f96c44f80fa7';
  $pane->panel = 'row3r';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_location';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'addressfield_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'use_widget_handlers' => 1,
      'format_handlers' => array(
        'address' => 'address',
      ),
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd579a732-0838-487a-8449-f96c44f80fa7';
  $display->content['new-d579a732-0838-487a-8449-f96c44f80fa7'] = $pane;
  $display->panels['row3r'][1] = 'new-d579a732-0838-487a-8449-f96c44f80fa7';
  $pane = new stdClass();
  $pane->pid = 'new-bec0da8a-0003-4d8d-b5fc-fb01f26f5af6';
  $pane->panel = 'row3r';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_coordinates';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'geofield_map_map',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'geofield_map_width' => '100%',
      'geofield_map_height' => '300px',
      'geofield_map_zoom' => '8',
      'geofield_map_min_zoom' => '0',
      'geofield_map_max_zoom' => '0',
      'geofield_map_controltype' => 'default',
      'geofield_map_mtc' => 'standard',
      'geofield_map_pancontrol' => 1,
      'geofield_map_maptype' => 'map',
      'geofield_map_baselayers_map' => 1,
      'geofield_map_baselayers_satellite' => 1,
      'geofield_map_baselayers_hybrid' => 1,
      'geofield_map_baselayers_physical' => 0,
      'geofield_map_scale' => 0,
      'geofield_map_overview' => 0,
      'geofield_map_overview_opened' => 0,
      'geofield_map_scrollwheel' => 0,
      'geofield_map_draggable' => 0,
      'geofield_map_streetview_show' => 0,
      'geofield_map_center' => array(
        'lat' => '',
        'lon' => '',
        'geocode' => 'Find my location',
      ),
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'bec0da8a-0003-4d8d-b5fc-fb01f26f5af6';
  $display->content['new-bec0da8a-0003-4d8d-b5fc-fb01f26f5af6'] = $pane;
  $display->panels['row3r'][2] = 'new-bec0da8a-0003-4d8d-b5fc-fb01f26f5af6';
  $pane = new stdClass();
  $pane->pid = 'new-d71fd7ca-44fa-4060-91b9-461310390288';
  $pane->panel = 'row3r';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Flag & Flag Count',
    'title' => '',
    'body' => '<p>%node:flag-attending-link</p><p><strong>%node:flag-attending-count going</strong></p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd71fd7ca-44fa-4060-91b9-461310390288';
  $display->content['new-d71fd7ca-44fa-4060-91b9-461310390288'] = $pane;
  $display->panels['row3r'][3] = 'new-d71fd7ca-44fa-4060-91b9-461310390288';
  $pane = new stdClass();
  $pane->pid = 'new-a4a65293-e53d-45e4-b521-8b43caf09e52';
  $pane->panel = 'row4l';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a4a65293-e53d-45e4-b521-8b43caf09e52';
  $display->content['new-a4a65293-e53d-45e4-b521-8b43caf09e52'] = $pane;
  $display->panels['row4l'][0] = 'new-a4a65293-e53d-45e4-b521-8b43caf09e52';
  $pane = new stdClass();
  $pane->pid = 'new-8e41de7b-6366-48c7-b402-1124b80b8cf4';
  $pane->panel = 'row4l';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '50',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8e41de7b-6366-48c7-b402-1124b80b8cf4';
  $display->content['new-8e41de7b-6366-48c7-b402-1124b80b8cf4'] = $pane;
  $display->panels['row4l'][1] = 'new-8e41de7b-6366-48c7-b402-1124b80b8cf4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__event'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__evidence';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Evidence',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'evidence',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'evidence' => 'evidence',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'row1l' => NULL,
      'row1r' => NULL,
      'row2l' => NULL,
      'row2r' => NULL,
      'row3l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '8',
          'sm' => '8',
          'md' => '8',
          'lg' => '8',
        ),
        'offset' => array(
          'xs' => '2',
          'sm' => '2',
          'md' => '2',
          'lg' => '2',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row3r' => NULL,
      'row4l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '8',
          'sm' => '8',
          'md' => '8',
          'lg' => '8',
        ),
        'offset' => array(
          'xs' => '2',
          'sm' => '2',
          'md' => '2',
          'lg' => '2',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
      'row6l' => NULL,
      'row6r' => NULL,
      'row7l' => NULL,
      'row7r' => NULL,
      'row8l' => NULL,
      'row8r' => NULL,
      'row9l' => NULL,
      'row9r' => NULL,
      'row10l' => NULL,
      'row10r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row3l' => array(
      'style' => 'bootstrap_region',
    ),
    'row4l' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e7374b17-c1d4-489a-b1d2-690d9735df34';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8cd8ce6e-29ce-410b-8269-d141261e9b6c';
  $pane->panel = 'row1l';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_summary_or_trimmed',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'trim_length' => '600',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8cd8ce6e-29ce-410b-8269-d141261e9b6c';
  $display->content['new-8cd8ce6e-29ce-410b-8269-d141261e9b6c'] = $pane;
  $display->panels['row1l'][0] = 'new-8cd8ce6e-29ce-410b-8269-d141261e9b6c';
  $pane = new stdClass();
  $pane->pid = 'new-f738c9f9-b85a-40f0-99d8-ec48172e27c6';
  $pane->panel = 'row2l';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f738c9f9-b85a-40f0-99d8-ec48172e27c6';
  $display->content['new-f738c9f9-b85a-40f0-99d8-ec48172e27c6'] = $pane;
  $display->panels['row2l'][0] = 'new-f738c9f9-b85a-40f0-99d8-ec48172e27c6';
  $pane = new stdClass();
  $pane->pid = 'new-9a425494-524e-4be1-80d2-fae74f494276';
  $pane->panel = 'row3l';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_file_url';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'file_rendered',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'file_view_mode' => 'default',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9a425494-524e-4be1-80d2-fae74f494276';
  $display->content['new-9a425494-524e-4be1-80d2-fae74f494276'] = $pane;
  $display->panels['row3l'][0] = 'new-9a425494-524e-4be1-80d2-fae74f494276';
  $pane = new stdClass();
  $pane->pid = 'new-f6a5fca4-7777-4cf7-aafa-319f66a897da';
  $pane->panel = 'row3l';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f6a5fca4-7777-4cf7-aafa-319f66a897da';
  $display->content['new-f6a5fca4-7777-4cf7-aafa-319f66a897da'] = $pane;
  $display->panels['row3l'][1] = 'new-f6a5fca4-7777-4cf7-aafa-319f66a897da';
  $pane = new stdClass();
  $pane->pid = 'new-52ecfecc-a096-44a9-b6f5-b38b17399378';
  $pane->panel = 'row4l';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '10',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '52ecfecc-a096-44a9-b6f5-b38b17399378';
  $display->content['new-52ecfecc-a096-44a9-b6f5-b38b17399378'] = $pane;
  $display->panels['row4l'][0] = 'new-52ecfecc-a096-44a9-b6f5-b38b17399378';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__evidence'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__idea';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Idea',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'idea',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ideas' => 'ideas',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'center' => NULL,
      'top' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'left' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '8',
          'sm' => '8',
          'md' => '8',
          'lg' => '8',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'right' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '4',
          'sm' => '4',
          'md' => '4',
          'lg' => '4',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'bottom' => NULL,
      'row1l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '9',
          'sm' => '9',
          'md' => '9',
          'lg' => '9',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row1r' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '3',
          'sm' => '3',
          'md' => '3',
          'lg' => '3',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row2l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '8',
          'sm' => '8',
          'md' => '8',
          'lg' => '8',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row2r' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '4',
          'sm' => '4',
          'md' => '4',
          'lg' => '4',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row3l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '8',
          'sm' => '8',
          'md' => '8',
          'lg' => '8',
        ),
        'offset' => array(
          'xs' => '2',
          'sm' => '2',
          'md' => '2',
          'lg' => '2',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row3r' => NULL,
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
      'row6l' => NULL,
      'row6r' => NULL,
      'row7l' => NULL,
      'row7r' => NULL,
      'row8l' => NULL,
      'row8r' => NULL,
      'row9l' => NULL,
      'row9r' => NULL,
      'row10l' => NULL,
      'row10r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'row2r' => array(
      'style' => 'bootstrap_region',
    ),
    'row2l' => array(
      'style' => 'bootstrap_region',
    ),
    'row3l' => array(
      'style' => 'bootstrap_region',
    ),
    'row1r' => array(
      'style' => 'bootstrap_region',
    ),
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7abc777f-cef6-43cf-ad18-be534f15b087';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-44640f51-3aa3-4a74-bb72-e8f4fd660c8b';
  $pane->panel = 'row1l';
  $pane->type = 'block';
  $pane->subtype = 'futurium_isa_extras-node_authors';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '44640f51-3aa3-4a74-bb72-e8f4fd660c8b';
  $display->content['new-44640f51-3aa3-4a74-bb72-e8f4fd660c8b'] = $pane;
  $display->panels['row1l'][0] = 'new-44640f51-3aa3-4a74-bb72-e8f4fd660c8b';
  $pane = new stdClass();
  $pane->pid = 'new-8dc41bbb-7faa-4476-843e-5f977a854684';
  $pane->panel = 'row1r';
  $pane->type = 'block';
  $pane->subtype = 'futurium_isa_extras-node_social_share';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8dc41bbb-7faa-4476-843e-5f977a854684';
  $display->content['new-8dc41bbb-7faa-4476-843e-5f977a854684'] = $pane;
  $display->panels['row1r'][0] = 'new-8dc41bbb-7faa-4476-843e-5f977a854684';
  $pane = new stdClass();
  $pane->pid = 'new-064e630b-0850-4bdd-a66f-8493133ca695';
  $pane->panel = 'row2l';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ideas';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '064e630b-0850-4bdd-a66f-8493133ca695';
  $display->content['new-064e630b-0850-4bdd-a66f-8493133ca695'] = $pane;
  $display->panels['row2l'][0] = 'new-064e630b-0850-4bdd-a66f-8493133ca695';
  $pane = new stdClass();
  $pane->pid = 'new-d8a33c89-d231-461c-a7a6-dc1a5eb3a858';
  $pane->panel = 'row2l';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Tags:',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd8a33c89-d231-461c-a7a6-dc1a5eb3a858';
  $display->content['new-d8a33c89-d231-461c-a7a6-dc1a5eb3a858'] = $pane;
  $display->panels['row2l'][1] = 'new-d8a33c89-d231-461c-a7a6-dc1a5eb3a858';
  $pane = new stdClass();
  $pane->pid = 'new-64abcfd6-3d26-4566-af88-210aaa635a4d';
  $pane->panel = 'row2l';
  $pane->type = 'block';
  $pane->subtype = 'linker-linker';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '64abcfd6-3d26-4566-af88-210aaa635a4d';
  $display->content['new-64abcfd6-3d26-4566-af88-210aaa635a4d'] = $pane;
  $display->panels['row2l'][2] = 'new-64abcfd6-3d26-4566-af88-210aaa635a4d';
  $pane = new stdClass();
  $pane->pid = 'new-372c2bb4-f707-4f27-afd8-9d5ac53b5805';
  $pane->panel = 'row2r';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Do you like it?',
    'title' => 'Do you like it?',
    'body' => '<p>%node:flag-like-count Citizens voted for this idea.</p><p>%node:flag-like-link</p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '372c2bb4-f707-4f27-afd8-9d5ac53b5805';
  $display->content['new-372c2bb4-f707-4f27-afd8-9d5ac53b5805'] = $pane;
  $display->panels['row2r'][0] = 'new-372c2bb4-f707-4f27-afd8-9d5ac53b5805';
  $pane = new stdClass();
  $pane->pid = 'new-e4609378-984e-4e60-8bd5-5d52770c58ea';
  $pane->panel = 'row2r';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Subscribe',
    'title' => 'Let\'s stay in touch',
    'body' => '<p>Interested by the subject? Follow the content and get notified of activity on this page.</p><p>%node:flag-subscribe-link</p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e4609378-984e-4e60-8bd5-5d52770c58ea';
  $display->content['new-e4609378-984e-4e60-8bd5-5d52770c58ea'] = $pane;
  $display->panels['row2r'][1] = 'new-e4609378-984e-4e60-8bd5-5d52770c58ea';
  $pane = new stdClass();
  $pane->pid = 'new-eebbf544-e7b2-4c09-90da-0b96bf438739';
  $pane->panel = 'row2r';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_dummy';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'relation_otherendpoint',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Evidences',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'eebbf544-e7b2-4c09-90da-0b96bf438739';
  $display->content['new-eebbf544-e7b2-4c09-90da-0b96bf438739'] = $pane;
  $display->panels['row2r'][2] = 'new-eebbf544-e7b2-4c09-90da-0b96bf438739';
  $pane = new stdClass();
  $pane->pid = 'new-5850da47-0b36-429d-8ce4-18dc2e5d6dc9';
  $pane->panel = 'row2r';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_related';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'relation_otherendpoint',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Related',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '5850da47-0b36-429d-8ce4-18dc2e5d6dc9';
  $display->content['new-5850da47-0b36-429d-8ce4-18dc2e5d6dc9'] = $pane;
  $display->panels['row2r'][3] = 'new-5850da47-0b36-429d-8ce4-18dc2e5d6dc9';
  $pane = new stdClass();
  $pane->pid = 'new-187e3f2c-a257-4459-953b-ed3da549df42';
  $pane->panel = 'row3l';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '187e3f2c-a257-4459-953b-ed3da549df42';
  $display->content['new-187e3f2c-a257-4459-953b-ed3da549df42'] = $pane;
  $display->panels['row3l'][0] = 'new-187e3f2c-a257-4459-953b-ed3da549df42';
  $pane = new stdClass();
  $pane->pid = 'new-99396859-4ddf-41d8-a8ef-d0472fa507ea';
  $pane->panel = 'row3l';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '0',
    'comments_per_page' => '50',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '99396859-4ddf-41d8-a8ef-d0472fa507ea';
  $display->content['new-99396859-4ddf-41d8-a8ef-d0472fa507ea'] = $pane;
  $display->panels['row3l'][1] = 'new-99396859-4ddf-41d8-a8ef-d0472fa507ea';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__idea'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_home__homepage';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Homepage',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'homepage',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row1l' => NULL,
      'row1r' => NULL,
      'row2l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '4',
          'md' => '4',
          'lg' => '4',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row2r' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '4',
          'md' => '4',
          'lg' => '4',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row3l' => array(),
      'row3r' => NULL,
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
      'row6l' => NULL,
      'row6r' => NULL,
      'row7l' => NULL,
      'row7r' => NULL,
      'row8l' => NULL,
      'row8r' => NULL,
      'row9l' => NULL,
      'row9r' => NULL,
      'row10l' => NULL,
      'row10r' => NULL,
      'row1c' => NULL,
      'row2c' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '4',
          'md' => '4',
          'lg' => '4',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row3c' => NULL,
      'row4c' => NULL,
      'row5c' => NULL,
      'row6c' => NULL,
      'row7c' => NULL,
      'row8c' => NULL,
      'row9c' => NULL,
      'row10c' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row2l' => array(
      'style' => 'bootstrap_region',
    ),
    'row2c' => array(
      'style' => 'bootstrap_region',
    ),
    'row2r' => array(
      'style' => 'bootstrap_region',
    ),
    'row3l' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '096aef7a-059b-4f6b-81aa-35c1ce96a71d';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-220baf6d-b097-4c73-83ee-baed200c0014';
  $pane->panel = 'row2c';
  $pane->type = 'block';
  $pane->subtype = 'boxes-futurium_ideas_home_intro';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '220baf6d-b097-4c73-83ee-baed200c0014';
  $display->content['new-220baf6d-b097-4c73-83ee-baed200c0014'] = $pane;
  $display->panels['row2c'][0] = 'new-220baf6d-b097-4c73-83ee-baed200c0014';
  $pane = new stdClass();
  $pane->pid = 'new-09cccaad-510c-46ec-8c85-52eb76f0931a';
  $pane->panel = 'row2l';
  $pane->type = 'block';
  $pane->subtype = 'boxes-futurium_futures_home_intro';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '09cccaad-510c-46ec-8c85-52eb76f0931a';
  $display->content['new-09cccaad-510c-46ec-8c85-52eb76f0931a'] = $pane;
  $display->panels['row2l'][0] = 'new-09cccaad-510c-46ec-8c85-52eb76f0931a';
  $pane = new stdClass();
  $pane->pid = 'new-d7e49b77-9a8f-41a2-9bae-7c18cffe962f';
  $pane->panel = 'row2r';
  $pane->type = 'block';
  $pane->subtype = 'boxes-futurium_events_home_intro';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd7e49b77-9a8f-41a2-9bae-7c18cffe962f';
  $display->content['new-d7e49b77-9a8f-41a2-9bae-7c18cffe962f'] = $pane;
  $display->panels['row2r'][0] = 'new-d7e49b77-9a8f-41a2-9bae-7c18cffe962f';
  $pane = new stdClass();
  $pane->pid = 'new-8264d783-c51b-42e9-a2bb-7948007b6d48';
  $pane->panel = 'row3l';
  $pane->type = 'views';
  $pane->subtype = 'ideas';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'container',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8264d783-c51b-42e9-a2bb-7948007b6d48';
  $display->content['new-8264d783-c51b-42e9-a2bb-7948007b6d48'] = $pane;
  $display->panels['row3l'][0] = 'new-8264d783-c51b-42e9-a2bb-7948007b6d48';
  $pane = new stdClass();
  $pane->pid = 'new-a9678641-f5df-4569-aee5-7459affc446e';
  $pane->panel = 'row4l';
  $pane->type = 'block';
  $pane->subtype = 'boxes-sharing_box';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a9678641-f5df-4569-aee5-7459affc446e';
  $display->content['new-a9678641-f5df-4569-aee5-7459affc446e'] = $pane;
  $display->panels['row4l'][0] = 'new-a9678641-f5df-4569-aee5-7459affc446e';
  $pane = new stdClass();
  $pane->pid = 'new-8c9e42e9-59f8-41c2-94bd-48867f83dd52';
  $pane->panel = 'row5l';
  $pane->type = 'views';
  $pane->subtype = 'discussions';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '4',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8c9e42e9-59f8-41c2-94bd-48867f83dd52';
  $display->content['new-8c9e42e9-59f8-41c2-94bd-48867f83dd52'] = $pane;
  $display->panels['row5l'][0] = 'new-8c9e42e9-59f8-41c2-94bd-48867f83dd52';
  $pane = new stdClass();
  $pane->pid = 'new-baa0399e-ce52-47bb-9fe9-c0f43bcce5c3';
  $pane->panel = 'row6l';
  $pane->type = 'views';
  $pane->subtype = 'events';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '2',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'upcoming',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'baa0399e-ce52-47bb-9fe9-c0f43bcce5c3';
  $display->content['new-baa0399e-ce52-47bb-9fe9-c0f43bcce5c3'] = $pane;
  $display->panels['row6l'][0] = 'new-baa0399e-ce52-47bb-9fe9-c0f43bcce5c3';
  $pane = new stdClass();
  $pane->pid = 'new-362031a0-5464-4320-a139-8e2505137cc6';
  $pane->panel = 'row7l';
  $pane->type = 'views';
  $pane->subtype = 'poll';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '362031a0-5464-4320-a139-8e2505137cc6';
  $display->content['new-362031a0-5464-4320-a139-8e2505137cc6'] = $pane;
  $display->panels['row7l'][0] = 'new-362031a0-5464-4320-a139-8e2505137cc6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_home__homepage'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_topics__topics';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'topics';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Topics',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'topics',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'topics',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'center' => NULL,
      'row1l' => NULL,
      'row1r' => NULL,
      'row2l' => NULL,
      'row2r' => NULL,
      'row3l' => NULL,
      'row3r' => NULL,
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
      'row6l' => NULL,
      'row6r' => NULL,
      'row7l' => NULL,
      'row7r' => NULL,
      'row8l' => NULL,
      'row8r' => NULL,
      'row9l' => NULL,
      'row9r' => NULL,
      'row10l' => NULL,
      'row10r' => NULL,
    ),
    'style' => 'bootstrap_region',
  );
  $display->cache = array();
  $display->title = 'Visions';
  $display->uuid = 'f7397fc8-658c-4f46-b8b4-8d1349390392';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-aeb3012a-3891-4853-a218-d6943f588767';
  $pane->panel = 'row1l';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Intro',
    'title' => '',
    'body' => '<h1 style="text-align: center;">The participatory democracy program</h1><div class="row"><div class="col col-md-3"><div class="idea" style="text-align: center;"><h4>Ideation</h4><p>Propose ideas to make a vision a reality.</p></div></div><div class="col col-md-3"><div class="selection" style="text-align: center;"><h4>Selection</h4><p>Discuss and refine ideas.</p></div></div><div class="col col-md-3"><div class="idea" style="text-align: center;"><h4>Road Map</h4><p>Draw a plan to exemplify how ideas correlate.</p></div></div><div class="col col-md-3"><div class="idea" style="text-align: center;"><h4>Vote</h4><p>Rank and give feedback on other people\'s ideas.</p></div></div></div>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'center',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'aeb3012a-3891-4853-a218-d6943f588767';
  $display->content['new-aeb3012a-3891-4853-a218-d6943f588767'] = $pane;
  $display->panels['row1l'][0] = 'new-aeb3012a-3891-4853-a218-d6943f588767';
  $pane = new stdClass();
  $pane->pid = 'new-497145e5-5cb6-4083-b5f2-323490859ec2';
  $pane->panel = 'row1l';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<a href="/admin/structure/taxonomy/futurium_topics/add">Add new topic</a>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '497145e5-5cb6-4083-b5f2-323490859ec2';
  $display->content['new-497145e5-5cb6-4083-b5f2-323490859ec2'] = $pane;
  $display->panels['row1l'][1] = 'new-497145e5-5cb6-4083-b5f2-323490859ec2';
  $pane = new stdClass();
  $pane->pid = 'new-67fe9570-3cb9-4087-b605-e5b095f47aff';
  $pane->panel = 'row2l';
  $pane->type = 'views';
  $pane->subtype = 'topics';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '4',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '67fe9570-3cb9-4087-b605-e5b095f47aff';
  $display->content['new-67fe9570-3cb9-4087-b605-e5b095f47aff'] = $pane;
  $display->panels['row2l'][0] = 'new-67fe9570-3cb9-4087-b605-e5b095f47aff';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_topics__topics'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__vision';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Vision',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'vision',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:i18n-name';
  $display->uuid = 'ce8eda4e-d04f-4827-85cb-dde93e4bd41e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-234b1f56-e286-415d-95d3-cdcf0564572d';
  $pane->panel = 'center';
  $pane->type = 'term_description';
  $pane->subtype = 'term_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '234b1f56-e286-415d-95d3-cdcf0564572d';
  $display->content['new-234b1f56-e286-415d-95d3-cdcf0564572d'] = $pane;
  $display->panels['center'][0] = 'new-234b1f56-e286-415d-95d3-cdcf0564572d';
  $pane = new stdClass();
  $pane->pid = 'new-aef3a345-f7e9-447e-a2cd-a0876e718d69';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => 'The Participatory Democracy Program',
    'body' => '<div class="row"><div class="col col-md-3"><div class="idea"><h2>Ideation</h2>Propose ideas to make this vision a reality</div></div><div class="col col-md-3"><div class="selection"><h2>Selection</h2>Discuss and refine ideas</div></div><div class="col col-md-3"><div class="idea"><h2>Road Map</h2>Draw a roadmap to better understand what to do next</div></div><div class="col col-md-3"><div class="idea"><h2>Vote</h2>Rank and give feedback on other people\'s ideas</div></div></div>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'aef3a345-f7e9-447e-a2cd-a0876e718d69';
  $display->content['new-aef3a345-f7e9-447e-a2cd-a0876e718d69'] = $pane;
  $display->panels['center'][1] = 'new-aef3a345-f7e9-447e-a2cd-a0876e718d69';
  $pane = new stdClass();
  $pane->pid = 'new-1b8ad37b-a827-4f49-933b-94649dd76fcc';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'futurium_topic-add_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1b8ad37b-a827-4f49-933b-94649dd76fcc';
  $display->content['new-1b8ad37b-a827-4f49-933b-94649dd76fcc'] = $pane;
  $display->panels['center'][2] = 'new-1b8ad37b-a827-4f49-933b-94649dd76fcc';
  $pane = new stdClass();
  $pane->pid = 'new-768ca73f-d59a-49cc-8f55-6ca94cbc9480';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'topics';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '4',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => 'argument_term_1.tid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'col col-md-4',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '768ca73f-d59a-49cc-8f55-6ca94cbc9480';
  $display->content['new-768ca73f-d59a-49cc-8f55-6ca94cbc9480'] = $pane;
  $display->panels['center'][3] = 'new-768ca73f-d59a-49cc-8f55-6ca94cbc9480';
  $pane = new stdClass();
  $pane->pid = 'new-10dd691b-8d1b-49be-8664-a35847413733';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'ideas';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '6',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'col col-md-8',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '10dd691b-8d1b-49be-8664-a35847413733';
  $display->content['new-10dd691b-8d1b-49be-8664-a35847413733'] = $pane;
  $display->panels['center'][4] = 'new-10dd691b-8d1b-49be-8664-a35847413733';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__vision'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__panel_context_6967673a-0888-4c18-a3f1-3e10c148e311';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Profile',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'center' => NULL,
      'middle' => array(
        'column_type' => 'col-lg',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '2',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '2',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'top' => NULL,
      'bottom' => NULL,
      'row1l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '2',
          'sm' => '2',
          'md' => '2',
          'lg' => '2',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row1c' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '8',
          'sm' => '8',
          'md' => '8',
          'lg' => '8',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row1r' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '2',
          'sm' => '2',
          'md' => '2',
          'lg' => '2',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row2l' => NULL,
      'row2c' => NULL,
      'row2r' => NULL,
      'row3l' => NULL,
      'row3c' => NULL,
      'row3r' => NULL,
      'row4l' => NULL,
      'row4c' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5c' => NULL,
      'row5r' => NULL,
      'row6l' => NULL,
      'row6c' => NULL,
      'row6r' => NULL,
      'row7l' => NULL,
      'row7c' => NULL,
      'row7r' => NULL,
      'row8l' => NULL,
      'row8c' => NULL,
      'row8r' => NULL,
      'row9l' => NULL,
      'row9c' => NULL,
      'row9r' => NULL,
      'row10l' => NULL,
      'row10c' => NULL,
      'row10r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
    'row1c' => array(
      'style' => 'bootstrap_region',
    ),
    'row1r' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%user:field_firstname %user:field_lastname';
  $display->uuid = '69e2cbf7-423b-4507-86a4-70ad4d326738';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-37c465e7-891c-406d-8394-011fb29ff658';
  $pane->panel = 'row1c';
  $pane->type = 'token';
  $pane->subtype = 'user:name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'argument_entity_id:user_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '37c465e7-891c-406d-8394-011fb29ff658';
  $display->content['new-37c465e7-891c-406d-8394-011fb29ff658'] = $pane;
  $display->panels['row1c'][0] = 'new-37c465e7-891c-406d-8394-011fb29ff658';
  $pane = new stdClass();
  $pane->pid = 'new-cff41d88-c4d3-4b58-a1de-82ab49636217';
  $pane->panel = 'row1c';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<a href="%user:edit-url">Edit</a>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'cff41d88-c4d3-4b58-a1de-82ab49636217';
  $display->content['new-cff41d88-c4d3-4b58-a1de-82ab49636217'] = $pane;
  $display->panels['row1c'][1] = 'new-cff41d88-c4d3-4b58-a1de-82ab49636217';
  $pane = new stdClass();
  $pane->pid = 'new-5599a5dd-9bee-4aa5-8b21-94e6f4a0defb';
  $pane->panel = 'row1l';
  $pane->type = 'user_picture';
  $pane->subtype = 'user_picture';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:user_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5599a5dd-9bee-4aa5-8b21-94e6f4a0defb';
  $display->content['new-5599a5dd-9bee-4aa5-8b21-94e6f4a0defb'] = $pane;
  $display->panels['row1l'][0] = 'new-5599a5dd-9bee-4aa5-8b21-94e6f4a0defb';
  $pane = new stdClass();
  $pane->pid = 'new-23dced38-5182-43d9-96d2-0df5dee6ba9f';
  $pane->panel = 'row1r';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>Facebook</p>
<p>Twitter</p>
<p>Linkedin</p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '23dced38-5182-43d9-96d2-0df5dee6ba9f';
  $display->content['new-23dced38-5182-43d9-96d2-0df5dee6ba9f'] = $pane;
  $display->panels['row1r'][0] = 'new-23dced38-5182-43d9-96d2-0df5dee6ba9f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__panel_context_6967673a-0888-4c18-a3f1-3e10c148e311'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function futurium_isa_default_page_manager_pages() {

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Home',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home__panel_context_10209eef-b15c-4d2f-a918-177bce962d9c';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row2l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '4',
          'sm' => '4',
          'md' => '4',
          'lg' => '4',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row2c' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '4',
          'sm' => '4',
          'md' => '4',
          'lg' => '4',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row2r' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '4',
          'sm' => '4',
          'md' => '4',
          'lg' => '4',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row1l' => NULL,
      'row1c' => NULL,
      'row1r' => NULL,
      'row3l' => NULL,
      'row3c' => NULL,
      'row3r' => NULL,
      'row4l' => NULL,
      'row4c' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5c' => NULL,
      'row5r' => NULL,
      'row6l' => NULL,
      'row6c' => NULL,
      'row6r' => NULL,
      'row7l' => NULL,
      'row7c' => NULL,
      'row7r' => NULL,
      'row8l' => NULL,
      'row8c' => NULL,
      'row8r' => NULL,
      'row9l' => NULL,
      'row9c' => NULL,
      'row9r' => NULL,
      'row10l' => NULL,
      'row10c' => NULL,
      'row10r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row2l' => array(
      'style' => 'bootstrap_region',
    ),
    'row2c' => array(
      'style' => 'bootstrap_region',
    ),
    'row2r' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6381b1aa-c076-44f9-88dc-2b9c5830fd3e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e0472043-679f-423c-aa7b-9c70b3d6f54f';
  $pane->panel = 'row2c';
  $pane->type = 'block';
  $pane->subtype = 'boxes-futurium_ideas_home_intro';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e0472043-679f-423c-aa7b-9c70b3d6f54f';
  $display->content['new-e0472043-679f-423c-aa7b-9c70b3d6f54f'] = $pane;
  $display->panels['row2c'][0] = 'new-e0472043-679f-423c-aa7b-9c70b3d6f54f';
  $pane = new stdClass();
  $pane->pid = 'new-48d4db9b-3de3-4755-8344-04f2743486e7';
  $pane->panel = 'row2l';
  $pane->type = 'block';
  $pane->subtype = 'boxes-futurium_futures_home_intro';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '48d4db9b-3de3-4755-8344-04f2743486e7';
  $display->content['new-48d4db9b-3de3-4755-8344-04f2743486e7'] = $pane;
  $display->panels['row2l'][0] = 'new-48d4db9b-3de3-4755-8344-04f2743486e7';
  $pane = new stdClass();
  $pane->pid = 'new-69e3e85f-451f-417e-bec8-6818a9d55e9d';
  $pane->panel = 'row2r';
  $pane->type = 'block';
  $pane->subtype = 'boxes-futurium_events_home_intro';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '69e3e85f-451f-417e-bec8-6818a9d55e9d';
  $display->content['new-69e3e85f-451f-417e-bec8-6818a9d55e9d'] = $pane;
  $display->panels['row2r'][0] = 'new-69e3e85f-451f-417e-bec8-6818a9d55e9d';
  $pane = new stdClass();
  $pane->pid = 'new-f197c0f8-9b59-4ec1-bf23-f786743e3dfc';
  $pane->panel = 'row3l';
  $pane->type = 'views';
  $pane->subtype = 'ideas';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f197c0f8-9b59-4ec1-bf23-f786743e3dfc';
  $display->content['new-f197c0f8-9b59-4ec1-bf23-f786743e3dfc'] = $pane;
  $display->panels['row3l'][0] = 'new-f197c0f8-9b59-4ec1-bf23-f786743e3dfc';
  $pane = new stdClass();
  $pane->pid = 'new-496f055a-1ff6-4467-90b6-9051c8df4294';
  $pane->panel = 'row4l';
  $pane->type = 'block';
  $pane->subtype = 'boxes-sharing_box';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '496f055a-1ff6-4467-90b6-9051c8df4294';
  $display->content['new-496f055a-1ff6-4467-90b6-9051c8df4294'] = $pane;
  $display->panels['row4l'][0] = 'new-496f055a-1ff6-4467-90b6-9051c8df4294';
  $pane = new stdClass();
  $pane->pid = 'new-0c6ed337-8853-466a-bc23-46efbda2fa55';
  $pane->panel = 'row5l';
  $pane->type = 'views';
  $pane->subtype = 'discussions';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '4',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0c6ed337-8853-466a-bc23-46efbda2fa55';
  $display->content['new-0c6ed337-8853-466a-bc23-46efbda2fa55'] = $pane;
  $display->panels['row5l'][0] = 'new-0c6ed337-8853-466a-bc23-46efbda2fa55';
  $pane = new stdClass();
  $pane->pid = 'new-bd95a906-d65f-4d0b-8c27-405e45260ec3';
  $pane->panel = 'row6l';
  $pane->type = 'views';
  $pane->subtype = 'events';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '2',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'upcoming',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bd95a906-d65f-4d0b-8c27-405e45260ec3';
  $display->content['new-bd95a906-d65f-4d0b-8c27-405e45260ec3'] = $pane;
  $display->panels['row6l'][0] = 'new-bd95a906-d65f-4d0b-8c27-405e45260ec3';
  $pane = new stdClass();
  $pane->pid = 'new-fda05301-720f-4b8b-8b18-11a13dc803a7';
  $pane->panel = 'row7l';
  $pane->type = 'views';
  $pane->subtype = 'poll';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fda05301-720f-4b8b-8b18-11a13dc803a7';
  $display->content['new-fda05301-720f-4b8b-8b18-11a13dc803a7'] = $pane;
  $display->panels['row7l'][0] = 'new-fda05301-720f-4b8b-8b18-11a13dc803a7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-48d4db9b-3de3-4755-8344-04f2743486e7';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events';
  $page->task = 'page';
  $page->admin_title = 'Events';
  $page->admin_description = '';
  $page->path = 'events';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Events',
    'weight' => '3',
    'name' => 'main-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events__panel_context_730dd235-5ab2-4c59-9178-02af40c72a5b';
  $handler->task = 'page';
  $handler->subtask = 'events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'center' => NULL,
      'row1l' => NULL,
      'row1r' => NULL,
      'row2l' => NULL,
      'row2r' => NULL,
      'row3l' => NULL,
      'row3r' => NULL,
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
      'row6l' => NULL,
      'row6r' => NULL,
      'row7l' => NULL,
      'row7r' => NULL,
      'row8l' => NULL,
      'row8r' => NULL,
      'row9l' => NULL,
      'row9r' => NULL,
      'row10l' => NULL,
      'row10r' => NULL,
    ),
    'style' => 'bootstrap_region',
  );
  $display->cache = array();
  $display->title = 'Events';
  $display->uuid = '2dab623f-a44e-4c9b-9a4a-c89549beeadd';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-17e26d4d-59c1-4730-8d94-f374017fb425';
  $pane->panel = 'row1l';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h1 style="text-align: center;">Discover the next event near you</h1><p style="text-align: center;">Lorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris et neque metus. Sed aliquet ullamcorper sapien, vitae scelerisque nulla facilisis non. Cras lobortis eros non risus scelerisque tincidunt. Donec et felis sit amet nisl tincidunt tincidunt eget et ligula.</p>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '17e26d4d-59c1-4730-8d94-f374017fb425';
  $display->content['new-17e26d4d-59c1-4730-8d94-f374017fb425'] = $pane;
  $display->panels['row1l'][0] = 'new-17e26d4d-59c1-4730-8d94-f374017fb425';
  $pane = new stdClass();
  $pane->pid = 'new-a4080d0d-6874-4724-b2a0-e00c3d7b54fc';
  $pane->panel = 'row2l';
  $pane->type = 'views';
  $pane->subtype = 'events';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '2',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'upcoming',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a4080d0d-6874-4724-b2a0-e00c3d7b54fc';
  $display->content['new-a4080d0d-6874-4724-b2a0-e00c3d7b54fc'] = $pane;
  $display->panels['row2l'][0] = 'new-a4080d0d-6874-4724-b2a0-e00c3d7b54fc';
  $pane = new stdClass();
  $pane->pid = 'new-0d67d5e5-4968-4833-8186-05d2e69f57d2';
  $pane->panel = 'row3l';
  $pane->type = 'views';
  $pane->subtype = 'events';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0d67d5e5-4968-4833-8186-05d2e69f57d2';
  $display->content['new-0d67d5e5-4968-4833-8186-05d2e69f57d2'] = $pane;
  $display->panels['row3l'][0] = 'new-0d67d5e5-4968-4833-8186-05d2e69f57d2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ideas';
  $page->task = 'page';
  $page->admin_title = 'Ideas';
  $page->admin_description = '';
  $page->path = 'ideas';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Ideas',
    'name' => 'main-menu',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ideas__panel_context_a922d911-c9e7-4027-ab07-6c18a8ad1a7b';
  $handler->task = 'page';
  $handler->subtask = 'ideas';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'row1l' => NULL,
      'row1r' => NULL,
      'row2l' => NULL,
      'row2r' => NULL,
      'row3l' => NULL,
      'row3r' => NULL,
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
      'row6l' => NULL,
      'row6r' => NULL,
      'row7l' => NULL,
      'row7r' => NULL,
      'row8l' => NULL,
      'row8r' => NULL,
      'row9l' => NULL,
      'row9r' => NULL,
      'row10l' => NULL,
      'row10r' => NULL,
    ),
    'style' => 'bootstrap_region',
  );
  $display->cache = array();
  $display->title = 'Ideas';
  $display->uuid = '3f1f812e-7210-4adb-afdb-82591c7819dd';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c8bb9fe6-afd5-41b4-a675-0151150d8ab7';
  $pane->panel = 'row1l';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h1 style="text-align: center;">Explore new ideas and find answers<br>in the Ideas Market Place</h1><p style="text-align: center;">This is the place where everybody can share, discuss and support ideas</p>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c8bb9fe6-afd5-41b4-a675-0151150d8ab7';
  $display->content['new-c8bb9fe6-afd5-41b4-a675-0151150d8ab7'] = $pane;
  $display->panels['row1l'][0] = 'new-c8bb9fe6-afd5-41b4-a675-0151150d8ab7';
  $pane = new stdClass();
  $pane->pid = 'new-74ab1b6e-8e8e-422a-8c59-757601a78377';
  $pane->panel = 'row2l';
  $pane->type = 'views';
  $pane->subtype = 'ideas';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '74ab1b6e-8e8e-422a-8c59-757601a78377';
  $display->content['new-74ab1b6e-8e8e-422a-8c59-757601a78377'] = $pane;
  $display->panels['row2l'][0] = 'new-74ab1b6e-8e8e-422a-8c59-757601a78377';
  $pane = new stdClass();
  $pane->pid = 'new-6d275733-e780-48e3-bc00-affbee8f8da9';
  $pane->panel = 'row3l';
  $pane->type = 'views';
  $pane->subtype = 'ideas';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '6',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6d275733-e780-48e3-bc00-affbee8f8da9';
  $display->content['new-6d275733-e780-48e3-bc00-affbee8f8da9'] = $pane;
  $display->panels['row3l'][0] = 'new-6d275733-e780-48e3-bc00-affbee8f8da9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ideas'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'library';
  $page->task = 'page';
  $page->admin_title = 'Library';
  $page->admin_description = '';
  $page->path = 'library';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Library',
    'name' => 'main-menu',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_library__panel_context_3bd6496c-ff5e-4600-9100-04b67f17466c';
  $handler->task = 'page';
  $handler->subtask = 'library';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'top' => NULL,
      'left' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '4',
          'sm' => '4',
          'md' => '4',
          'lg' => '4',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'middle' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '8',
          'sm' => '8',
          'md' => '8',
          'lg' => '8',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'right' => NULL,
      'bottom' => NULL,
      'row1l' => NULL,
      'row1r' => NULL,
      'row2l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '3',
          'sm' => '3',
          'md' => '3',
          'lg' => '3',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row2r' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '9',
          'sm' => '9',
          'md' => '9',
          'lg' => '9',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row3l' => NULL,
      'row3r' => NULL,
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
      'row6l' => NULL,
      'row6r' => NULL,
      'row7l' => NULL,
      'row7r' => NULL,
      'row8l' => NULL,
      'row8r' => NULL,
      'row9l' => NULL,
      'row9r' => NULL,
      'row10l' => NULL,
      'row10r' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'style' => 'bootstrap_region',
    'row2l' => array(
      'style' => 'bootstrap_region',
    ),
    'row2r' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Library';
  $display->uuid = 'e03c4c38-3270-4c25-8cde-4cab1091955e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-74abb4b8-0814-435b-9df6-4ae7a7a64d43';
  $pane->panel = 'row1l';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Intro',
    'title' => '',
    'body' => '<h1 style="text-align: center;">Explore the library</h1><p style="text-align: center;"><span>Navigate through evidences, scientific papers or case studies that support ideas</span></p>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '74abb4b8-0814-435b-9df6-4ae7a7a64d43';
  $display->content['new-74abb4b8-0814-435b-9df6-4ae7a7a64d43'] = $pane;
  $display->panels['row1l'][0] = 'new-74abb4b8-0814-435b-9df6-4ae7a7a64d43';
  $pane = new stdClass();
  $pane->pid = 'new-4614b9f9-251e-4769-b8a6-73350b1bd3fb';
  $pane->panel = 'row2l';
  $pane->type = 'views';
  $pane->subtype = 'library';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'attachment_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4614b9f9-251e-4769-b8a6-73350b1bd3fb';
  $display->content['new-4614b9f9-251e-4769-b8a6-73350b1bd3fb'] = $pane;
  $display->panels['row2l'][0] = 'new-4614b9f9-251e-4769-b8a6-73350b1bd3fb';
  $pane = new stdClass();
  $pane->pid = 'new-2861768b-1eb5-45c3-bdb0-0b732bd9726d';
  $pane->panel = 'row2r';
  $pane->type = 'views_panes';
  $pane->subtype = 'library_files-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2861768b-1eb5-45c3-bdb0-0b732bd9726d';
  $display->content['new-2861768b-1eb5-45c3-bdb0-0b732bd9726d'] = $pane;
  $display->panels['row2r'][0] = 'new-2861768b-1eb5-45c3-bdb0-0b732bd9726d';
  $pane = new stdClass();
  $pane->pid = 'new-f1142d9b-5be4-44ee-8970-0bb33ea67916';
  $pane->panel = 'row2r';
  $pane->type = 'views_panes';
  $pane->subtype = 'library-panel_pane_1';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '%1',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f1142d9b-5be4-44ee-8970-0bb33ea67916';
  $display->content['new-f1142d9b-5be4-44ee-8970-0bb33ea67916'] = $pane;
  $display->panels['row2r'][1] = 'new-f1142d9b-5be4-44ee-8970-0bb33ea67916';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f1142d9b-5be4-44ee-8970-0bb33ea67916';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['library'] = $page;

  return $pages;

}
