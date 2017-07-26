(function ($) {

  Drupal.behaviors.form_amapl = {
    attach: function (context, settings) {
      var price, begin_activity_year, autoentrepreneur, societe_unipersonnelle, societe, professional;
      societe = false;
      societe_unipersonnelle = false;
      professional = true;

      //user identification
      var guid = function() {
        var nav = window.navigator;
        var screen = window.screen;
        var guid = nav.mimeTypes.length;
        guid += nav.userAgent.replace(/\D+/g, '');
        guid += nav.plugins.length;
        guid += screen.height || '';
        guid += screen.width || '';
        guid += screen.pixelDepth || '';

        return guid;
      };

      var this_year = new Date().getFullYear();

      // gestion initiale des champs
      formeJuridique();
      manageFields();

      $("#edit-field-prix-und-0-value").prop("readonly", true);

      /* Gestion des événements ***************************************************************************************/
      // Changement de date de création de l'entreprise
      $("#edit-field-date-debut-und-0-value-datepicker-popup-0").change(function () {
        calculatePrice();
      });
      // micro-bnc ou autoentrepreneur
      $("#edit-field-micro-autoentrepreneur-und").change(function () {
        calculatePrice();

      });
      // Changement de statut
      $("#edit-field-forme-juridique-und input").change(function () {
        formeJuridique();
        manageFields();
        calculatePrice();
      });

      // professionnel ?
      $("#edit-field-non-pro-und").change(function () {
        formeJuridique();
        manageFields();
      });
      // Type d'adhésion
      $("#edit-field-type-adhesion-und input").change(function () {
        manageFields();
      });
      // Assistance d'un pro ?
      $("#edit-field-assistance input").change(function () {
        manageFields();
      });


      /* Fin de gestion des événements ********************************************************************************/
      function formeJuridique() {
        // Société unipersonnelle ?
        societe_unipersonnelle = (
        $("#edit-field-forme-juridique-und-ei").is(":checked") ||
        $("#edit-field-forme-juridique-und-eurl").is(":checked") ||
        $("#edit-field-forme-juridique-und-selarl").is(":checked"))
          ? true : false;

        // Société ?
        societe = (
        $("#edit-field-forme-juridique-und-scp").is(":checked") ||
        $("#edit-field-forme-juridique-und-sep").is(":checked") ||
        $("#edit-field-forme-juridique-und-sdf").is(":checked"))
          ? true : false;

      }

      function manageFields() {
        /*console.log("Societe : " + societe);
        console.log("societe_unipersonnelle : " + societe_unipersonnelle);*/

        if (!$("#edit-field-forme-juridique-und-autre").attr('checked')) {
          $("#field-fj-autre-add-more-wrapper").hide();
        }
        if (societe) {
          $("#field-nombre-associes-add-more-wrapper").hide();
        }
        if (societe || societe_unipersonnelle) {
          console.log("Je dois effacer le champ non pro");
          professionnal = true;
          $("#edit-field-non-pro").hide().find("input").attr('checked', false);
          $("#field-fj-autre-add-more-wrapper").hide();
          $("#edit-field-siret").show();
          console.log($("#edit-field-siret").val());
          if ($("#edit-field-siret-und-0-value").val() == "Pas de siret") $("#edit-field-siret-und-0-value").val('');
        } else {
          $("#field-fj-autre-add-more-wrapper").show();
          $("#edit-field-non-pro").show();
          if($("#edit-field-non-pro-und").is(":checked")){
            $("#edit-field-siret").hide().find("input").val("Pas de siret");
          }else{
            $("#edit-field-siret").show().find("input").val("");
          }
        }
        if (societe_unipersonnelle) {
          $("#field-nombre-associes-add-more-wrapper").hide();
          $("#edit-field-micro-autoentrepreneur").show();
        }
        else if (societe) {
          $("#edit-field-micro-autoentrepreneur").hide().find("input").attr('checked', false);
          $("#field-nombre-associes-add-more-wrapper").show();
        }
        else {
          $("#field-nombre-associes-add-more-wrapper").show();
          $("#edit-field-micro-autoentrepreneur").show()
        }
        if (!$("#edit-field-type-adhesion-und-autre").is(":checked")) {
          $("#edit-field-autre-type-adhesion").hide();
        } else {
          $("#edit-field-autre-type-adhesion").show();
        }
        if (!$("#edit-field-type-adhesion-und-transfert").is(":checked")) {
          $("#edit-field-autre-aga").hide();
        } else {
          $("#edit-field-autre-aga").show();
        }
        if ($("#edit-field-assistance-und-non").is(":checked")) {
          $(".group-tenue .field-type-text").hide();
        } else {
          $(".group-tenue .field-type-text").show();
        }
        if ($("#edit-field-paiement-und-line-item-container-0-description").val() == '') {
          $("#edit-field-paiement-und-line-item-container-0-description").val(guid);
        }

      }


      /*
       Calcul global du prix de la cotisation
       */
      function calculatePrice() {
        autoentrepreneur = $("#edit-field-micro-autoentrepreneur-und").is(":checked") ? true : false;

        // Année de début d'activité
        if (jQuery.type($("#edit-field-date-debut-und-0-value-datepicker-popup-0").val()) === "string" &&
          $("#edit-field-date-debut-und-0-value-datepicker-popup-0").val().length == 10) {
          begin_activity_year = $("#edit-field-date-debut-und-0-value-datepicker-popup-0").val().substr($("#edit-field-date-debut-und-0-value-datepicker-popup-0").val().length - 4);
        } else begin_activity_year = undefined;


        // calcul du prix en fonction de la date de création de l'entreprise
        if (begin_activity_year && begin_activity_year == this_year) {
          price = "80.83";
        }

        // calcul du prix en fonction du statut : micro-bnc ou autoentrepreneur
        else if (autoentrepreneur) {
          price = "80.83";
        }

        else if (societe_unipersonnelle) {
          price = "162.5";
        }
        else if (societe) {
          price = "260";
        }
        else {
          price = "162.5";
        }
        $("#edit-field-prix-und-0-value").val(Math.round(price * 1.2));
        $("#edit-field-paiement-und-line-item-container-0-amount").val(price);

      }
    }
  };
}(jQuery))
