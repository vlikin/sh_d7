<?php
/**
 * @file Contains the code that should be commited and that extends the settings.php file.
 * It should be included in settings.php.
 */

/**
 * It manages static files with ssl.
 *
 * @link https://docs.acquia.com/cloud/configure/https
 */
if (isset($_SERVER['HTTP_X_FORWARDED_PROTO']) && 
$_SERVER['HTTP_X_FORWARDED_PROTO'] == 'https') {
  $_SERVER['HTTPS']='on';
}
else {
  $_SERVER['HTTPS']='';
}
