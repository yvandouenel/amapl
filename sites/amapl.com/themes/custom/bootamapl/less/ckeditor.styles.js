/*
Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/*
 * This file is used/requested by the 'Styles' button.
 * The 'Styles' button is not enabled by default in DrupalFull and DrupalFiltered toolbars.
 */
if(typeof(CKEDITOR) !== 'undefined') {
    CKEDITOR.addStylesSet( 'drupal',
    [
            /* Block Styles */

            // These styles are already available in the "Format" drop-down list, so they are
            // not needed here by default. You may enable them to avoid placing the
            // "Format" drop-down list in the toolbar, maintaining the same features.
            /*
            { name : 'Paragraph'		, element : 'p' },
            { name : 'Heading 1'		, element : 'h1' },
            { name : 'Heading 2'		, element : 'h2' },
            { name : 'Heading 3'		, element : 'h3' },
            { name : 'Heading 4'		, element : 'h4' },
            { name : 'Heading 5'		, element : 'h5' },
            { name : 'Heading 6'		, element : 'h6' },
            { name : 'Preformatted Text', element : 'pre' },
            { name : 'Address'			, element : 'address' },
            */

            { name : 'h2-home-yvan'		, element : 'h2', attributes : { 'class' : 'h2-home' }},
            { name : 'custom-quote'	, element : 'p', attributes : { 'class' : 'custom-quote' }},
            { name : 'important'	, element : 'p', attributes : { 'class' : 'important' }},
            { name : 'list-arrow', element : 'ul', attributes : { 'class' : 'list-arrow' }},
            { name : 'list-arrow-link', element : 'ul', attributes : { 'class' : 'list-arrow-link' }},
            { name : 'separator-grey-bold', element : 'div', attributes : { 'class' : 'separator-grey-bold' }},
            { name : 'separator-blue', element : 'div', attributes : { 'class' : 'separator-blue' }},
            { name : 'separator-blue-bold', element : 'div', attributes : { 'class' : 'separator-blue-bold' }},
            { name : 'separator-transparent', element : 'div', attributes : { 'class' : 'separator-transparent' }},
            /* Inline Styles */

            // These are core styles available as toolbar buttons. You may opt enabling
            // some of them in the "Styles" drop-down list, removing them from the toolbar.

             { name : 'lien-bouton-bleu'	, element : 'a', attributes : { 'class' : 'link-blue-button link-button' }},
             { name : 'lien-bouton-orange'	, element : 'a', attributes : { 'class' : 'link-orange-button link-button' }},
             { name : 'lien-pouce-bleu'	, element : 'a', attributes : { 'class' : 'link-ok link-ok-blue' }},
             { name : 'lien-pouce-orange'	, element : 'a', attributes : { 'class' : 'link-ok link-ok-orange' }},
             /* { name : 'lien-bouton-bleu'		, element : 'a', attributes : { 'class' : 'link-blue-button' }} */

            /* Object Styles */




    ]);
}