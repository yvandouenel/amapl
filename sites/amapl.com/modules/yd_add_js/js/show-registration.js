Drupal.behaviors.yd_add_js = {
  attach: function (context, settings) {

    jQuery('#subscription-form').hide();

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
