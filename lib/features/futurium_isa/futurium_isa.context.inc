<?php
/**
 * @file
 * futurium_isa.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function futurium_isa_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'futurium_isa_homepage';
  $context->description = 'context for the home page';
  $context->tag = 'homepage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-bootstrap_blocks-block' => array(
          'module' => 'views',
          'delta' => 'bootstrap_blocks-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-ideas-block' => array(
          'module' => 'views',
          'delta' => 'ideas-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'bean-share-ideas' => array(
          'module' => 'bean',
          'delta' => 'share-ideas',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-discussions-block' => array(
          'module' => 'views',
          'delta' => 'discussions-block',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-events-upcoming' => array(
          'module' => 'views',
          'delta' => 'events-upcoming',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-polls-block' => array(
          'module' => 'views',
          'delta' => 'polls-block',
          'region' => 'content',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('context for the home page');
  t('homepage');
  $export['futurium_isa_homepage'] = $context;

  return $export;
}
