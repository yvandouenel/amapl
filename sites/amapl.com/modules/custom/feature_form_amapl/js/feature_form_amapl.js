(function ($) {
  Drupal.behaviors.feature_form_amapl = {
    attach: function (context, settings) {
      var price,
        begin_activity_year,
        year_income,
        autoentrepreneur,
        societe_unipersonnelle,
        societe,
        other_form,
        first_adhesion,
        no_juridic_form;
      societe = false;
      societe_unipersonnelle = false;
      other_form = false;
      first_adhesion = false;
      no_juridic_form = true;

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
      calculatePrice();
      manageFields();

      $("#edit-field-prix-und-0-value").prop("readonly", true);
      //$(".form-item .description").hide(0);
      // changement de texte pour le choix de l'année
      $('select#edit-field-pour-les-revenus-und option:contains("Choisir")').text('-- choisissez une année --');

      /* Gestion des infobulles ***************************************************************************************/
      $(".form-item .description").each(function() {
        var field_description = $(this);

        if((!$(this).parent(".form-item").hasClass("form-item-field-nom-prenom-und-0-value")) &&
          (!$(this).parent(".form-item").hasClass('form-item-field-date-debut-und-0-value-date')) &&
          (!$(this).parent(".form-item").hasClass('form-item-field-cgv-und'))) {

          $(this).hide(0);
          var infobulle = $( '<img class="view-info" src="/sites/amapl.com/themes/custom/lppl/images/icons/infobulle.gif" />');
          infobulle.insertAfter( $(this).siblings('input'));
          infobulle.click(function( event ) {
            field_description.slideToggle();
          });

        }

      });

      /* Gestion des événements ***************************************************************************************/
      // Changement d'année de déclaration des revenus
      $("#edit-field-pour-les-revenus-und").change(function () {
        calculatePrice();
      });

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
      // Changement de nb d'associeés
      $("#edit-field-nombre-associes-und-0-value").change(function () {
        calculatePrice();
      });
      // Changement de type d'adhesion
      $(".form-item-field-type-adhesion-und input").change(function () {
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

        other_form = ( $("#edit-field-forme-juridique-und-autre").is(":checked") )
          ? true : false;

        no_juridic_form = (societe_unipersonnelle || societe || other_form) ? false : true;
        //console.log("no_juridic_form : " + no_juridic_form);

      }

      function manageFields() {
        //console.log("Prix dans manageField : " + price);
        $("#edit-field-prix-und-0-value").hide(0);
        if (price !== null && price !== undefined) {
          //console.log("Prix défini...");
          $(".form-item-field-prix-und-0-value label").html(Math.round(price * 1.2) + " €TTC");
        }
        else {
          $(".form-item-field-prix-und-0-value label").text("Le montant de la cotisation sera calculé en fonction vos données.");
        }

        if (!$("#edit-field-forme-juridique-und-autre").is(":checked")) {
          $("#field-fj-autre-add-more-wrapper").hide();
          $("#field-nombre-associes-add-more-wrapper").hide();
          $("#edit-field-fj-autre-und-0-value").val("");
          $("#edit-field-nombre-associes-und-0-value").val("");
        }
        else {
          $("#field-fj-autre-add-more-wrapper").show();
          $("#field-nombre-associes-add-more-wrapper").show();
        }
        if (societe) {
          $("#field-nombre-associes-add-more-wrapper").hide();
        }
        if (societe || societe_unipersonnelle) {
          professionnal = true;
          $("#edit-field-non-pro").hide().find("input").attr('checked', false);
          $("#field-fj-autre-add-more-wrapper").hide();
        }
        if (societe_unipersonnelle) {
          $("#field-nombre-associes-add-more-wrapper").hide();
          $("#edit-field-micro-autoentrepreneur").show();
        }
        else if (societe) {
          $("#edit-field-micro-autoentrepreneur").hide().find("input").attr('checked', false);
        }
        else {
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
        first_adhesion = $("#edit-field-type-adhesion-und-premiere").is(":checked") ? true : false;

        // Année de début d'activité
        if (jQuery.type($("#edit-field-date-debut-und-0-value-datepicker-popup-0").val()) === "string" &&
          $("#edit-field-date-debut-und-0-value-datepicker-popup-0").val().length == 10) {
          begin_activity_year = $("#edit-field-date-debut-und-0-value-datepicker-popup-0").val().substr($("#edit-field-date-debut-und-0-value-datepicker-popup-0").val().length - 4);
        } else begin_activity_year = undefined;

        // Année des revenus
        if ($("#edit-field-pour-les-revenus-und").val() == "2017") {
          year_income = 2017;
        }
        else if ($("#edit-field-pour-les-revenus-und").val() == "2018") {
          year_income = 2018;
        }
        else year_income = undefined;
        console.log("year_income : " + year_income);

        // Micro BNC ou première adhésion avec une création d'activité en 2017
        if (autoentrepreneur ||
          ($("#edit-field-forme-juridique-und-ei").is(":checked") && year_income == 2017 && begin_activity_year == 2017 && first_adhesion)
        || ($("#edit-field-forme-juridique-und-ei").is(":checked") && year_income == 2018 && begin_activity_year == 2018 && first_adhesion)) {
          if (year_income == 2017) price = "80.833333333";
          else if (year_income == 2018) price = "82.5";
        }

        else if (societe_unipersonnelle) {
          if (year_income == 2017) price = "162.5";
          else if (year_income == 2018) price = "165";
            }
        else if (societe || (other_form && $("#edit-field-nombre-associes-und-0-value").val() > 1)) {
          if (year_income == 2017) price = "260";
          else if (year_income == 2018) price = "265";
        }
        else if (no_juridic_form) {
          price = null;
        }
        else {
          if (year_income == 2017) price = "162.5";
          else if (year_income == 2018) price = "165";
        }
        if (price !== null && price !== undefined) {
          //console.log("Prix dans le if : " + price);
          $("#edit-field-prix-und-0-value").val(Math.round(price * 1.2)).hide();
          $(".form-item-field-prix-und-0-value label").html(Math.round(price * 1.2) + " €TTC");
          $("#edit-field-paiement-und-line-item-container-0-amount").val(price);
        }
        //console.log("Prix dans calculatePrice : " + price);

      }
    }
  };
}(jQuery))
