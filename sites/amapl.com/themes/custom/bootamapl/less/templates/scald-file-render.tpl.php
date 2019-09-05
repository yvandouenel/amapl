<?php
/**
 * @file
 * Default theme implementation for Scald File Render.
 */
$file_type = "file";
if (strpos($vars['thumbnail_source'], 'pdf') !== false) {
  $file_type = "pdf";
} else if (strpos($vars['thumbnail_source'], 'excel') !== false) {
  $file_type = "xls";
}
?>


<a class="<?php print $file_type; ?>" href="<?php print file_create_url($vars['file_source']); ?>" title="<?php print $vars['file_title']; ?>">
  <?php print $vars['file_title']; ?>
</a>
