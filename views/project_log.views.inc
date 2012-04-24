<?php

/**
 * @file
 * Views field additions for calculated fields
 * http://drupal.org/node/1219356
 * http://drupal.stackexchange.com/questions/28435/views3-and-subqueries
 */

/**
 * Implements hook_views_data().
 */
function project_log_views_data() {
}

/**
 * Implements hook_views_plugins().
 */
function project_log_views_plugins() {
  return array(
    'argument default' => array(
      'project_log' => array(
        'title' => t('Project Log Node'),
        'handler' => 'project_log_argument_project_log_nid',
        'help' => t('Identifies the parent project log for a project log, section, task, or work entry.'),
      ),
    ),
  );
}
