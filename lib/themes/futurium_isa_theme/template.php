<?php

/**
 * @file
 * template.php
 */

function futurium_isa_theme_preprocess_region(&$variables) {
  //$variables['classes_array'][] = 'row';
}

function futurium_isa_theme_preprocess_page(&$variables) {
  unset($variables['navbar_classes_array'][1]);
  $variables['navbar_classes_array'][] = 'container-fullwidth';
  if (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
    $variables['content_column_class'] = ' class="col-sm-6"';
  }
  elseif (!empty($variables['page']['sidebar_first']) || !empty($variables['page']['sidebar_second'])) {
    $variables['content_column_class'] = ' class="col-sm-9"';
  }
  else {
    $variables['content_column_class'] = ' class="container-fullwidth"';
  }

  $variables['navbar_classes_array'][] = 'navbar-inverse';

}
