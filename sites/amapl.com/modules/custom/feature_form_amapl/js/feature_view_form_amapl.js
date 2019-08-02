(function($) {
  Drupal.behaviors.form_amapl = {
    attach: function(context, settings) {
      // spécifique aux CAA *******************************************
      if ($(".field-name-field-date-du").length) {
        $("<a></a>", {
          id: "modify-subscribe-form",
          text: "> Modifier mes informations avant paiement",
          href: "/adherer/formulaire-bic-ba"
        }).prependTo(".group-left");
        $("#under-main-title").addClass("caa-title");
        $("h2.page-header").addClass("caa-title");
        $("body").addClass("caa-form");
      } else {
        // spécifique aux PL *****************************************
        $("<a></a>", {
          id: "modify-subscribe-form",
          text: "> Modifier mes informations avant paiement",
          href: "/adherer/formulaire"
        }).appendTo(".group-right");
        $("#under-main-title").addClass("pl-title");
        $("h2.page-header").addClass("pl-title");
      }

      // changement d'intitulé du titre
      $("h2.page-header").text("Payer et voir le " + $("h2.page-header").text());

      // On cache les infos
      $(".group-left, .group-right").slideToggle(400);

      // on gère la visualisation des données
      $("<h3></h3>", {
        id: "title-show-hide-form-datas",
        text: "Vérifier les données que je viens de communiquer",
      }).insertAfter(".group-header").click(function(){
        $(".group-left, .group-right").slideToggle(400);
      });

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
