<?php
/**
 * @file
 * content_type.forum.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'forum',
  'name' => 'Forum topic',
  'description' => 'A <em>forum topic</em> starts a new discussion thread within a forum.',
  'has_title' => 1,
  'title_label' => 'Subject',
  'base' => 'forum',
  'help' => '',
);

$dependencies = array(
  'variable.node_options_forum' => 'variable.node_options_forum',
);

$optional = array(
  'field.node.taxonomy_forums.forum' => 'field.node.taxonomy_forums.forum',
  'field.node.body.forum' => 'field.node.body.forum',
  'permission.create_forum_content' => 'permission.create_forum_content',
  'permission.edit_own_forum_content' => 'permission.edit_own_forum_content',
  'permission.edit_any_forum_content' => 'permission.edit_any_forum_content',
  'permission.delete_own_forum_content' => 'permission.delete_own_forum_content',
  'permission.delete_any_forum_content' => 'permission.delete_any_forum_content',
);

$modules = array(
  0 => 'forum',
);
