<?php
/**
 * @file
 * permission.edit_own_forum_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own forum content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.forum' => 'content_type.forum',
);

$optional = array();

$modules = array(
  0 => 'node',
);
