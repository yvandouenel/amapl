Drupal.behaviors.feature_event = {
  attach: function (context, settings) {

    jQuery('#subscription-form').hide();
    /* Gestion du texte des conditions ********************************************************************************/
    jQuery('.form-item-field-conditions-inscription-und .description').hide();
    var link_open_close = jQuery('<div>',{
      id: 'open-close-condition-description',
      text: 'Voir les conditions'
    });
    jQuery(".form-item-field-conditions-inscription-und label").after(link_open_close);

    link_open_close.click(function(e) {
      jQuery('.form-item-field-conditions-inscription-und .description').toggle();

      link_open_close.text(jQuery('.form-item-field-conditions-inscription-und .description').is(':visible') ?
        "Cacher les conditions" : 'Voir les conditions');

      e.preventDefault();
      });
    /* Gestion de l'envoi des dates ***********************************************************************************/
    if(jQuery(".field-name-field-dates-lieu-formateur- .field-item").length) {
      jQuery("#edit-field-date-et-lieu-und-0-value").hide();
      var select = jQuery('<select id="select-date-lieu-formateur"></select>');
      jQuery(".field-name-field-dates-lieu-formateur- .field-item").each(function(index) {
        //console.log(jQuery(this).text());
        if(!index) {
          jQuery('<option>', {
            value: '',
            text: "Choisissez une session"
          }).appendTo(select);
        }
        jQuery('<option>', {
          value: jQuery(this).text(),
          text: jQuery(this).text()
        }).appendTo(select);
      });
      jQuery("#field-date-et-lieu-add-more-wrapper label").after(select);
      //select.prependTo("#field-date-et-lieu-add-more-wrapper");

      /* l'option choisie remplit la zone de texte */
      jQuery(select).on('change', select, function () {
        jQuery("#edit-field-date-et-lieu-und-0-value").val(jQuery(this).find(":selected").text());
        //$('#txtEntry2').text($(this).find(":selected").text());
      });
    }

    /* Gestion de l'apparation du formulaire **************************************************************************/
    jQuery('#open-subscription h3').click(function(e) {
      jQuery('#subscription-form').lightbox_me({
        centered: true,
        onLoad: function() {
          jQuery('#subscription-form').find('input:first').focus()
        }
      });
      e.preventDefault();
    });


    /*$('.example', context).click(function () {
      $(this).next('ul').toggle('show');
    });*/
  }
};


/*
(function ($) {

  if (jQuery) {
    // jQuery is loaded
    console.log("Yeah!");
    console.log(jQuery("body").text());

  } else {
    // jQuery is not loaded
    console.log("Doesn't Work");
  }

  console.log("You are running jQuery version: " + $.fn.jquery );
  jQuery(document).ready(function () {
    console.log("You xxx");
  });




  /!*$('#open-subscription').click(function(e) {
    $('#subscription-form').lightbox_me({
      centered: true,
      onLoad: function() {
        $('#subscription-form').find('input:first').focus()
      }
    });
    e.preventDefault();
  });*!/
  //$("#open-subscription").colorbox({width:"600px", inline:true, href:"#subscription-form"});
  //$("#open-subscription").colorbox({rel:'#subscription-form'});
// Here we immediately call the function with jQuery as the parameter.
}(jQuery));*/
