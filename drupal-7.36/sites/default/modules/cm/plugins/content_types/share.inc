<?php 
/**
 * @file It containes the SHARE content type.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array (
  'title' => t('Share'),
  'description' => t('Add the block that helps to share the page.'),
  'single' => FALSE,
  'cct' => array('cm_cct_share'),
  'render callback' => 'cm_cct_share_render',
  'icon' => 'icon.png',
  'category' => 'Shelepen',
);

/**
 * It renders the content type.
 */
function cm_cct_share_render($subtype, $conf, $args, $context) {
  global $language, $base_url;
  $langcode = $language->language;

  $alias = db_select('url_alias', 'u')
    ->fields('u', ['pid', 'source'])
    ->condition('source', current_path())
    ->condition('language', $langcode)
    ->execute()
    ->fetchAssoc();

  $current_short_url = $base_url . '/' . 's/' . $alias['pid'];

  $block = new stdClass();
  $block->content = [
    '#type' => 'container',
    '#attributes' => [
      'class' => ['cm_cct_share']
    ],
    'facebook' => [
      '#markup' => l('', 'http://www.facebook.com/sharer/sharer.php', [
        'attributes' => [
          'target' => '_blank',
          'class' => ['facebook', 'icon'],
        ],
        'query' => [
          'u' => $current_short_url,
          't' => drupal_get_title()
        ]
      ])
    ],
    'twitter' => [
      '#markup' => l('', 'https://twitter.com/intent/tweet', [
        'attributes' => [
          'target' => '_blank',
          'class' => ['twitter', 'icon'],
        ],
        'query' => [
          'url' => $current_short_url,
          'text' => drupal_get_title()
        ]
      ]),
    ],
  ];

  return $block;
}
