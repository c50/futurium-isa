api = 2
core = 7.x

; ===================
; Contributed modules
; ===================

projects[boxes][subdir] = "contrib"
projects[invite][subdir] = "contrib"
projects[fivestar][subdir] = "contrib"
projects[panels][subdir] = "contrib"
projects[panels][version] = "3.5"
projects[rate][subdir] = "contrib"
projects[field_collection][subdir] = "contrib"
projects[block_class][subdir] = "contrib"
projects[devel][subdir] = "contrib"
projects[panels_bootstrap_layouts][subdir] = "contrib"
projects[panels_bootstrap_layouts][version] = "3.x-dev"
projects[wysiwyg][version] = "2.x-dev"
projects[token_filter][subdir] = "contrib"
projects[token_filter][version] = "1.x-dev"

; =========
; Libraries
; =========

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

;Patch to fix tokens being cut in half
;;More info: https://webgate.ec.europa.eu/CITnet/jira/browse/MULTISITE-8047
projects[multisite_drupal_toolbox][patch][] = "https://patch-diff.githubusercontent.com/raw/ec-europa/platform-dev/pull/301.patch"

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
https://www.drupal.org/files/issues/dummy_field_panels-2636106-2.patch

;Patch to hide empty computed fields
;;More info: https://www.drupal.org/node/1928178
;;projects[computed_field][patch][] = "https://www.drupal.org/files/issues/computed_field-hide_empty_fields_not_in_db-1928178-13.patch"

; ======
; Themes
; ======
