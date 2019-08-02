(function($) {
  Drupal.behaviors.form_amapl = {
    attach: function(context, settings) {
      // spécifique aux CAA *******************************************
      if ($(".field-name-field-date-du").length) {
        $("<a></a>", {
          id: "modify-subscribe-form",
          text: "> Modifier mes informations avant paiement",
          href: "/adherer/formulaire-bic-ba"
        }).appendTo(".group-right");
      } else {
        // spécifique aux PL *****************************************
        $("<a></a>", {
          id: "modify-subscribe-form",
          text: "> Modifier mes informations avant paiement",
          href: "/adherer/formulaire"
        }).appendTo(".group-right");
      }

      console.log("Dans feature_view_form_amapl.js");
      $("<h3></h3>", {
        id: "h3-payment-online",
        text: "Paiement en ligne :"
      }).prependTo(".group-footer");

      if ($("#title-payment-history").length) {
        $("#payment-form-standalone").hide();
        $("<button></button>", {
          id: "view-payment",
          text: "Effectuer un nouveau payement",
          click: function(event) {
            $("#payment-form-standalone").show();
          }
        }).insertAfter(".field-name-field-historique-paiement");
      }
    }
  };
})(jQuery);
