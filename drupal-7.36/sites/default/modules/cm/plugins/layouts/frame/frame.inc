<?php

/**
 * implementation of hook_panels_layouts()
 */
// Plugin definition
$plugin = array(
  'title' => t('Frame'),
  'category' => t('Shelepen'),
  'icon' => 'icon.png',
  'theme' => 'cm_layout_frame',
  'regions' => array(
    'header' => t('Header'),
    'content' => t('Content'),
    'footer_block_1' => t('Footer block 1'),
    'footer_block_2' => t('Footer block 2'),
    'footer_block_3' => t('Footer block 3'),
    'footer_block_4' => t('Footer block 4'),
    'copyright' => t('Copyright'),
  ),
);
