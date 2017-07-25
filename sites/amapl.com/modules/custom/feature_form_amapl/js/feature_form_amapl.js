(function ($) {

  Drupal.behaviors.form_amapl = {
    attach: function (context, settings) {
      var price, begin_activity_year, autoentrepreneur, societe_unipersonnelle, societe, professional;
      societe = false;
      societe_unipersonnelle = false;
      professional = true;

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
        console.log("Societe : " + societe);
        console.log("societe_unipersonnelle : " + societe_unipersonnelle);
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
          price = "97€TTC";
        }

        // calcul du prix en fonction du statut : micro-bnc ou autoentrepreneur
        else if (autoentrepreneur) {
          price = "97€TTC";
        }

        else if (societe_unipersonnelle) {
          price = "195€TTC";
        }
        else if (societe) {
          price = "312€TTC";
        }
        else {
          price = "195€TTC";
        }
        $("#edit-field-prix-und-0-value").val(price);
      }
    }
  };
}(jQuery))

/*
 // ----------- TECHNICAL FIELDS HANDLING -------------------------------------------------------------------------
 // We hide field Action
 $('#edit-field-need-action').hide();

 // ----------- SOLUTION FIELDS HANDLIGN --------------------------------------------------------------------------
 // First, we get the value of radio button field_solution_found (no = 0, yes = 1).
 var initialSolutionFoundValue = $('#edit-field-solution-found input[type=radio]:checked').val();
 // If 'no', we must hide field_solution_details.
 if (initialSolutionFoundValue == 0) {
 $('#edit-field-solution-details').hide();
 }
 // Then, we handle radio button change.
 $('#edit-field-solution-found input[type=radio]').change(function () {
 if ($('#edit-field-solution-found input[type=radio]:checked').val() == 1) {
 $('#edit-field-solution-details').show(1000);
 }
 else {
 $('#edit-field-solution-details').hide(1000);
 }
 });

 var client_uuids = settings.crealead_needs_clients;

 var initialCrealeadName = $('#edit-field-crealead-name-und-0-value').val();
 var initialContactName = $('#edit-field-need-contact-name-und-0-value').val();
 var initialContactDetails = $('#edit-field-need-contact-details-und-0-value').val();

 var initialClientValue = $('#edit-field-need-client-und').val();

 if (initialClientValue == '_none') {
 $('#edit-field-crealead-name').hide();
 $('.group-need-contact-infos').hide();
 }
 else {
 if (client_uuids[initialClientValue] == '7b581fb4-6fcb-4be4-8f14-53f14dc4f3d4') { // Client externe.
 $('#edit-field-crealead-name').hide();
 }
 else if (client_uuids[initialClientValue] == '7a01c453-5ac3-42a6-a374-ee9d26137a2f') { // Crealead Structure
 $('.group-need-contact-infos').hide();
 }
 }

 // Client field change handling.
 $('#edit-field-need-client-und').change(function() {
 var selectedClientValue = $('#edit-field-need-client-und option:selected').val();

 // 1 - Fields content handling
 if (selectedClientValue == '_none') {
 // _none value is available only on Creation mode, so we can empty all client fields values.
 $('#edit-field-crealead-name-und-0-value').val('');
 $('#edit-field-need-contact-name-und-0-value').val('');
 $('#edit-field-need-contact-details-und-0-value').val('');
 }
 else {
 var selectedClientUuid = client_uuids[selectedClientValue];
 var connectedUser = settings.crealead_needs_connected_user;

 if (selectedClientValue == initialClientValue) {
 $('#edit-field-crealead-name-und-0-value').val(initialCrealeadName);
 $('#edit-field-need-contact-name-und-0-value').val(initialContactName);
 $('#edit-field-need-contact-details-und-0-value').val(initialContactDetails);
 }
 else {
 $('#edit-field-crealead-name-und-0-value').val(connectedUser.name);
 $('#edit-field-need-contact-name-und-0-value').val(connectedUser.name);
 $('#edit-field-need-contact-details-und-0-value').val(connectedUser.mail);

 if (selectedClientUuid == '7a01c453-5ac3-42a6-a374-ee9d26137a2f') { // Crealead Structure
 $('#edit-field-need-contact-name-und-0-value').val('');
 $('#edit-field-need-contact-details-und-0-value').val('');
 }
 else if (selectedClientUuid == '7b581fb4-6fcb-4be4-8f14-53f14dc4f3d4') { // Client externe
 $('#edit-field-crealead-name-und-0-value').val('');
 $('#edit-field-need-contact-name-und-0-value').val('');
 $('#edit-field-need-contact-details-und-0-value').val('');
 }
 }
 }

 // 2 - Fields visibility handling
 if (selectedClientValue == '_none') {
 $('#edit-field-crealead-name').hide(500);
 $('.group-need-contact-infos').hide(500);
 }
 else if (selectedClientUuid == '7b581fb4-6fcb-4be4-8f14-53f14dc4f3d4') { // Client externe
 $('#edit-field-crealead-name').hide(250);
 $('.group-need-contact-infos').show(500);
 }
 else if (selectedClientUuid == '7a01c453-5ac3-42a6-a374-ee9d26137a2f') { // Crealead Structure
 $('#edit-field-crealead-name').show(500);
 $('.group-need-contact-infos').hide(250);
 }
 else  {
 $('#edit-field-crealead-name').show(500);
 $('.group-need-contact-infos').show(500);
 }
 });

 ;
 */
