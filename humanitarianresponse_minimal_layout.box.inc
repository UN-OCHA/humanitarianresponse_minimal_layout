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
      'value' => '<p>Email: <a href="mailto:[site:mail]">[site:mail]</a></p><p>Visit the global <a href="http://www.humanitarianresponse.info">HumanitarianResponse.info</a> site to find other resources and response sites.</p>',
      'format' => 'full_html',
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
  $box->title = 'About';
  $box->description = 'About';
  $box->options = array(
    'body' => array(
      'value' => '<p><a href="http://www.humanitarianresponse.info" target="_blank">HumanitarianResponse.info</a> is provided by UN OCHA to support humanitarian operations globally</p><p><a href="http://www.humanitarianresponse.info/about" target="_blank">Learn more about HumanitarianResponse.info</a></p><p><a href="http://www.unocha.org" target="_blank"><img alt="OCHA logo" src="http://www.humanitarianresponse.info/sites/all/themes/humanitarianresponse/images/ocha.png"></a></p>',
      'format' => 'full_html',
    ),
    'i18n_boxes' => array(
      'language' => '__LOCALIZE__',
    ),
    'additional_classes' => '',
  );
  $export['legal'] = $box;

  return $export;
}
