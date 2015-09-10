<?php
/**
 * @file
 * Contains custom theme functionality.
 */

/**
 * Implements theme_menu_tree__MENU_NAME().
 */
function d4eu_menu_tree__main_menu($variables) {
  if (strpos($variables['tree'], 'main_menu_dropdown') && !strpos($variables['tree'], '<ul') && !theme_get_setting('disable_dropdown_menu')) {
    return '<ul class="dropdown-menu">' . $variables['tree'] . '</ul>';
  }
  else {
    $variables['tree'] = str_replace('<ul class="nav nav-pills">', '<ul class="dropdown-menu">', $variables['tree']);
    return '<ul class="nav nav-pills">' . $variables['tree'] . '</ul>';
  }
}

/**
 * Builds main menu.
 */
function d4eu_menu_link__main_menu(array $variables) {

  // Remove title attribute for links with the same Title.
  if (isset($variables['element']['#localized_options']['attributes']['title']) && $variables['element']['#title'] == $variables['element']['#localized_options']['attributes']['title']) {
    unset($variables['element']['#localized_options']['attributes']['title']);
  }

  // Set Home title for the link.
  if (isset($variables['element']['#href']) && $variables['element']['#href'] == '<front>') {
    $variables['element']['#localized_options']['attributes']['title'] = t('Home');
    $variables['element']['#title'] .= '<span class="element-invisible">' . t('Home') . '</span>';
  }
  $variables['element']['#localized_options']['html'] = TRUE;
  return theme_menu_link($variables);
}

/**
 * Implements hook_preprocess_block().
 */
function d4eu_preprocess_block(&$variables) {

  // Constructs a block ID based on module, region and delta.
  $block_id = $variables['elements']['#block']->region . '-' . $variables['elements']['#block']->module . '-' . $variables['elements']['#block']->delta;

  // Adds specific class to each block.
  $variables['classes_array'][] = $variables['elements']['#block']->module . '-' . $variables['elements']['#block']->delta;

  switch ($block_id) {

    case 'header_top-system-user-menu':

      global $base_url;

      // Constructs the name of the user for display in top toolbar.
      if ($variables['user']->uid) {
        $name = format_username($variables['user']);
        $options = array();
        $options['attributes']['class'][] = 'user-link';
        $variables['user_welcome'] = t('Welcome <strong class="user-link">!name</strong>',
            array(
              '!name' => l($name, 'user/' . $variables['user']->uid, $options),
            )
            );
      }
      $menu = menu_navigation_links('user-menu');

      $items = '';

      // Manage redirection after login.
      $status = drupal_get_http_header('status');
      if (strpos($status, '404') !== FALSE) {
        $dest = 'home';
      }
      elseif (strpos($_GET['q'], 'user/register') !== FALSE) {
        $dest = 'home';
      }
      elseif (strpos($_GET['q'], 'user/login') !== FALSE) {
        $dest = 'home';
      }
      else {
        $dest = drupal_get_path_alias();
      }

      foreach ($menu as $item_id) {
        // Add redirection for login, logout and register.
        if ($item_id['href'] == 'user/login' || $item_id['href'] == 'user/register') {
          $attributes['query']['destination'] = $dest;
        }
        if ($item_id['href'] == 'user/logout') {
          $attributes['query']['destination'] = $base_url;
        }

        $items .= '<li>' . l($item_id['title'], $item_id['href'], array()) . '</li>';
      }

      $variables['user_menu'] = $items;

      break;
  }

  // Checks if there is an exposed block.
  $variables['exposed_block'] = FALSE;
  if (isset($variables['elements']['#views_contextual_links_info']['views_ui']['view']->display)) {
    foreach ($variables['elements']['#views_contextual_links_info']['views_ui']['view']->display as $display) {
      if (isset($display->display_options['exposed_block']) && $display->display_options['exposed_block']) {
        $variables['exposed_block'] = TRUE;
      }
    }
  }
}

/**
 * Implements hook_menu_block_view_alter().
 */
function d4eu_block_view_alter(&$data, $block) {
  // Remove from the list items.
  if (isset($data['content'])) {
    if (!is_array($data['content'])) {
      preg_match_all('/<a(.*?)>/s', $data['content'], $matches);

      if (isset($matches[0])) {
        foreach ($matches[0] as $link) {
          if (strpos($link, ' class="') !== FALSE) {
            $new_link = str_replace(' class="list-group-item', ' class="', $link);
            $data['content'] = str_replace($link, $new_link, $data['content']);
          }
        }
      }
    }
  }
}

/**
 * Implements theme_preprocess_html().
 *
 * Overrides ec_resp title tag.
 */
function d4eu_preprocess_html(&$variables) {
  if (drupal_get_title()) {
    $head_title = array(
      'title' => strip_tags(drupal_get_title()),
      'name' => check_plain(variable_get('site_name', 'Drupal')),
    );
  }
  else {
    $head_title = array('name' => check_plain(variable_get('site_name', 'Drupal')));
  }

  $head_title['org'] = t('European Commission');
  $variables['head_title_array'] = $head_title;
  $variables['head_title'] = implode(' | ', $head_title);
}

/**
 * Implements hook_html_head_alter().
 *
 * Removes the obsolete content-type.
 */
function d4eu_html_head_alter(&$head_elements) {
  foreach ($head_elements as $key => $element) {
    if (isset($element['#attributes']['http-equiv']) == 'Content-Language') {
      unset($head_elements[$key]);
    }
  }
}

/**
 * Implements hook_preprocess_node().
 *
 * Changes on submitted label.
 */
function d4eu_preprocess_node(&$vars) {
  $account = user_load($vars['node']->uid);
  $vars['submitted']  = '<div class="authoring-info">';
  $vars['submitted'] .= '<span class="published-by">' . t("Published by") . ' </span>';
  $vars['submitted'] .= '<span class="username">' . theme('username', array('account' => $account)) . '</span>';
  $vars['submitted'] .= '<span class="extra-on"> ' . t("on") . ' </span> ';
  $vars['submitted'] .= '<span class="post-date">' . format_date($vars['node']->created, 'custom', 'l') . ', ' . format_date($vars['node']->created, 'custom', 'd/m/Y') . '</span>';
  $vars['submitted'] .= '</div>';
}

/**
 * Implements hook_FORM_ID_form_alter().
 *
 * Adding missing alternative text for WAI compliance.
 */
function d4eu_form_search_block_form_alter(&$form, &$form_state, $form_id) {
  $form['actions']['submit']['#attributes']['alt'] = 'Search';
}

/**
 * Implements hook_form_alter().
 *
 * Changes search forms placeholder text.
 */
function d4eu_form_alter(&$form, &$form_state, $form_id) {
  $flavor = _supertags_flavor_context();
  if ($form_id == 'search_block_form') {
    $form['search_block_form']['#attributes']['placeholder'][] = $flavor['name'];
  }
}
