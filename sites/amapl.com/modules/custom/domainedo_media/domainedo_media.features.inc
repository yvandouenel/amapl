<?php
/**
 * @file
 * domainedo_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function domainedo_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
  if ($module == "scald" && $api == "context_config") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function domainedo_media_image_default_styles() {
  $styles = array();

  // Exported image style: list_image_shows__240x180_.
  $styles['list_image_shows__240x180_'] = array(
    'label' => 'List Image shows (240X180)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 240,
          'height' => 180,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_show__570_.
  $styles['main_show__570_'] = array(
    'label' => 'main show (570)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 570,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: max__940_.
  $styles['max__940_'] = array(
    'label' => 'max (940)',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 940,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: maxbreakpoints_theme_domainedo_mobile_1x.
  $styles['maxbreakpoints_theme_domainedo_mobile_1x'] = array(
    'label' => 'maxbreakpoints_theme_domainedo_mobile_1x',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 560,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: maxbreakpoints_theme_domainedo_narrow_1x.
  $styles['maxbreakpoints_theme_domainedo_narrow_1x'] = array(
    'label' => 'maxbreakpoints_theme_domainedo_narrow_1x',
    'effects' => array(
      10 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 940,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: maxbreakpoints_theme_domainedo_wide_1x.
  $styles['maxbreakpoints_theme_domainedo_wide_1x'] = array(
    'label' => 'maxbreakpoints_theme_domainedo_wide_1x',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 940,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: resp_full_img_showbreakpoints_theme_domainedo_mobile_1x.
  $styles['resp_full_img_showbreakpoints_theme_domainedo_mobile_1x'] = array(
    'label' => 'resp_full_img_showbreakpoints_theme_domainedo_mobile_1x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 560,
          'height' => 263,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: resp_full_img_showbreakpoints_theme_domainedo_narrow_1x.
  $styles['resp_full_img_showbreakpoints_theme_domainedo_narrow_1x'] = array(
    'label' => 'resp_full_img_showbreakpoints_theme_domainedo_narrow_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 570,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: small_150.
  $styles['small_150'] = array(
    'label' => 'small (150 x 150)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: unique_headband.
  $styles['unique_headband'] = array(
    'label' => 'Bandeau unique',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 523,
          'height' => 378,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: zoom-desktop.
  $styles['zoom-desktop'] = array(
    'label' => 'zoom-desktop450x350',
    'effects' => array(
      4 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 450,
          'height' => 350,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'zoom-desktop',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: zoombreakpoints_theme_domainedo_mobile_1x.
  $styles['zoombreakpoints_theme_domainedo_mobile_1x'] = array(
    'label' => 'zoombreakpoints_theme_domainedo_mobile_1x',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 560,
          'height' => 283,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: zoombreakpoints_theme_domainedo_narrow_1x.
  $styles['zoombreakpoints_theme_domainedo_narrow_1x'] = array(
    'label' => 'zoombreakpoints_theme_domainedo_narrow_1x',
    'effects' => array(
      15 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 591,
          'height' => 283,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: zoombreakpoints_theme_domainedo_wide_1x.
  $styles['zoombreakpoints_theme_domainedo_wide_1x'] = array(
    'label' => 'zoombreakpoints_theme_domainedo_wide_1x',
    'effects' => array(
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 283,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
