<?php

/**
 * @file
 */

/**
 * Default argument plugin to provide a PHP code block.
 */
class views_plugin_argument_default_project_log extends views_plugin_argument_default {
  function get_argument() {
    $node = menu_get_object('node', $i);
    if (!$node) {
      return NULL;
    }

    switch ($node->type) {
      // If we're already on a Project Log, we're done
      case 'project_log':
        return $node->nid;

      // For Project Log sections, we need to follow the back-reference
      // from our parent.
      case 'project_log_section':
        return db_query_range("SELECT entity_id FROM {field_data_project_log_sections}
                               WHERE project_log_sections_nid=:nid", 0, 1,
                               array(':nid' => $node->nid))->fetchField();

      // For Project Log tasks, we need to follow the back-reference
      // to our section, and then THAT back-reference to the project log.
      case 'project_log_task':
        $section = db_query_range("SELECT entity_id FROM {field_data_project_log_tasks}
                                   WHERE project_log_tasks_nid=:nid", 0, 1,
                                   array(':nid' => $node->nid))->fetchField();

        return db_query_range("SELECT entity_id FROM {field_data_project_log_sections}
                               WHERE project_log_sections_nid=:nid", 0, 1,
                               array(':nid' => $section))->fetchField();

      // For Project Log work entries, we have that one last step to follow.
      case 'project_log_work':
        $task = $node->field_project_log_work_task[$node->language][0]['nid'];
        
        $section = db_query_range("SELECT entity_id FROM {field_data_project_log_tasks}
                                   WHERE project_log_tasks_nid=:nid", 0, 1,
                                   array(':nid' => $task))->fetchField();

        return db_query_range("SELECT entity_id FROM {field_data_project_log_sections}
                               WHERE project_log_sections_nid=:nid", 0, 1,
                               array(':nid' => $section))->fetchField();
    }

    return NULL;
  }
}
