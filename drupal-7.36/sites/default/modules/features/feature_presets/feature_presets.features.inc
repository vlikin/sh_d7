<?php
/**
 * @file
 * feature_presets.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function feature_presets_image_default_styles() {
  $styles = array();

  // Exported image style: 3x4-2.
  $styles['3x4-2'] = array(
    'label' => '3x4-2',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 360,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 3x4-4.
  $styles['3x4-4'] = array(
    'label' => '3x4-4',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 240,
          'height' => 180,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 4x3-2.
  $styles['4x3-2'] = array(
    'label' => '4x3-2',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 640,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 4x3-4.
  $styles['4x3-4'] = array(
    'label' => '4x3-4',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 240,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
