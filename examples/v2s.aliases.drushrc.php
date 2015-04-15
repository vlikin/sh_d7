<?php
/**
 * USAGE *
 * Sync files.
 * fdr rsync @v2s.dev:%files @v2s.local:%files
 * fdr rsync @v2s.preprod:%files @v2s.local:%files
 * fdr rsync @v2s.preprod:%all_files @v2s.local:%all_files
 * fdr rsync @v2s.local:%all_files @v2s.dev:%all_files
 *
 * Sync database.
 * fdr sql-sync --no-cache @v2s.preprod @v2s.local
 * fdr sql-sync --no-cache @v2s.local @v2s.preprod
 * fdr sql-sync --no-cache @v2s.dev @v2s.local
 * fdr sql-sync --no-cache @v2s.local @v2s.dev
 *
 * Receives login link that does not require the password. 
 * dr @v2s.dev uli
 * 
 * Make backup.
 * cd backups
 * dr @v2s.local archive-dump --destination=./snelnl-last.tar.gz
 * drush archive-dump --destination=../sql-dump/snelnl-last.tar.gz
 */
$FDIR = dirname(dirname(dirname(__DIR__)));

// Project Name.
$PN = 'v2.shelepen';

// Drupal Path.
$DP = '/var/www/' . $PN . '/public_html';

$URI = 'default';
$URL = 'v2.shelepen.local';

//this is the alias for the local development site
$aliases['local'] = array(
  'root' => $DP,
  'uri' => $URI,
  'databases' => array (
    'default' => array (
      'default' => array (
        'driver' => 'mysql',
        'username' => 'root',
        'password' => '',
        'port' => '',
        'host' => 'localhost',
        'database' => 'v2_shelepen', 
      ),
    ),
  ),
  'path-aliases' => array(
    '%dump-dir' => $DP . '/../backups',
    '%files' => $DP . '/sites/' . $URI . '/files',
    '%sites' => $DP . '/sites/',
    '%all_files' => $DP,
  )
);

//this is the alias for the remote development site

// Remote Drupal Path.
$RURL = 'v2.shelepen.com.ua';
$aliases['dev'] = array(
  'root' => $DP,
  'uri' => $RURL,
  'remote-host' => $RURL,
  'remote-user' => 'www-data',
  'ssh-options' => '-i /var/www/.ssh/www-data@shelepen.com.ua',
  'databases' => array (
    'default' => array (
      'default' => array (
        'database' => 'v2_shelepen',
        'username' => 'root',
        'password' => '',
        'host' => 'localhost',
        'port' => '',
        'driver' => 'mysql',
        'prefix' => '',
      ),
    ),
  ),
  'path-aliases' => array (
    '%drush-script' => '/home/www-data/github/drush/drush',
    '%dump-dir' => $DP . '/../backups',
    '%files' => $DP . '/sites/' . $URI . '/files',
    '%sites' => $DP . '/sites/',
  )
);