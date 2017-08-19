(function ($) {
  Drupal.behaviors.form_amapl = {
    attach: function (context, settings) {
      console.log();
      window.setTimeout( function(){
        window.location = settings.feature_form_amapl.paymentpath;
      }, 2000 );

    }
  };
}(jQuery))