(function ($) {
  Drupal.behaviors.feature_form_amapl = {
    attach: function (context, settings) {
      console.log("dans feature_form_amapl.js");
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
      var guid = function () {
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



      $("#edit-field-prix-und-0-value").prop("readonly", true);

      //$(".form-item .description").hide(0);
      // changement de texte pour le choix de l'année
      $('select#edit-field-pour-les-revenus-und option:contains("Choisir")').text('-- Choisissez une année --');
      // Effacer l'année 2017
      $('select#edit-field-pour-les-revenus-und option:contains("2017")').hide();
      // Effacer l'année 2018
      $('select#edit-field-pour-les-revenus-und option:contains("2018")').hide();
      // Effacer l'année 2019
      $('select#edit-field-pour-les-revenus-und option:contains("2019")').hide();
      // Effacer l'année 2020
      $('select#edit-field-pour-les-revenus-und option:contains("2020")').hide();

      $('select#edit-field-pour-les-revenus-und option').removeAttr('selected');
      $('select#edit-field-pour-les-revenus-und option:last').attr('selected','selected');

      // gestion initiale des champs
      formeJuridique();
      calculatePrice();
      manageFields();
      manageYears();
      newSubmission();


      /* Gestion des infobulles ***************************************************************************************/
      $(".form-item .description").each(function () {
        var field_description = $(this);

        if ((!$(this).parent(".form-item").hasClass("form-item-field-nom-prenom-und-0-value")) &&
          (!$(this).parent(".form-item").hasClass('form-item-field-date-debut-und-0-value-date')) &&
          (!$(this).parent(".form-item").hasClass('form-item-field-cgv-und'))) {

          $(this).hide(0);
          var infobulle = $('<img class="view-info" src="/sites/amapl.com/themes/custom/lppl/images/icons/infobulle.gif" />');
            /* console.log("objet : ");
            console.log($(this));
            console.log("son parent : ");
            console.log($(this).parent()); */

            console.log("class du parent : " + $(this).parent().attr('class') + " a comparer avec form-type-textarea ");
          if ($(this).parent().hasClass("form-type-textarea")) {
            infobulle.insertBefore($(".form-textarea", $(this).parent()));
            infobulle.css({
              "margin-top": "-10px",
              "display": "block",
              "float": "right",
              "margin-right": "-30px"
             });
            //console.log("Tjs et encore dans la gestion des infobulles ");
          } else {
            infobulle.insertAfter($(this).siblings('input'));
          }

          infobulle.click(function (event) {
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
      $("#edit-field-provenance-und").change(function () {

        if ($("#edit-field-provenance-und").val() == "Autres (saisissez un texte personnalisé)") {
          $("#field-autre-provenance-add-more-wrapper").show();
        } else {
          $("#edit-field-autre-provenance-und-0-value").val("");
          $("#field-autre-provenance-add-more-wrapper").hide();
        }
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

        other_form = ($("#edit-field-forme-juridique-und-autre").is(":checked"))
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
        if ($("#edit-field-provenance-und").val() == "Autres (saisissez un texte personnalisé)") {
          $("#field-autre-provenance-add-more-wrapper").show();
        } else {
          $("#field-autre-provenance-add-more-wrapper").hide();
        }

      }

      /*
        Gere l'affichage des années pour les revenus
      */
      function manageYears() {
        //efface 2017
        $("#edit-field-pour-les-revenus-und option[value=2017]").hide();
      }
      function newSubmission() {
        if (!$("#new-submission").lenght) {
          $("<div></div>", {
            "id": "new-submission",
            "text": "Nouvelle inscription : réinitialiser le formulaire",
          }).insertAfter(".pre-instructions");
        }
        $("#new-submission").click(function () {
          var nomsystem = $('#edit-field-paiement-und-line-item-container-0-name').val();
          $('#inscription-amapl-entityform-edit-form').trigger("reset");
          $('#inscription-amapl-entityform-edit-form').find('input:text, input:password, select, textarea').val('');
          $('#inscription-amapl-entityform-edit-form').find('input:radio, input:checkbox').prop('checked', false);
          $('select#edit-field-pour-les-revenus-und option:last').attr('selected','selected');
          $('#edit-field-paiement-und-line-item-container-0-quantity').val(1);
          $('#edit-field-paiement-und-line-item-container-0-tax-rate').val(20);
          $('#edit-field-paiement-und-line-item-container-0-name').val(nomsystem);
          calculatePrice();
        });
      }

      /*
       Calcul global du prix de la cotisation
       */
      function calculatePrice() {
        console.log("dans calculatePrice");

        autoentrepreneur = $("#edit-field-micro-autoentrepreneur-und").is(":checked") ? true : false;
        console.log("autoentrepreneur : " + autoentrepreneur);
        first_adhesion = $("#edit-field-type-adhesion-und-premire-adhsion-une-association-agre").is(":checked") ? true : false;

        // Année de début d'activité
        if (jQuery.type($("#edit-field-date-debut-und-0-value-datepicker-popup-0").val()) === "string" &&
          $("#edit-field-date-debut-und-0-value-datepicker-popup-0").val().length == 10) {
          begin_activity_year = $("#edit-field-date-debut-und-0-value-datepicker-popup-0").val().substr($("#edit-field-date-debut-und-0-value-datepicker-popup-0").val().length - 4);
        } else begin_activity_year = undefined;
        console.log("Année de début d'activité : " + begin_activity_year);
        // Année des revenus
        if ($("#edit-field-pour-les-revenus-und").val() == "2017") {
          year_income = 2017;
        }
        else if ($("#edit-field-pour-les-revenus-und").val() == "2018") {
          year_income = 2018;
        }
        else if ($("#edit-field-pour-les-revenus-und").val() == "2019") {
          year_income = 2019;
        }
        else if ($("#edit-field-pour-les-revenus-und").val() == "2020") {
          year_income = 2020;
        }
        else if ($("#edit-field-pour-les-revenus-und").val() == "2021") {
          year_income = 2021;
        }
        else if ($("#edit-field-pour-les-revenus-und").val() == "2022") {
          year_income = 2022;
        }
        else year_income = undefined;
        console.log("Année des revenus : " + year_income);
        // Micro BNC ou première adhésion avec une création d'activité la même année
        if (autoentrepreneur ||
          (($("#edit-field-forme-juridique-und-ei").is(":checked") && year_income == 2017 && begin_activity_year == 2017 && first_adhesion)
            || ($("#edit-field-forme-juridique-und-ei").is(":checked") && year_income == 2018 && begin_activity_year == 2018 && first_adhesion))
          || ($("#edit-field-forme-juridique-und-ei").is(":checked") && year_income == 2019 && begin_activity_year == 2019 && first_adhesion)
          || ($("#edit-field-forme-juridique-und-ei").is(":checked") && year_income == 2020 && begin_activity_year == 2020 && first_adhesion)
          || ($("#edit-field-forme-juridique-und-ei").is(":checked") && year_income == 2022 && begin_activity_year == 2022 && first_adhesion)) {
          if (year_income == 2017) price = "82.5";//80.833333333
          else if (year_income == 2018) price = "82.5";
          else if (year_income == 2019) price = "82.5";
          else if (year_income == 2020) price = "82.5";
          else if (year_income == 2021) price = "82.5";
          else if (year_income == 2022) price = "82.5";
        }

        else if (societe_unipersonnelle) {
          if (year_income == 2017) price = "165";//162.5
          else if (year_income == 2018) price = "165";
          else if (year_income == 2019) price = "165";
          else if (year_income == 2020) price = "165.833333333";
          else if (year_income == 2021) price = "165.833333333";
          else if (year_income == 2022) price = "165.833333333";
        }
        else if (societe || (other_form && $("#edit-field-nombre-associes-und-0-value").val() > 1)) {
          console.log("choix année", year_income);

          if (year_income == 2017) price = "265";//260
          else if (year_income == 2018) price = "265";
          else if (year_income == 2019) price = "265";
          else if (year_income == 2020) price = "265.833333333";
          else if (year_income == 2021) price = "265.833333333";
          else if (year_income == 2022) price = "265.833333333";
        }
        else if (no_juridic_form) {
          price = null;
        }
        else {
          if (year_income == 2017) price = "165";//162.5
          else if (year_income == 2018) price = "165";
          else if (year_income == 2019) price = "165";
          else if (year_income == 2020) price = "165.833333333";
          else if (year_income == 2022) price = "165.833333333";
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
