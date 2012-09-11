<?php
/**
 * @file
 * humanitarianresponse_minimal_layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function humanitarianresponse_minimal_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'iframe';
  $context->description = 'IFramed version of a page';
  $context->tag = '';
  $context->conditions = array(
    'context_get' => array(
      'values' => array(
        'iframe=true' => 'iframe=true',
      ),
    ),
  );
  $context->reactions = array(
    'disable_context' => array(
      'disabled' => array(
        'sitewide' => 'sitewide',
      ),
    ),
    'theme_html' => array(
      'class' => 'iframe',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('IFramed version of a page');
  $export['iframe'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'Sitewide context';
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
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'browserid-login' => array(
          'module' => 'browserid',
          'delta' => 'login',
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'logintoboggan-logintoboggan_logged_in' => array(
          'module' => 'logintoboggan',
          'delta' => 'logintoboggan_logged_in',
          'region' => 'user_second',
          'weight' => '-9',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'user_second',
          'weight' => '-8',
        ),
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => 1,
          'region' => 'menu',
          'weight' => '-10',
        ),
        'boxes-contact' => array(
          'module' => 'boxes',
          'delta' => 'contact',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-links-block' => array(
          'module' => 'views',
          'delta' => 'links-block',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'follow-site' => array(
          'module' => 'follow',
          'delta' => 'site',
          'region' => 'postscript_third',
          'weight' => '-10',
        ),
        'boxes-legal' => array(
          'module' => 'boxes',
          'delta' => 'legal',
          'region' => 'postscript_fourth',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide context');
  $export['sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_breadcrumb';
  $context->description = 'When to display the current page breadcrumb';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
        '~search' => '~search',
        '~search/*' => '~search/*',
        '~coordination/calendar' => '~coordination/calendar',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb_current_page' => array(
      'breadcrumb_show_current_page' => 1,
      'breadcrumb_show_current_page_title' => '',
      'breadcrumb_show_current_page_only' => 0,
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('When to display the current page breadcrumb');
  $export['sitewide_breadcrumb'] = $context;

  return $export;
}
