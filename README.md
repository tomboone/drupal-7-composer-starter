# Drupal 7 Composer Starter
Basic composer.json configuration I use to download Drupal 7 for new projects that includes several modules/themes/libraries I use in almost every project:

## Contrib Modules
* ctools
* devel
* globaldirect
* jquery_update
* libraries
* navbar
* navigation404
* pathauto
* token
* transliteration
* views

## Contrib themes
* bootstrap
* ember

## Libraries (downloaded from my own forks)
* backbone.js
* underscore.js
* modernizr.js (custom build for navbar module)

## Custom Themes
* bootstrap_subtheme (based on Bootstrap's CDN Starter Kit)

## SQL Dump
There's also a starter SQL dump that can be imported to avoid running install.php. It does the following:
* Creates a generic user 1 (drupal/drupal)
* Deletes the  Basic Page and Article content types
* Removes Pathauto's default patterns
* Disables core modules I never use: Color, Comment, Dashboard, Overlay, Shortcut, Taxonomy, and Toolbar
* Restrict account creation to administrators only

## envsettings
Finally, there's a file called 'envsettings/prod/env.settings.inc' that assists in configuring server databases without including them in settings.php (and thus in your repo). Setting this up requires:
* Configuring settings.php to include env.settings.inc
* Adding the file envsettings/db.settings.inc containing a settings.php-style database configuration to each server deployment
