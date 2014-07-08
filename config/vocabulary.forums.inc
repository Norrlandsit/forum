<?php
/**
 * @file
 * vocabulary.forums.inc
 */

$api = '2.0.0';

$data = (object) array(
  'vid' => '2',
  'name' => 'Forums',
  'machine_name' => 'forums',
  'description' => 'Forum navigation vocabulary',
  'hierarchy' => '1',
  'module' => 'forum',
  'weight' => '-10',
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'skos:ConceptScheme',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'rdfs:comment',
      ),
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'forum',
);
