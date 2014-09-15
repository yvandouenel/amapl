<?php
/**
 * @file
 * cer_news_events_articles.cer.inc
 */

/**
 * Implements hook_cer_default_presets().
 */
function cer_news_events_articles_cer_default_presets() {
  $export = array();

  $preset = new CerPreset();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->a = 'node:event:field_event_linked';
  $preset->b = 'node:event:field_event_linked';
  $preset->bidirectional = TRUE;
  $preset->weight = 0;
  $export['00f783243ad6cce3c9bcf7081bc09e98'] = $preset;

  $preset = new CerPreset();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->a = 'node:article:field_article_event_linked';
  $preset->b = 'node:event:field_event_article_linked';
  $preset->bidirectional = TRUE;
  $preset->weight = 0;
  $export['0914dedee832d66da28b0a5fc45fe32d'] = $preset;

  $preset = new CerPreset();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->a = 'node:article:field_article_news_linked';
  $preset->b = 'node:news:field_news_article_linked';
  $preset->bidirectional = TRUE;
  $preset->weight = 0;
  $export['493b313edbe4cd8c6192df3affdb5161'] = $preset;

  $preset = new CerPreset();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->a = 'node:article:field_article_linked';
  $preset->b = 'node:article:field_article_linked';
  $preset->bidirectional = TRUE;
  $preset->weight = 0;
  $export['838c1aa4ae943432fb1e12d6f684f1dd'] = $preset;

  $preset = new CerPreset();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->a = 'node:news:field_news_event_linked';
  $preset->b = 'node:event:field_event_news_linked';
  $preset->bidirectional = TRUE;
  $preset->weight = 0;
  $export['a80e5b5e073667706d37fb08f93c2ebc'] = $preset;

  $preset = new CerPreset();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->a = 'node:news:field_news_linked';
  $preset->b = 'node:news:field_news_linked';
  $preset->bidirectional = TRUE;
  $preset->weight = 0;
  $export['ab84995e87ae8ad48b2a7404ce751efc'] = $preset;

  return $export;
}
