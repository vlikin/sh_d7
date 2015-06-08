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
  global $language;
  $langcode = $language->language;

  $block = new stdClass();
  $block->content = [
    '#type' => 'container',
    '#attributes' => [
      'class' => ['cm_cct_share']
    ],
    'facebook' => [
      '#markup' => l('Facebook', 'http://www.facebook.com/sharer/sharer.php', [
        'attributes' => [
          'target' => '_blank',
          'class' => 'facebook'
        ],
        'query' => [
          'u' => url(current_path(), ['absolute' => TRUE])
        ]
      ])
    ],
    'twitter' => [
      '#markup' => l('Twitter', 'https://twitter.com/intent/tweet', [
        'attributes' => [
          'target' => '_blank',
          'class' => 'twitter',
        ],
        'query' => [
          'url' => url(current_path(), ['absolute' => TRUE]),
          'text' => drupal_get_title()
        ]
      ]),
    ],
  ];

  return $block;
}
