<?php
// Append to the end of env.settings.inc

// Leave this to last so it can override any settings necessary.
// Include database settings.
if (!isset($_SERVER['DEVDESKTOP_DRUPAL_SETTINGS_DIR'])) {
  $db_settings = ENVIRONMENT_SETTINGS_DIR . '/db.settings.inc';
  if (is_readable($db_settings)) {
    require $db_settings;
  }
}
