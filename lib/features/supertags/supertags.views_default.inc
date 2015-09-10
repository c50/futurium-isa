<?php
/**
 * @file
 * supertags.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function supertags_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'flavor_list';
  $view->description = '';
  $view->tag = 'Flavors';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Flavor: List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'flavour-box flavour-[field_class]';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = 'flavour-boxes';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = '[name]';
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['field_flavor_image']['id'] = 'field_flavor_image';
  $handler->display->display_options['fields']['field_flavor_image']['table'] = 'field_data_field_flavor_image';
  $handler->display->display_options['fields']['field_flavor_image']['field'] = 'field_flavor_image';
  $handler->display->display_options['fields']['field_flavor_image']['label'] = '';
  $handler->display->display_options['fields']['field_flavor_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_flavor_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_flavor_image']['alter']['path'] = '[name]';
  $handler->display->display_options['fields']['field_flavor_image']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_flavor_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_flavor_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_flavor_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Class */
  $handler->display->display_options['fields']['field_class']['id'] = 'field_class';
  $handler->display->display_options['fields']['field_class']['table'] = 'field_data_field_class';
  $handler->display->display_options['fields']['field_class']['field'] = 'field_class';
  $handler->display->display_options['fields']['field_class']['label'] = '';
  $handler->display->display_options['fields']['field_class']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_class']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_data_field_path';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['text'] = '<h2>[name]</h2>
<div>
  [description]
</div>
';
  $handler->display->display_options['fields']['description']['alter']['path'] = '[field_path]';
  $handler->display->display_options['fields']['description']['alter']['link_class'] = 'flavour-link-[field_class]';
  $handler->display->display_options['fields']['description']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['description']['element_type'] = '0';
  $handler->display->display_options['fields']['description']['element_label_type'] = '0';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['description']['element_wrapper_class'] = 'flavour-box flavour-[field_class]';
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h2>[name]</h2>
<div>
  [description]
</div>
';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'flavour-link-[field_class]';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'flavour-[field_class]';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'flavors' => 'flavors',
  );
  /* Filter criterion: Taxonomy term: Active (field_flavor_active) */
  $handler->display->display_options['filters']['field_flavor_active_value']['id'] = 'field_flavor_active_value';
  $handler->display->display_options['filters']['field_flavor_active_value']['table'] = 'field_data_field_flavor_active';
  $handler->display->display_options['filters']['field_flavor_active_value']['field'] = 'field_flavor_active_value';
  $handler->display->display_options['filters']['field_flavor_active_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['flavor_list'] = $view;

  $view = new view();
  $view->name = 'flavor_misc_blocks';
  $view->description = '';
  $view->tag = 'Flavors';
  $view->base_table = 'node';
  $view->human_name = 'Flavors: Misc Blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Blog';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/!1/blogs">More blog posts</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
    'value_type' => 'percent',
    'tag' => 'vote',
    'function' => 'average',
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'flavors' => 'flavors',
    'super_tags' => 0,
    'classification' => 0,
    'media_tags' => 0,
    'supertag_egov' => 0,
    'tags' => 0,
  );
  /* Relationship: Field: Default flavour (field_default_flavour) */
  $handler->display->display_options['relationships']['field_default_flavour_tid']['id'] = 'field_default_flavour_tid';
  $handler->display->display_options['relationships']['field_default_flavour_tid']['table'] = 'field_data_field_default_flavour';
  $handler->display->display_options['relationships']['field_default_flavour_tid']['field'] = 'field_default_flavour_tid';
  $handler->display->display_options['relationships']['field_default_flavour_tid']['label'] = 'default_flavour';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'media_thumbnail_small';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Taxonomy term: Path */
  $handler->display->display_options['fields']['field_path_1']['id'] = 'field_path_1';
  $handler->display->display_options['fields']['field_path_1']['table'] = 'field_data_field_path';
  $handler->display->display_options['fields']['field_path_1']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path_1']['relationship'] = 'field_default_flavour_tid';
  $handler->display->display_options['fields']['field_path_1']['label'] = '';
  $handler->display->display_options['fields']['field_path_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path_1']['type'] = 'supertags_views_title_link';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path][field_path_1]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Path (field_path) */
  $handler->display->display_options['arguments']['field_path_value']['id'] = 'field_path_value';
  $handler->display->display_options['arguments']['field_path_value']['table'] = 'field_data_field_path';
  $handler->display->display_options['arguments']['field_path_value']['field'] = 'field_path_value';
  $handler->display->display_options['arguments']['field_path_value']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['field_path_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_path_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_path_value']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_path_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_path_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_path_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_path_value']['limit'] = '0';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog_post' => 'blog_post',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Blog Sidebar */
  $handler = $view->new_display('block', 'Blog Sidebar', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-blog_d4eu-block_1';
  $handler->display->display_options['block_description'] = 'Flavor Blog Sidebar (3 items)';
  $export['flavor_misc_blocks'] = $view;

  $view = new view();
  $view->name = 'flavors_people';
  $view->description = 'People Listings.';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Flavor: People Listings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'People';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer users';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'picture' => 'picture',
    'field_firstname' => 'field_firstname',
    'view_user' => 'field_firstname',
    'created' => 'created',
    'access' => 'access',
    'realname' => 'realname',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_firstname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_user' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'access' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'realname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Description';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Browse the people directory to access user profiles </h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['image_style'] = 'media_thumbnail';
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Name';
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Member for';
  $handler->display->display_options['fields']['created']['element_class'] = 'hidden-xs';
  $handler->display->display_options['fields']['created']['element_label_class'] = 'hidden-xs';
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time span';
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['element_class'] = 'hidden-xs';
  $handler->display->display_options['fields']['access']['element_label_class'] = 'hidden-xs';
  $handler->display->display_options['fields']['access']['date_format'] = 'time ago';
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['uid']['group'] = 0;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  /* Filter criterion: User: First name (field_firstname) */
  $handler->display->display_options['filters']['field_firstname_value']['id'] = 'field_firstname_value';
  $handler->display->display_options['filters']['field_firstname_value']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['filters']['field_firstname_value']['field'] = 'field_firstname_value';
  $handler->display->display_options['filters']['field_firstname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_firstname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_firstname_value']['expose']['operator_id'] = 'field_firstname_value_op';
  $handler->display->display_options['filters']['field_firstname_value']['expose']['label'] = 'First Name';
  $handler->display->display_options['filters']['field_firstname_value']['expose']['operator'] = 'field_firstname_value_op';
  $handler->display->display_options['filters']['field_firstname_value']['expose']['identifier'] = 'field_firstname_value';
  $handler->display->display_options['filters']['field_firstname_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: User: Last name (field_lastname) */
  $handler->display->display_options['filters']['field_lastname_value']['id'] = 'field_lastname_value';
  $handler->display->display_options['filters']['field_lastname_value']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['filters']['field_lastname_value']['field'] = 'field_lastname_value';
  $handler->display->display_options['filters']['field_lastname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_lastname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lastname_value']['expose']['operator_id'] = 'field_lastname_value_op';
  $handler->display->display_options['filters']['field_lastname_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_lastname_value']['expose']['operator'] = 'field_lastname_value_op';
  $handler->display->display_options['filters']['field_lastname_value']['expose']['identifier'] = 'field_lastname_value';
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['flavors_people'] = $view;

  $view = new view();
  $view->name = 'flavors';
  $view->description = '';
  $view->tag = 'Flavors';
  $view->base_table = 'node';
  $view->human_name = 'Flavors: Listings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Flavor';
  $handler->display->display_options['css_class'] = 'view-blog';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'tags';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'tags' => 'tags',
    'flavors' => 0,
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid_1']['id'] = 'term_node_tid_1';
  $handler->display->display_options['relationships']['term_node_tid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_1']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid_1']['label'] = 'flavor';
  $handler->display->display_options['relationships']['term_node_tid_1']['vocabularies'] = array(
    'flavors' => 'flavors',
    'tags' => 0,
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Field: Default flavour (field_default_flavour) */
  $handler->display->display_options['relationships']['field_default_flavour_tid']['id'] = 'field_default_flavour_tid';
  $handler->display->display_options['relationships']['field_default_flavour_tid']['table'] = 'field_data_field_default_flavour';
  $handler->display->display_options['relationships']['field_default_flavour_tid']['field'] = 'field_default_flavour_tid';
  $handler->display->display_options['relationships']['field_default_flavour_tid']['label'] = 'default_flavour';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = '[field_flavor]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Ideas and experience */
  $handler->display->display_options['fields']['field_ideas']['id'] = 'field_ideas';
  $handler->display->display_options['fields']['field_ideas']['table'] = 'field_data_field_ideas';
  $handler->display->display_options['fields']['field_ideas']['field'] = 'field_ideas';
  $handler->display->display_options['fields']['field_ideas']['label'] = '';
  $handler->display->display_options['fields']['field_ideas']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ideas']['alter']['text'] = '[field_ideas] <a href="[path]" class="moreLink">Read more</a> ';
  $handler->display->display_options['fields']['field_ideas']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ideas']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['field_ideas']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ideas']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_ideas']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Reporter';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last update';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['type'] = 'supertags_taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Date & time */
  $handler->display->display_options['fields']['field_date_time']['id'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['fields']['field_date_time']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['arguments']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid_1']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_1']['relationship'] = 'term_node_tid_1';
  $handler->display->display_options['arguments']['tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['vocabularies'] = array(
    'flavors' => 'flavors',
  );
  $handler->display->display_options['arguments']['tid_1']['validate_options']['type'] = 'convert';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'tags' => 'tags',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video_d4eu' => 'video_d4eu',
  );

  /* Display: Ideas */
  $handler = $view->new_display('block', 'Ideas', 'page_ideas');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ideas';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-ideas';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Why do we need a digital single market? Have you had a bad experience in the EU\'s digital world? Any ideas on how we could fix this problem? <a href="add/ideas">Tell us how today\'s digital market in Europe makes your life more difficult or easier</a>.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_data_field_path';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['relationship'] = 'field_default_flavour_tid';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['type'] = 'supertags_views_title_link';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '[path][field_path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = '[field_flavor]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Ideas and experience */
  $handler->display->display_options['fields']['field_ideas']['id'] = 'field_ideas';
  $handler->display->display_options['fields']['field_ideas']['table'] = 'field_data_field_ideas';
  $handler->display->display_options['fields']['field_ideas']['field'] = 'field_ideas';
  $handler->display->display_options['fields']['field_ideas']['label'] = '';
  $handler->display->display_options['fields']['field_ideas']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ideas']['alter']['text'] = '[field_ideas] <a href="[path]" class="moreLink">Read more</a> ';
  $handler->display->display_options['fields']['field_ideas']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ideas']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['field_ideas']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ideas']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_ideas']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Reporter';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last update';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tags']['alter']['path'] = '%1/ideas/%2';
  $handler->display->display_options['fields']['field_tags']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_tags']['type'] = 'supertags_taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['arguments']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid_1']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_1']['relationship'] = 'term_node_tid_1';
  $handler->display->display_options['arguments']['tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['vocabularies'] = array(
    'flavors' => 'flavors',
  );
  $handler->display->display_options['arguments']['tid_1']['validate_options']['type'] = 'convert';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['breadcrumb'] = '%2';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'tags' => 'tags',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ideas' => 'ideas',
  );

  /* Display: Evidence */
  $handler = $view->new_display('block', 'Evidence', 'page_document');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Evidence';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-evidence';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p><a href="add/document">Upload materials or documents</a> that support your views and ideas, in any EU language.</p><p>In order to provide a single place for all the evidence which the Commission is quoting in its public documents on the Digital Single Market, this section will host not only evidence submitted by contributors to the platform, but also sources referred to in the DSM documents.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_data_field_path';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['relationship'] = 'field_default_flavour_tid';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['alter']['text'] = '?flavour=[field_path]';
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['type'] = 'supertags_views_title_link';
  $handler->display->display_options['fields']['field_path']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '[path][field_path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Leading picture */
  $handler->display->display_options['fields']['field_leading_picture_d4eu']['id'] = 'field_leading_picture_d4eu';
  $handler->display->display_options['fields']['field_leading_picture_d4eu']['table'] = 'field_data_field_leading_picture_d4eu';
  $handler->display->display_options['fields']['field_leading_picture_d4eu']['field'] = 'field_leading_picture_d4eu';
  $handler->display->display_options['fields']['field_leading_picture_d4eu']['label'] = '';
  $handler->display->display_options['fields']['field_leading_picture_d4eu']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_leading_picture_d4eu']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_leading_picture_d4eu']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_leading_picture_d4eu']['settings'] = array(
    'image_style' => 'media_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body] <a href="[path]" class="moreLink">Read more</a> ';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_authors_d4eu']['id'] = 'field_authors_d4eu';
  $handler->display->display_options['fields']['field_authors_d4eu']['table'] = 'field_data_field_authors_d4eu';
  $handler->display->display_options['fields']['field_authors_d4eu']['field'] = 'field_authors_d4eu';
  /* Field: Content: Year of publication */
  $handler->display->display_options['fields']['field_year_of_publication_d4eu']['id'] = 'field_year_of_publication_d4eu';
  $handler->display->display_options['fields']['field_year_of_publication_d4eu']['table'] = 'field_data_field_year_of_publication_d4eu';
  $handler->display->display_options['fields']['field_year_of_publication_d4eu']['field'] = 'field_year_of_publication_d4eu';
  $handler->display->display_options['fields']['field_year_of_publication_d4eu']['settings'] = array(
    'format_type' => 'only_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Reporter';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last update';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tags']['type'] = 'supertags_taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['arguments']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid_1']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_1']['relationship'] = 'term_node_tid_1';
  $handler->display->display_options['arguments']['tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['vocabularies'] = array(
    'flavors' => 'flavors',
  );
  $handler->display->display_options['arguments']['tid_1']['validate_options']['type'] = 'convert';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['breadcrumb'] = '%2';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'tags' => 'tags',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );

  /* Display: Videos */
  $handler = $view->new_display('block', 'Videos', 'page_video_d4eu');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Videos';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-videos-d4eu';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Upload your video or audio, that can be in any EU language.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_data_field_path';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['relationship'] = 'field_default_flavour_tid';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['type'] = 'supertags_views_title_link';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '[path][field_path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Leading picture */
  $handler->display->display_options['fields']['field_leading_picture_d4eu']['id'] = 'field_leading_picture_d4eu';
  $handler->display->display_options['fields']['field_leading_picture_d4eu']['table'] = 'field_data_field_leading_picture_d4eu';
  $handler->display->display_options['fields']['field_leading_picture_d4eu']['field'] = 'field_leading_picture_d4eu';
  $handler->display->display_options['fields']['field_leading_picture_d4eu']['label'] = '';
  $handler->display->display_options['fields']['field_leading_picture_d4eu']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_leading_picture_d4eu']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_leading_picture_d4eu']['settings'] = array(
    'image_style' => 'preview',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = '[field_flavor]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body] <a href="[path]" class="moreLink">Read more</a> ';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Reporter';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last update';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['type'] = 'supertags_taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['arguments']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid_1']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_1']['relationship'] = 'term_node_tid_1';
  $handler->display->display_options['arguments']['tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['vocabularies'] = array(
    'flavors' => 'flavors',
  );
  $handler->display->display_options['arguments']['tid_1']['validate_options']['type'] = 'convert';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['breadcrumb'] = '%2';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'tags' => 'tags',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video_d4eu' => 'video_d4eu',
  );

  /* Display: Blogs */
  $handler = $view->new_display('block', 'Blogs', 'page_blog_post');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Blogs';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-blog';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Post from the editorial team</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'tags';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'tags' => 'tags',
    'flavors' => 0,
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid_1']['id'] = 'term_node_tid_1';
  $handler->display->display_options['relationships']['term_node_tid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_1']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid_1']['label'] = 'flavor';
  $handler->display->display_options['relationships']['term_node_tid_1']['vocabularies'] = array(
    'flavors' => 'flavors',
    'tags' => 0,
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
    'value_type' => 'percent',
    'tag' => 'vote',
    'function' => 'average',
  );
  /* Relationship: Field: Default flavour (field_default_flavour) */
  $handler->display->display_options['relationships']['field_default_flavour_tid']['id'] = 'field_default_flavour_tid';
  $handler->display->display_options['relationships']['field_default_flavour_tid']['table'] = 'field_data_field_default_flavour';
  $handler->display->display_options['relationships']['field_default_flavour_tid']['field'] = 'field_default_flavour_tid';
  $handler->display->display_options['relationships']['field_default_flavour_tid']['label'] = 'default_flavour';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_data_field_path';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['relationship'] = 'field_default_flavour_tid';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['type'] = 'supertags_views_title_link';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['label'] = '';
  $handler->display->display_options['fields']['path_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path_1']['alter']['text'] = '[path_1][field_path]';
  $handler->display->display_options['fields']['path_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path_1]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = '[field_flavor]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value']['precision'] = '0';
  $handler->display->display_options['fields']['value']['appearance'] = 'rate_views_widget_compact';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'thumbnail';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '900';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '1',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 0,
    ),
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<div class="media">
    <div class="pull-right text-center">
      [picture]
      <div class="text-muted">
        [name]<br />
        <span class="label label-default">[created]</span>
      </div>
    </div>
    <div class="media-body">
      <div class="pull-right">[value]</div>
      <h3 class="media-heading"><a href="[path_1]">[title]</a></h3>
      <div>
        [body]
        <div><a href="[path_1]">Read more</a></div>
      </div>
    </div>
  </div>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = 'Associated tags';
  $handler->display->display_options['fields']['field_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tags']['type'] = 'supertags_taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['arguments']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid_1']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_1']['relationship'] = 'term_node_tid_1';
  $handler->display->display_options['arguments']['tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['vocabularies'] = array(
    'flavors' => 'flavors',
  );
  $handler->display->display_options['arguments']['tid_1']['validate_options']['type'] = 'convert';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['breadcrumb'] = '%2';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'tags' => 'tags',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog_post' => 'blog_post',
  );

  /* Display: Polls */
  $handler = $view->new_display('block', 'Polls', 'page_poll');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Polls';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-polls';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Create your own poll on the DSM (in any EU language) or see what other people voted for.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_data_field_path';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['relationship'] = 'field_default_flavour_tid';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['type'] = 'supertags_views_title_link';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '[path][field_path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Leading picture */
  $handler->display->display_options['fields']['field_leading_picture_d4eu']['id'] = 'field_leading_picture_d4eu';
  $handler->display->display_options['fields']['field_leading_picture_d4eu']['table'] = 'field_data_field_leading_picture_d4eu';
  $handler->display->display_options['fields']['field_leading_picture_d4eu']['field'] = 'field_leading_picture_d4eu';
  $handler->display->display_options['fields']['field_leading_picture_d4eu']['label'] = '';
  $handler->display->display_options['fields']['field_leading_picture_d4eu']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_leading_picture_d4eu']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_leading_picture_d4eu']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_leading_picture_d4eu']['settings'] = array(
    'image_style' => 'preview',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = '[field_flavor]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Poll: Active */
  $handler->display->display_options['fields']['active']['id'] = 'active';
  $handler->display->display_options['fields']['active']['table'] = 'poll';
  $handler->display->display_options['fields']['active']['field'] = 'active';
  $handler->display->display_options['fields']['active']['not'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Posted by';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last update';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tags']['type'] = 'supertags_taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['arguments']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid_1']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_1']['relationship'] = 'term_node_tid_1';
  $handler->display->display_options['arguments']['tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['vocabularies'] = array(
    'flavors' => 'flavors',
  );
  $handler->display->display_options['arguments']['tid_1']['validate_options']['type'] = 'convert';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['breadcrumb'] = '%2';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'tags' => 'tags',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'poll' => 'poll',
  );

  /* Display: Events */
  $handler = $view->new_display('block', 'Events', 'page_event_d4eu');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'fullcalendar';
  $handler->display->display_options['style_options']['defaultView'] = 'basicWeek';
  $handler->display->display_options['style_options']['firstDay'] = '1';
  $handler->display->display_options['style_options']['right'] = 'month agendaWeek agendaDay ';
  $handler->display->display_options['style_options']['advanced'] = TRUE;
  $handler->display->display_options['style_options']['titleformatWeek'] = 'd[ yyyy] MMM { - d [ MMM]  yyyy}';
  $handler->display->display_options['style_options']['columnformatWeek'] = 'ddd d/M';
  $handler->display->display_options['style_options']['titleformatDay'] = 'dddd, d MMM, yyyy';
  $handler->display->display_options['style_options']['columnformatDay'] = 'dddd d/M';
  $handler->display->display_options['style_options']['sameWindow'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Consult planned events or add an event in any EU language.</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = '[field_flavor]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Date & time */
  $handler->display->display_options['fields']['field_date_time']['id'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['fields']['field_date_time']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event_d4eu' => 'event_d4eu',
  );
  $export['flavors'] = $view;

  $view = new view();
  $view->name = 'flavors_blocks';
  $view->description = '';
  $view->tag = 'Flavors';
  $view->base_table = 'node';
  $view->human_name = 'Flavors: Blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'user-block-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'flavors' => 'flavors',
    'super_tags' => 0,
    'classification' => 0,
    'media_tags' => 0,
    'supertag_egov' => 0,
    'tags' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Field: Block delta (field_block_delta) */
  $handler->display->display_options['sorts']['field_block_delta_value']['id'] = 'field_block_delta_value';
  $handler->display->display_options['sorts']['field_block_delta_value']['table'] = 'field_data_field_block_delta';
  $handler->display->display_options['sorts']['field_block_delta_value']['field'] = 'field_block_delta_value';
  /* Contextual filter: Taxonomy term: Path (field_path) */
  $handler->display->display_options['arguments']['field_path_value']['id'] = 'field_path_value';
  $handler->display->display_options['arguments']['field_path_value']['table'] = 'field_data_field_path';
  $handler->display->display_options['arguments']['field_path_value']['field'] = 'field_path_value';
  $handler->display->display_options['arguments']['field_path_value']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['field_path_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_path_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_path_value']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_path_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_path_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_path_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_path_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'block' => 'block',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['flavors_blocks'] = $view;

  $view = new view();
  $view->name = 'flavors_whats_new';
  $view->description = '';
  $view->tag = 'Flavors';
  $view->base_table = 'node';
  $view->human_name = 'Flavors: Whats new';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent activity';
  $handler->display->display_options['css_class'] = 'view-recent-activity';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'mini_teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: What is new */
  $handler = $view->new_display('block', 'What is new', 'block_whatnew');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'What\'s New';
  $handler->display->display_options['display_description'] = 'Block what\'s new';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'mini_teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'page' => 'page',
    'blog_post' => 'blog_post',
    'document' => 'document',
    'ideas' => 'ideas',
    'poll' => 'poll',
    'video_d4eu' => 'video_d4eu',
  );
  $handler->display->display_options['block_description'] = 'Flavor: What is New';

  /* Display: New content (Context) */
  $handler = $view->new_display('block', 'New content (Context)', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'What\'s New';
  $handler->display->display_options['display_description'] = 'Block what\'s new';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'mini_teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No entries yet! Click here to <a href="add">create one</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'flavors' => 'flavors',
    'super_tags' => 0,
    'classification' => 0,
    'media_tags' => 0,
    'supertag_egov' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Path (field_path) */
  $handler->display->display_options['arguments']['field_path_value']['id'] = 'field_path_value';
  $handler->display->display_options['arguments']['field_path_value']['table'] = 'field_data_field_path';
  $handler->display->display_options['arguments']['field_path_value']['field'] = 'field_path_value';
  $handler->display->display_options['arguments']['field_path_value']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['field_path_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_path_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_path_value']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_path_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_path_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_path_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_path_value']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_path_value']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'page' => 'page',
    'blog_post' => 'blog_post',
    'document' => 'document',
    'ideas' => 'ideas',
    'poll' => 'poll',
    'video_d4eu' => 'video_d4eu',
  );
  $handler->display->display_options['block_description'] = 'Flavor: What is New (Contextualized)';

  /* Display: New Events (Context) */
  $handler = $view->new_display('block', 'New Events (Context)', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['display_description'] = 'Block what\'s new';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'mini_teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event_d4eu' => 'event_d4eu',
  );
  $handler->display->display_options['block_description'] = 'Flavor: Events - What is New';
  $export['flavors_whats_new'] = $view;

  return $export;
}
