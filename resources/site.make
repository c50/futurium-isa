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

; =========
; Libraries
; =========

; =========
; Patches
; =========

projects[drupal][patch][] = patches/drupal_web_test_case.patch
; https://www.drupal.org/node/1853550#comment-6791678
;projects[wysiwyg][patch][] = "https://www.drupal.org/files/wysiwyg-ckeditor4-1853550-4.patch"

; ======
; Themes
; ======
