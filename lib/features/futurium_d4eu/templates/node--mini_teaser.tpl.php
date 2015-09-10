<?php

/**
 * @file
 * Default theme implementation to display a mini-teaser.
 */
?>

<div id="node-<?php print $node->nid; ?>"
     class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php print render($title_prefix); ?>
  <div class="content-type-label">
    <?php if ($node->type == 'video_d4eu'):
      ?>
      <span
        class="leading-image"><?php print render($content['field_leading_picture_d4eu']); ?></span>
      <?php
      hide($content['field_leading_picture_d4eu']);
    endif; ?>
    <?php if ($node->type == 'event_d4eu'):
      ?>
      <span
        class="event-date"><?php print render($content['field_date_time']); ?></span>
      <?php
      hide($content['field_date_time']);
    endif; ?>
    <span class="label"><?php print $type_name; ?></span>
  </div>
  <h2<?php print $title_attributes; ?>><a
      href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php print render($title_suffix); ?>
  <div class="content"<?php print $content_attributes; ?>>
    <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    ?>
    <?php print render($content); ?>
  </div>
</div>
