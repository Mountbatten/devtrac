<?php
/**
 * @file
 * devtrac7_solr_search_feature.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function devtrac7_solr_search_feature_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'front_about_information';
  $template->title = 'Site reports';
  $template->plugin = 'text';
  $template->description = 'This is the about devtrac block on the front page with some info about DevTrac accompanied by a the location type facet';
  $template->configuration = '';
  $export['front_about_information'] = $template;

  return $export;
}
