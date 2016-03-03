api = 2
core = 7.x

; ===================
; Contributed modules
; ===================

projects[boxes][subdir] = "contrib"
projects[block_class][subdir] = "contrib"
projects[countries][subdir] = "contrib"
projects[date][subdir] = "contrib"
projects[date][version] = "2.9"
projects[devel][subdir] = "contrib"
projects[field_collection][subdir] = "contrib"
projects[fivestar][subdir] = "contrib"
projects[invite][subdir] = "contrib"
projects[message][subdir] = "contrib"
projects[message_subscribe][subdir] = "contrib"
projects[message_subscribe_email_frequency][subdir] = "contrib"
projects[panels][subdir] = "contrib"
projects[panels][version] = "3.5"
projects[panels_bootstrap_layouts][subdir] = "contrib"
projects[panels_bootstrap_layouts][version] = "3.x-dev"
projects[quant][subdir] = "contrib"
projects[quant][version] = "1.x-dev"
projects[r4032login][subdir] = "contrib"
projects[relation][subdir] = "contrib"
projects[rate][subdir] = "contrib"
projects[token_filter][subdir] = "contrib"
projects[token_filter][version] = "1.x-dev"
projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg][version] = "2.x-dev"
projects[opengraph_filter][subdir] = "contrib"

; =========
; Libraries
; =========

libraries[maskedinput][download][type] = get
libraries[maskedinput][download][url] = "http://cloud.github.com/downloads/digitalBush/jquery.maskedinput/jquery.maskedinput-1.3.js"
libraries[maskedinput][destination] = libraries
libraries[maskedinput][directory_name] = maskedinput

libraries[springy][download][type] = get
libraries[springy][download][url] = "https://github.com/dhotson/springy/zipball/master"
libraries[springy][destination] = libraries
libraries[springy][directory_name] = springy

; =========
; Patches
; =========

projects[drupal][patch][] = patches/drupal_web_test_case.patch

;Patch to fix wysiwyg ckeditor 4 detection.
;;In our case, we're using 7.x-2.x-dev, where a fix was already commited for this problem.
;;More info: https://www.drupal.org/node/1853550#comment-6791678
;;projects[wysiwyg][patch][] = "https://www.drupal.org/files/wysiwyg-ckeditor4-1853550-4.patch"

;Patch to make panels and workbench moderation play nicely with each other.
;;More info: https://www.drupal.org/node/1285090
projects[workbench_moderation][patch][] = "https://www.drupal.org/files/issues/workbench_moderation-playnicewithpanels-40.patch"

;Patch to allow views_field_view to get a count from another view.
;;More info: https://www.drupal.org/node/1107034
projects[views_field_view][patch][] = "https://www.drupal.org/files/issues/views_field_view-1107034-9-Count-field.patch"

;Patch wysiwyg feature revert
;;More info: https://www.drupal.org/node/2414575
projects[wysiwyg][patch][] = "https://www.drupal.org/files/issues/features_export_doesn_t-2414575-5.patch"

;Patches to allow fivestar in panels
;;More info: https://www.drupal.org/node/2599576
;;More info: https://www.drupal.org/node/2373297
;;projects[fivestar][patch][] = "https://www.drupal.org/files/issues/fivestar-panels-2599576-2.patch"
projects[ctools][patch][] = "https://www.drupal.org/files/issues/ctools-content-subtype-alter-provide-id-2373297-1.patch"

;Patch to allow voting on multiple voting tags
;;More info: https://www.drupal.org/node/2451173
;;projects[fivestar][patch][] = "https://www.drupal.org/files/issues/fivestar-single-vote-multiple-tag-2451173.patch"

;Patches to allow relation dummy field on panels
;;More info: https://www.drupal.org/node/2451173
;;projects[fivestar][patch][] = "https://www.drupal.org/files/issues/dummy_field_panels-2636106-2.patch"

;Patch to hide empty computed fields
;;More info: https://www.drupal.org/node/1928178
;projects[computed_field][patch][] = "https://www.drupal.org/files/issues/computed_field-hide_empty_fields_not_in_db-1928178-13.patch"

;Patch to fix ctools not handling empty fields with default values properly.
;;More info: https://www.drupal.org/node/2411353
projects[ctools][patch][] = "https://www.drupal.org/files/issues/ctools-show_empty_field-2411353-1.patch"

;Patch to fix issue with date grouped filters.
;;More info: https://www.drupal.org/node/1876168
projects[date][patch][] = "https://www.drupal.org/files/issues/exposed_grouped_filter-1876168-71.patch"

;Removing initial URL option
;;https://www.drupal.org/node/2272645
projects[opengraph_filter][patch][] = "https://www.drupal.org/files/issues/code_sniff_and_strip_link_option_1.patch"

; ======
; Themes
; ======
