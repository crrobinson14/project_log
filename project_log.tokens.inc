<?php

/**
 * @file
 * Project Log tokens
 */

/**
 * Implements hook_token_info().
 */
function project_log_token_info() {
  $type = array(
    'name' => t('Project Logs'),
    'description' => t('Tokens related to project logs.'),
    'needs-data' => 'node',
  );

  $node['project-log-nid'] = array(
    'name' => t("Project Log NID"),
    'description' => t("The NID of this node's associated project log."),
  );
  
  $node['project-log-title'] = array(
    'name' => t("Project Log Title"),
    'description' => t("The title of this node's associated project log."),
  );
  
  $node['project-log-url'] = array(
    'name' => t("Project Log URL"),
    'description' => t("The path alias of this node's associated project log."),
  );

  $node['project-log-edit-url'] = array(
    'name' => t("Project Log URL"),
    'description' => t("The path alias of this node's associated project log."),
  );

  return array(
    'types' => array('project-log' => $type),
    'tokens' => array('node' => $node),
  );
}

/**
 * Implements hook_token_info().
 * This hook is invoked when someone calls token_replace(). That function first
 * scans the text for [type:token] patterns, and splits the needed tokens into
 * groups by type. Then hook_tokens() is invoked on each token-type group,
 * allowing your module to respond by providing replacement text for any of
 * the tokens in the group that your module knows how to process.
 *
 * A module implementing this hook should also implement hook_token_info() in
 * order to list its available tokens on editing screens.
 *
 * @param $type
 *   The machine-readable name of the type (group) of token being replaced, such
 *   as 'node', 'user', or another type defined by a hook_token_info()
 *   implementation.
 * @param $tokens
 *   An array of tokens to be replaced. The keys are the machine-readable token
 *   names, and the values are the raw [type:token] strings that appeared in the
 *   original text.
 * @param $data
 *   (optional) An associative array of data objects to be used when generating
 *   replacement values, as supplied in the $data parameter to token_replace().
 * @param $options
 *   (optional) An associative array of options for token replacement; see
 *   token_replace() for possible values.
 *
 * @return
 *   An associative array of replacement values, keyed by the raw [type:token]
 *   strings from the original text.
 *
 * @see hook_token_info()
 * @see hook_tokens_alter()
 */
function project_log_tokens($type, $tokens, array $data = array(), array $options = array()) {
  if (isset($options['language'])) {
    $url_options['language'] = $options['language'];
    $language_code = $options['language']->language;
  }
  else {
    $language_code = NULL;
  }
  $sanitize = !empty($options['sanitize']);

  $replacements = array();

  if ($type == 'node' && !empty($data['node'])) {
    $node = $data['node'];

    foreach ($tokens as $name => $original) {
      switch ($name) {
        case 'project-log-nid':
          $replacements[$original] = project_log_root_nid($node);
          break;
        
        case 'project-log-title':
          // TODO: Review how other modules do this. A node_load() seems like a waste.
          // Is a straight DB query acceptable here?
          $project_log_nid = project_log_root_nid($node);
          $project_log = node_load($project_log_nid);
          $replacements[$original] = $project_log->title;
          break;

        case 'project-log-url':
          $project_log_nid = project_log_root_nid($node);
          $replacements[$original] = url('node/' . $project_log_nid, $url_options);
          break;

        case 'project-log-edit-url':
          $project_log_nid = project_log_root_nid($node);
          $replacements[$original] = url('node/' . $project_log_nid . '/edit', $url_options);
          break;
      }
    }
  }

  return $replacements;
}

