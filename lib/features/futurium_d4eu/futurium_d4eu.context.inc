<?php
/**
 * @file
 * futurium_d4eu.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function futurium_d4eu_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'futurium_homepage';
  $context->description = 'Futurium Homepage.';
  $context->tag = 'A) Futurium';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
        'futurium' => 'futurium',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-flavor_list-block' => array(
          'module' => 'views',
          'delta' => 'flavor_list-block',
          'region' => 'banner',
          'weight' => '-10',
        ),
        'views-flavors_whats_new-block_whatnew' => array(
          'module' => 'views',
          'delta' => 'flavors_whats_new-block_whatnew',
          'region' => 'home_main',
          'weight' => '-9',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'home_sidebar',
          'weight' => '-10',
        ),
        'views-flavors_whats_new-block_2' => array(
          'module' => 'views',
          'delta' => 'flavors_whats_new-block_2',
          'region' => 'home_sidebar',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('A) Futurium');
  t('Futurium Homepage.');
  $export['futurium_homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'people_d4eu';
  $context->description = 'Adds blocks to the people page';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'people' => '*/people',
        'users/*' => 'users/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'invite-invite_add_invite_by_email' => array(
          'module' => 'invite',
          'delta' => 'invite_add_invite_by_email',
          'region' => 'sidebar_right',
          'weight' => '-11',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Adds blocks to the people page');
  $export['people_d4eu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_wide_d4eu';
  $context->description = 'Adds global blocks to several regions';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'header_top',
          'weight' => '-10',
        ),
        'menu-menu-service-tools' => array(
          'module' => 'menu',
          'delta' => 'menu-service-tools',
          'region' => 'header_top',
          'weight' => '-9',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'header_top',
          'weight' => '-8',
        ),
        'easy_breadcrumb-easy_breadcrumb' => array(
          'module' => 'easy_breadcrumb',
          'delta' => 'easy_breadcrumb',
          'region' => 'breadcrumbs',
          'weight' => '-10',
        ),
        'boxes-temp_fix_css' => array(
          'module' => 'boxes',
          'delta' => 'temp_fix_css',
          'region' => 'footer_copyright',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Adds global blocks to several regions');
  $export['site_wide_d4eu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_page';
  $context->description = 'Extend user profiles display';
  $context->tag = 'users';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-social_links' => array(
          'module' => 'boxes',
          'delta' => 'social_links',
          'region' => 'sidebar_right',
          'weight' => '-10',
        ),
        'views-recent_activity-block_lastc' => array(
          'module' => 'views',
          'delta' => 'recent_activity-block_lastc',
          'region' => 'content',
          'weight' => '6',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Extend user profiles display');
  t('users');
  $export['user_page'] = $context;

  return $export;
}
