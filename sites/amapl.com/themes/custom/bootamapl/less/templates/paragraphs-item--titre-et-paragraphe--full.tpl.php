<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="row wrapper-cols">
    <div id="page-col-left" class="col-md-6">
      <?php if (isset($content['field_titre_col_gauche'][0]['#markup'])): ?>
        <h3 class="title-pl title-col">
          <?php print render($content['field_titre_col_gauche'][0]['#markup']); ?>
        </h3>
      <?php endif; ?>
      <?php if (isset($content['field_texte_col_gauche'][0]['#markup'])): ?>
        <div class="txt-pl col-txt">
          <?php print render($content['field_texte_col_gauche'][0]['#markup']); ?>
        </div>
      <?php endif; ?>
    </div>
    <div id="page-col-right" class="col-md-6">
      <?php if (isset($content['field_titre_col_droite'][0]['#markup'])): ?>
        <h3 class="title-caa title-col">
          <?php print render($content['field_titre_col_droite'][0]['#markup']); ?>
        </h3>
      <?php endif; ?>
      <?php if (isset($content['field_texte_col_droite'][0]['#markup'])): ?>
        <div class="txt-caa col-txt">
          <?php print render($content['field_texte_col_droite'][0]['#markup']); ?>
        </div>
      <?php endif; ?>
    </div>
  </div>
</div>
