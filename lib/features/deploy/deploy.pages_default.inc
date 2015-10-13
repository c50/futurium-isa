<?php
/**
 * @file
 * deploy.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function deploy_default_page_manager_handlers() {
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
              'events' => 'events',
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
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'center' => NULL,
      'top' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
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
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7abc777f-cef6-43cf-ad18-be534f15b087';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-187e3f2c-a257-4459-953b-ed3da549df42';
    $pane->panel = 'bottom';
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
    $display->panels['bottom'][0] = 'new-187e3f2c-a257-4459-953b-ed3da549df42';
    $pane = new stdClass();
    $pane->pid = 'new-99396859-4ddf-41d8-a8ef-d0472fa507ea';
    $pane->panel = 'bottom';
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
    $display->panels['bottom'][1] = 'new-99396859-4ddf-41d8-a8ef-d0472fa507ea';
    $pane = new stdClass();
    $pane->pid = 'new-f20d4323-0182-4c8a-a150-5128a113e1d5';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
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
    $pane->uuid = 'f20d4323-0182-4c8a-a150-5128a113e1d5';
    $display->content['new-f20d4323-0182-4c8a-a150-5128a113e1d5'] = $pane;
    $display->panels['left'][0] = 'new-f20d4323-0182-4c8a-a150-5128a113e1d5';
    $pane = new stdClass();
    $pane->pid = 'new-d8a33c89-d231-461c-a7a6-dc1a5eb3a858';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd8a33c89-d231-461c-a7a6-dc1a5eb3a858';
    $display->content['new-d8a33c89-d231-461c-a7a6-dc1a5eb3a858'] = $pane;
    $display->panels['left'][1] = 'new-d8a33c89-d231-461c-a7a6-dc1a5eb3a858';
    $pane = new stdClass();
    $pane->pid = 'new-7f4f695b-f9c5-4f97-b1aa-11fcd7382b7d';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Date & Place',
      'body' => '&nbsp;',
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
    $pane->uuid = '7f4f695b-f9c5-4f97-b1aa-11fcd7382b7d';
    $display->content['new-7f4f695b-f9c5-4f97-b1aa-11fcd7382b7d'] = $pane;
    $display->panels['right'][0] = 'new-7f4f695b-f9c5-4f97-b1aa-11fcd7382b7d';
    $pane = new stdClass();
    $pane->pid = 'new-b0ee2b19-8b3b-4b94-9a10-5a1f755f18f3';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date_time';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'show_remaining_days' => 0,
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b0ee2b19-8b3b-4b94-9a10-5a1f755f18f3';
    $display->content['new-b0ee2b19-8b3b-4b94-9a10-5a1f755f18f3'] = $pane;
    $display->panels['right'][1] = 'new-b0ee2b19-8b3b-4b94-9a10-5a1f755f18f3';
    $pane = new stdClass();
    $pane->pid = 'new-b5276a7d-8b1b-43e9-9ed5-8129e719050c';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
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
    $pane->uuid = 'b5276a7d-8b1b-43e9-9ed5-8129e719050c';
    $display->content['new-b5276a7d-8b1b-43e9-9ed5-8129e719050c'] = $pane;
    $display->panels['right'][2] = 'new-b5276a7d-8b1b-43e9-9ed5-8129e719050c';
    $pane = new stdClass();
    $pane->pid = 'new-4cbe128a-4a49-4b54-9e5a-ebff5489ed6f';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_coordinates';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'geofield_map_map',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'geofield_map_width' => '60%',
        'geofield_map_height' => '200px',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4cbe128a-4a49-4b54-9e5a-ebff5489ed6f';
    $display->content['new-4cbe128a-4a49-4b54-9e5a-ebff5489ed6f'] = $pane;
    $display->panels['right'][3] = 'new-4cbe128a-4a49-4b54-9e5a-ebff5489ed6f';
    $pane = new stdClass();
    $pane->pid = 'new-3b68a69d-2257-457d-a284-30209cfbd33a';
    $pane->panel = 'right';
    $pane->type = 'flag_link';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'flag_name' => 'attending',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '3b68a69d-2257-457d-a284-30209cfbd33a';
    $display->content['new-3b68a69d-2257-457d-a284-30209cfbd33a'] = $pane;
    $display->panels['right'][4] = 'new-3b68a69d-2257-457d-a284-30209cfbd33a';
    $pane = new stdClass();
    $pane->pid = 'new-cc650d5c-be3e-4405-925c-82b28a48bc25';
    $pane->panel = 'top';
    $pane->type = 'panels_mini';
    $pane->subtype = 'node_author_and_social_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
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
    $pane->uuid = 'cc650d5c-be3e-4405-925c-82b28a48bc25';
    $display->content['new-cc650d5c-be3e-4405-925c-82b28a48bc25'] = $pane;
    $display->panels['top'][0] = 'new-cc650d5c-be3e-4405-925c-82b28a48bc25';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__event'] = $handler;

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
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'center' => NULL,
      'top' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
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
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7abc777f-cef6-43cf-ad18-be534f15b087';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-187e3f2c-a257-4459-953b-ed3da549df42';
    $pane->panel = 'bottom';
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
    $display->panels['bottom'][0] = 'new-187e3f2c-a257-4459-953b-ed3da549df42';
    $pane = new stdClass();
    $pane->pid = 'new-99396859-4ddf-41d8-a8ef-d0472fa507ea';
    $pane->panel = 'bottom';
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
    $display->panels['bottom'][1] = 'new-99396859-4ddf-41d8-a8ef-d0472fa507ea';
    $pane = new stdClass();
    $pane->pid = 'new-064e630b-0850-4bdd-a66f-8493133ca695';
    $pane->panel = 'left';
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
    $display->panels['left'][0] = 'new-064e630b-0850-4bdd-a66f-8493133ca695';
    $pane = new stdClass();
    $pane->pid = 'new-d8a33c89-d231-461c-a7a6-dc1a5eb3a858';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd8a33c89-d231-461c-a7a6-dc1a5eb3a858';
    $display->content['new-d8a33c89-d231-461c-a7a6-dc1a5eb3a858'] = $pane;
    $display->panels['left'][1] = 'new-d8a33c89-d231-461c-a7a6-dc1a5eb3a858';
    $pane = new stdClass();
    $pane->pid = 'new-372c2bb4-f707-4f27-afd8-9d5ac53b5805';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Do you like it?',
      'title' => 'Do you like it?',
      'body' => 'If you like this idea, you have a way to express your opinion.',
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
    $display->panels['right'][0] = 'new-372c2bb4-f707-4f27-afd8-9d5ac53b5805';
    $pane = new stdClass();
    $pane->pid = 'new-3b68a69d-2257-457d-a284-30209cfbd33a';
    $pane->panel = 'right';
    $pane->type = 'flag_link';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'flag_name' => 'like',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3b68a69d-2257-457d-a284-30209cfbd33a';
    $display->content['new-3b68a69d-2257-457d-a284-30209cfbd33a'] = $pane;
    $display->panels['right'][1] = 'new-3b68a69d-2257-457d-a284-30209cfbd33a';
    $pane = new stdClass();
    $pane->pid = 'new-4c36ca61-07a8-43cf-8674-0f35f1cc1ab2';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Related Ideas & Visions',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4c36ca61-07a8-43cf-8674-0f35f1cc1ab2';
    $display->content['new-4c36ca61-07a8-43cf-8674-0f35f1cc1ab2'] = $pane;
    $display->panels['right'][2] = 'new-4c36ca61-07a8-43cf-8674-0f35f1cc1ab2';
    $pane = new stdClass();
    $pane->pid = 'new-cc650d5c-be3e-4405-925c-82b28a48bc25';
    $pane->panel = 'top';
    $pane->type = 'panels_mini';
    $pane->subtype = 'node_author_and_social_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
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
    $pane->uuid = 'cc650d5c-be3e-4405-925c-82b28a48bc25';
    $display->content['new-cc650d5c-be3e-4405-925c-82b28a48bc25'] = $pane;
    $display->panels['top'][0] = 'new-cc650d5c-be3e-4405-925c-82b28a48bc25';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__idea'] = $handler;

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
  $display->layout = 'bootstrap_threecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
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
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '69e2cbf7-423b-4507-86a4-70ad4d326738';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5599a5dd-9bee-4aa5-8b21-94e6f4a0defb';
    $pane->panel = 'left';
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
    $display->panels['left'][0] = 'new-5599a5dd-9bee-4aa5-8b21-94e6f4a0defb';
    $pane = new stdClass();
    $pane->pid = 'new-37c465e7-891c-406d-8394-011fb29ff658';
    $pane->panel = 'middle';
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
    $display->panels['middle'][0] = 'new-37c465e7-891c-406d-8394-011fb29ff658';
    $pane = new stdClass();
    $pane->pid = 'new-23dced38-5182-43d9-96d2-0df5dee6ba9f';
    $pane->panel = 'right';
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
    $display->panels['right'][0] = 'new-23dced38-5182-43d9-96d2-0df5dee6ba9f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__panel_context_6967673a-0888-4c18-a3f1-3e10c148e311'] = $handler;

  return $export;
}
