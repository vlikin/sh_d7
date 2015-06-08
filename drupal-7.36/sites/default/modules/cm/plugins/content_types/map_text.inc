<?php 
/**
 * @file It containes the TEXT content type.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array (
  'title' => t('Map text'),
  'description' => t('It is the multilingual Map -Text box.'),
  'single' => FALSE,
  'cct' => array('cm_cct_map_text'),
  'render callback' => 'cm_cct_map_text_render',
  'edit form' => 'cm_cct_map_text_edit_form',
  'admin info' => 'cm_cct_map_text_admin_info',
  'icon' => 'icon.png',
  'category' => 'Shelepen',
);

/**
 * It renders the content type.
 */
function cm_cct_map_text_render($subtype, $conf, $args, $context) {
  global $language;
  $langcode = $language->language;

  $block = new stdClass();
  $block->content = [
    '#type' => 'container',
    '#attributes' => [
      'class' => [
        'cm_cct_map_text',
        $conf['settings']['side']
      ],
    ],
    '#attached' => [
      'js' => [
        [
          'data' => 'https://maps.googleapis.com/maps/api/js',
          'type' => 'external'
        ],
        drupal_get_path('module', 'cm') . '/js/cct/map_text.js'
      ]
    ],
    'map' => [
      '#type' => 'container',
      '#attributes' => [
        'class' => ['map', 'ct_resize'],
        'data-ct_resize' => '4x3',
        'data-zoom' => floatval($conf['settings']['zoom']),
        'data-lat' => floatval($conf['settings']['lat']),
        'data-lng' => floatval($conf['settings']['lng']),
        'data-marker' => $conf['settings']['marker'],
      ]
    ],
    'title' => [
      '#type' => 'container',
      '#attributes' => ['class' => 'title'],
      'text' => ['#markup' => check_plain($conf[$langcode]['title'])],
    ],
    'text' => [
      '#type' => 'container',
      '#attributes' => ['class' => 'text'],
      'text' => ['#markup' => check_markup($conf[$langcode]['text']['value'], $conf[$langcode]['text']['format'])],
    ]
  ];

  return $block;
}

/**
 * 'admin info' callback for panel pane.
 */
function cm_cct_map_text_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = '';

    return $block;
  }
}

/**
 * It is the config form of the content type.
 */
function cm_cct_map_text_edit_form($form, &$form_state) {
  $values = $form_state['conf'];

  hide($form['override_title']);
  hide($form['override_title_text']);
  hide($form['override_title_heading']);
  hide($form['override_title_markup']);

  $form['#tree'] = TRUE;
  $form['#attached'] = [
    'js' => [
      [
        'data' => 'https://maps.googleapis.com/maps/api/js?callback=Drupal.behaviors.cm_cct_map_text.attach',
        'type' => 'external'
      ],
      drupal_get_path('module', 'cm') . '/js/cct/map_text.js'
    ]
  ];
  $form['settings'] = [
    '#type' => 'fieldset',
    '#title' => t('Image'),
    '#tree' => TRUE,
    '#group' => 'vertical_tabs',
    'zoom' => [
      '#type' => 'textfield',
      '#title' => t('Zoom'),
      '#default_value' => $values['settings']['zoom'],
    ],
    'lat' => [
      '#type' => 'textfield',
      '#title' => t('Lat'),
      '#default_value' => $values['settings']['lat'],
    ],
    'lng' => [
      '#type' => 'textfield',
      '#title' => t('Lat'),
      '#default_value' => $values['settings']['lng'], 
    ],
    'marker' => [
      '#type' => 'cm_imce',
      '#title' => t('Image'),
      '#default_value' => $values['settings']['marker'],
     ],
    'side' => [
      '#type' => 'select',
      '#title' => t('Side'),
      '#options' => array (
        'left' => t('Left'),
        'right' => t('Right'),
      ),
      '#default_value' => $values['settings']['side'],
    ],
  ];
  $form['vertical_tabs'] = array(
    '#type' => 'vertical_tabs',
  );
  foreach (language_list() as $langcode => $lang) {
    $form[$langcode] = [
      '#type' => 'fieldset',
      '#title' => $lang->name,
      '#group' => 'vertical_tabs',
      'title' => [
        '#type' => 'textfield',
        '#default_value' => $values[$langcode]['title'],
      ],
      'text' => [
        '#type' => 'text_format',
        '#format' => $values[$langcode]['text']['format'],
        '#default_value' => $values[$langcode]['text']['value'],
      ],
    ];
  }

  return $form;
}

/**
 * It is the config form of the content type.
 */
function cm_cct_map_text_edit_form_submit($form, &$form_state) {
  $form_state['conf'] = $form_state['values'];
}
