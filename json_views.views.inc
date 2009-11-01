<?php
// $Id: exhibit.views.inc,v 1.1 2009/01/08 12:04:48 arto Exp $

//////////////////////////////////////////////////////////////////////////////
// Views API hooks

/**
 * Implementation of hook_views_plugins().
 */
function json_views_views_plugins() {
  return array(
    // Style plugins
    'style' => array(
      'json' => array(
        'title' => t('JSON'),
        'help' => t('Generates a JSON feed from a view.'),
        'handler' => 'views_plugin_style_json',
        'path' => drupal_get_path('module', 'json_views'),
        'uses row plugin' => TRUE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'feed',
        'help topic' => 'style-json',
      ),
    ),

    // Row plugins
    'row' => array(
      'node_json' => array(
        'title' => t('Fields (JSON)'),
        'help' => t('Outputs the fields as an JSON object.'),
        'handler' => 'views_plugin_row_fields_json',
        'path' => drupal_get_path('module', 'json_views'),
        'uses fields' => TRUE,
        'uses options' => FALSE,
        'type' => 'feed',
        'help topic' => 'style-node-json',
      ),
    ),
  );
}
