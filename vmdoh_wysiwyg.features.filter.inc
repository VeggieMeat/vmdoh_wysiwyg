<?php
/**
 * @file
 * vmdoh_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function vmdoh_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML (WYSIWYG)
  $formats['filtered_html_wysiwyg_'] = array(
    'format' => 'filtered_html_wysiwyg_',
    'name' => 'Filtered HTML (WYSIWYG)',
    'cache' => '1',
    'status' => '1',
    'weight' => '-10',
    'filters' => array(
      'media_filter' => array(
        'weight' => '-48',
        'status' => '1',
        'settings' => array(),
      ),
      'image_resize_filter' => array(
        'weight' => '-47',
        'status' => '1',
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 0,
          ),
        ),
      ),
      'wysiwyg' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(
          'valid_elements' => 'a[!href|target<_blank|title|class|rel],
    div[align<center?justify?left?right],
    p[align<center?justify?left?right|style],
    img[src|width|height|alt|title|style],
    br,span,em,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,table,th,tr,td',
          'allow_comments' => '0',
          'nofollow_policy' => 'disabled',
          'nofollow_domains' => array(),
          'style_color' => array(
            'color' => 0,
            'background' => 0,
            'background-color' => 0,
            'background-image' => 0,
            'background-repeat' => 0,
            'background-attachment' => 0,
            'background-position' => 0,
          ),
          'style_font' => array(
            'font' => 0,
            'font-family' => 0,
            'font-size' => 0,
            'font-size-adjust' => 0,
            'font-stretch' => 0,
            'font-style' => 0,
            'font-variant' => 0,
            'font-weight' => 0,
          ),
          'style_text' => array(
            'text-align' => 'text-align',
            'text-decoration' => 'text-decoration',
            'text-indent' => 'text-indent',
            'text-transform' => 0,
            'letter-spacing' => 0,
            'word-spacing' => 0,
            'white-space' => 0,
            'direction' => 0,
            'unicode-bidi' => 0,
          ),
          'style_box' => array(
            'margin' => 'margin',
            'margin-top' => 'margin-top',
            'margin-right' => 'margin-right',
            'margin-bottom' => 'margin-bottom',
            'margin-left' => 'margin-left',
            'padding' => 'padding',
            'padding-top' => 'padding-top',
            'padding-right' => 'padding-right',
            'padding-bottom' => 'padding-bottom',
            'padding-left' => 'padding-left',
          ),
          'style_border-1' => array(
            'border' => 0,
            'border-top' => 0,
            'border-right' => 0,
            'border-bottom' => 0,
            'border-left' => 0,
            'border-width' => 0,
            'border-top-width' => 0,
            'border-right-width' => 0,
            'border-bottom-width' => 0,
            'border-left-width' => 0,
          ),
          'style_border-2' => array(
            'border-color' => 0,
            'border-top-color' => 0,
            'border-right-color' => 0,
            'border-bottom-color' => 0,
            'border-left-color' => 0,
            'border-style' => 0,
            'border-top-style' => 0,
            'border-right-style' => 0,
            'border-bottom-style' => 0,
            'border-left-style' => 0,
          ),
          'style_dimension' => array(
            'height' => 0,
            'line-height' => 0,
            'max-height' => 0,
            'max-width' => 0,
            'min-height' => 0,
            'min-width' => 0,
            'width' => 0,
          ),
          'style_positioning' => array(
            'bottom' => 0,
            'clip' => 0,
            'left' => 0,
            'overflow' => 0,
            'right' => 0,
            'top' => 0,
            'vertical-align' => 0,
            'z-index' => 0,
          ),
          'style_layout' => array(
            'float' => 'float',
            'clear' => 0,
            'display' => 0,
            'position' => 0,
            'visibility' => 0,
          ),
          'style_list' => array(
            'list-style' => 'list-style',
            'list-style-image' => 0,
            'list-style-position' => 0,
            'list-style-type' => 0,
          ),
          'style_table' => array(
            'border-collapse' => 'border-collapse',
            'border-spacing' => 'border-spacing',
            'caption-side' => 'caption-side',
            'empty-cells' => 'empty-cells',
            'table-layout' => 'table-layout',
          ),
          'style_user' => array(
            'cursor' => 0,
            'outline' => 0,
            'outline-width' => 0,
            'outline-style' => 0,
            'outline-color' => 0,
            'zoom' => 0,
          ),
          'rule_valid_classes' => array(
            0 => 'colorbox',
            2 => 'colorbox*',
          ),
          'rule_valid_ids' => array(),
          'rule_style_urls' => array(
            0 => '/*',
          ),
        ),
      ),
      'ckeditor_link_filter' => array(
        'weight' => '-45',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '-44',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '-42',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
