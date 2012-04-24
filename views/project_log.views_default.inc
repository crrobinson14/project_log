<?php

/**
 * Provide some default views to get you started.
 */

/**
 * Implements hook_views_default_views().
 *
 * Reminder: When updating this file, add t() around ->tag, ->description,
 * and ->display_title fields.
 *
 * This hook allows modules to provide their own views which can either be used
 * as-is or as a "starter" for users to build from.
 *
 * This hook should be placed in MODULENAME.views_default.inc and it will be
 * auto-loaded. MODULENAME.views_default.inc must be in the directory specified
 * by the 'path' key returned by MODULENAME_views_api(), or the same directory
 * as the .module file, if 'path' is unspecified.
 *
 * The $view->disabled boolean flag indicates whether the View should be
 * enabled or disabled by default.
 *
 * @return
 *   An associative array containing the structures of views, as generated from
 *   the Export tab, keyed by the view name. A best practice is to go through
 *   and add t() to all title and label strings, with the exception of menu
 *   strings.
 */
function project_log_views_default_views() {
  $view = new view;
  $view->name = 'project_log_sections';
  $view->description = t('An ordered list of the sections/chapters for a project log, with summary data.');
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = t('Project Log: Sections');
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Content: Sections (project_log_sections) */
  $handler->display->display_options['relationships']['project_log_sections_nid']['id'] = 'project_log_sections_nid';
  $handler->display->display_options['relationships']['project_log_sections_nid']['table'] = 'field_data_project_log_sections';
  $handler->display->display_options['relationships']['project_log_sections_nid']['field'] = 'project_log_sections_nid';
  $handler->display->display_options['relationships']['project_log_sections_nid']['required'] = 0;
  $handler->display->display_options['relationships']['project_log_sections_nid']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'project_log_sections_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Date Completed */
  $handler->display->display_options['fields']['project_log_work_performed']['id'] = 'project_log_work_performed';
  $handler->display->display_options['fields']['project_log_work_performed']['table'] = 'field_data_project_log_work_performed';
  $handler->display->display_options['fields']['project_log_work_performed']['field'] = 'project_log_work_performed';
  $handler->display->display_options['fields']['project_log_work_performed']['label'] = 'Last Update';
  $handler->display->display_options['fields']['project_log_work_performed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['project_log_work_performed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['project_log_work_performed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['project_log_work_performed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['project_log_work_performed']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['project_log_work_performed']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['project_log_work_performed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['project_log_work_performed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['project_log_work_performed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['project_log_work_performed']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['project_log_work_performed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['project_log_work_performed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['project_log_work_performed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['project_log_work_performed']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['project_log_work_performed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['project_log_work_performed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['project_log_work_performed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['project_log_work_performed']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['project_log_work_performed']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['project_log_work_performed']['field_api_classes'] = 0;
  /* Field: Content: Hours Estimate */
  $handler->display->display_options['fields']['project_log_projected_hours']['id'] = 'project_log_projected_hours';
  $handler->display->display_options['fields']['project_log_projected_hours']['table'] = 'field_data_project_log_projected_hours';
  $handler->display->display_options['fields']['project_log_projected_hours']['field'] = 'project_log_projected_hours';
  $handler->display->display_options['fields']['project_log_projected_hours']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['project_log_projected_hours']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['project_log_projected_hours']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['project_log_projected_hours']['alter']['external'] = 0;
  $handler->display->display_options['fields']['project_log_projected_hours']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['project_log_projected_hours']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['project_log_projected_hours']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['project_log_projected_hours']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['project_log_projected_hours']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['project_log_projected_hours']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['project_log_projected_hours']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['project_log_projected_hours']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['project_log_projected_hours']['alter']['html'] = 0;
  $handler->display->display_options['fields']['project_log_projected_hours']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['project_log_projected_hours']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['project_log_projected_hours']['hide_empty'] = 0;
  $handler->display->display_options['fields']['project_log_projected_hours']['empty_zero'] = 0;
  $handler->display->display_options['fields']['project_log_projected_hours']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['project_log_projected_hours']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['project_log_projected_hours']['field_api_classes'] = 0;
  /* Field: Content: Hours Spent */
  $handler->display->display_options['fields']['project_log_work_hours']['id'] = 'project_log_work_hours';
  $handler->display->display_options['fields']['project_log_work_hours']['table'] = 'field_data_project_log_work_hours';
  $handler->display->display_options['fields']['project_log_work_hours']['field'] = 'project_log_work_hours';
  $handler->display->display_options['fields']['project_log_work_hours']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['project_log_work_hours']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['project_log_work_hours']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['project_log_work_hours']['alter']['external'] = 0;
  $handler->display->display_options['fields']['project_log_work_hours']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['project_log_work_hours']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['project_log_work_hours']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['project_log_work_hours']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['project_log_work_hours']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['project_log_work_hours']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['project_log_work_hours']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['project_log_work_hours']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['project_log_work_hours']['alter']['html'] = 0;
  $handler->display->display_options['fields']['project_log_work_hours']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['project_log_work_hours']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['project_log_work_hours']['hide_empty'] = 0;
  $handler->display->display_options['fields']['project_log_work_hours']['empty_zero'] = 0;
  $handler->display->display_options['fields']['project_log_work_hours']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['project_log_work_hours']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['project_log_work_hours']['field_api_classes'] = 0;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['project_log_status']['id'] = 'project_log_status';
  $handler->display->display_options['fields']['project_log_status']['table'] = 'field_data_project_log_status';
  $handler->display->display_options['fields']['project_log_status']['field'] = 'project_log_status';
  $handler->display->display_options['fields']['project_log_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['project_log_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['project_log_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['project_log_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['project_log_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['project_log_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['project_log_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['project_log_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['project_log_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['project_log_status']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['project_log_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['project_log_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['project_log_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['project_log_status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['project_log_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['project_log_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['project_log_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['project_log_status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['project_log_status']['field_api_classes'] = 0;
  /* Field: Content: Task */
  $handler->display->display_options['fields']['project_log_work_task']['id'] = 'project_log_work_task';
  $handler->display->display_options['fields']['project_log_work_task']['table'] = 'field_data_project_log_work_task';
  $handler->display->display_options['fields']['project_log_work_task']['field'] = 'project_log_work_task';
  $handler->display->display_options['fields']['project_log_work_task']['label'] = 'Last Update';
  $handler->display->display_options['fields']['project_log_work_task']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['project_log_work_task']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['project_log_work_task']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['project_log_work_task']['alter']['external'] = 0;
  $handler->display->display_options['fields']['project_log_work_task']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['project_log_work_task']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['project_log_work_task']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['project_log_work_task']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['project_log_work_task']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['project_log_work_task']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['project_log_work_task']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['project_log_work_task']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['project_log_work_task']['alter']['html'] = 0;
  $handler->display->display_options['fields']['project_log_work_task']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['project_log_work_task']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['project_log_work_task']['hide_empty'] = 0;
  $handler->display->display_options['fields']['project_log_work_task']['empty_zero'] = 0;
  $handler->display->display_options['fields']['project_log_work_task']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['project_log_work_task']['group_rows'] = 1;
  $handler->display->display_options['fields']['project_log_work_task']['delta_limit'] = '1';
  $handler->display->display_options['fields']['project_log_work_task']['delta_offset'] = '0';
  $handler->display->display_options['fields']['project_log_work_task']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['project_log_work_task']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['project_log_work_task']['field_api_classes'] = 0;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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
    'project_log' => 'project_log',
  );

  /* Display: Table of Sections */
  $handler = $view->new_display('block', 'Table of Sections', 'block_1');

  // Add view to list of views to provide.
  $views[$view->name] = $view;

  return $views;
}
