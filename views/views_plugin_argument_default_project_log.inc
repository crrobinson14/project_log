<?php

/**
 * @file
 */

/**
 * Default argument plugin to provide a PHP code block.
 */
class views_plugin_argument_default_project_log extends views_plugin_argument_default {
  function get_argument() {
    return project_log_root_nid();
  }
}
