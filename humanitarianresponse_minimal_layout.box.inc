<?php
/**
 * @file
 * humanitarianresponse_minimal_layout.box.inc
 */

/**
 * Implements hook_default_box().
 */
function humanitarianresponse_minimal_layout_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'contact';
  $box->plugin_key = 'i18n';
  $box->title = 'Contact';
  $box->description = 'Contact';
  $box->options = array(
    'body' => array(
      'value' => '<p>This site is part of the <a href="http://www.humanitarianresponse.info">HumanitarianResponse network</a>. Write to <a href="mailto:info@humanitarianresponse.info">info@humanitarianresponse.info</a> for more information.</p>',
      'format' => 'filtered_html',
    ),
    'i18n_boxes' => array(
      'language' => '__LOCALIZE__',
    ),
    'additional_classes' => '',
  );
  $export['contact'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'legal';
  $box->plugin_key = 'i18n';
  $box->title = 'Legal';
  $box->description = 'Legal';
  $box->options = array(
    'body' => array(
      'value' => '<p>Copyright 2012 UNOCHA</p>',
      'format' => 'filtered_html',
    ),
    'i18n_boxes' => array(
      'language' => '__LOCALIZE__',
    ),
    'additional_classes' => '',
  );
  $export['legal'] = $box;

  return $export;
}
