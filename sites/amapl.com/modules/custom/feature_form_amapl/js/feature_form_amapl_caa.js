(function($) {
  Drupal.behaviors.feature_form_amapl = {
    attach: function(context, settings) {
      console.log("Dans feature_form_amapl_caa.js");
      let price,
        begin_fiscal_year,
        begin_activity_year,
        this_year,
        individual_company,
        first_membership;
      first_membership = false;
      individual_company = false;
      first_adhesion = false;
      no_juridic_form = true;
      price = (247 / 1.2).toFixed(10);
      console.log("Premier prix : " + price);
      this_year = new Date().getFullYear();

      //user identification
      var guid = function() {
        var nav = window.navigator;
        var screen = window.screen;
        var guid = nav.mimeTypes.length;
        guid += nav.userAgent.replace(/\D+/g, "");
        guid += nav.plugins.length;
        guid += screen.height || "";
        guid += screen.width || "";
        guid += screen.pixelDepth || "";
        return guid;
      };

      // gestion initiale des champs
      formeJuridique();
      calculatePrice();
      manageFields();
      newSubmission();

      $("#edit-field-prix-caa-und-0-value").prop("readonly", true);

      /* Gestion des infobulles ***************************************************************************************/
      $(".form-item .description").each(function() {
        var field_description = $(this);

        if (
          !$(this)
            .parent(".form-item")
            .hasClass("form-item-field-nom-prenom-und-0-value") &&
          !$(this)
            .parent(".form-item")
            .hasClass("form-item-field-date-debut-und-0-value-date") &&
          !$(this)
            .parent(".form-item")
            .hasClass("form-item-field-cgv-und")
        ) {
          $(this).hide(0);
          var infobulle = $(
            '<img class="view-info" src="/sites/amapl.com/themes/custom/lppl/images/icons/infobulle.gif" />'
          );
          /* console.log("objet : ");
            console.log($(this));
            console.log("son parent : ");
            console.log($(this).parent()); */

          console.log(
            "class du parent : " +
              $(this)
                .parent()
                .attr("class") +
              " a comparer avec form-type-textarea "
          );
          if (
            $(this)
              .parent()
              .hasClass("form-type-textarea")
          ) {
            infobulle.insertBefore($(".form-textarea", $(this).parent()));
            infobulle.css({
              "margin-top": "-10px",
              display: "block",
              float: "right",
              "margin-right": "-30px"
            });
            //console.log("Tjs et encore dans la gestion des infobulles ");
          } else {
            infobulle.insertAfter($(this).siblings("input"));
          }

          infobulle.click(function(event) {
            field_description.slideToggle();
          });
        }
      });

      /* Gestion des événements ***************************************************************************************/
      // Changement de date de début d'exercice comptable
      $("#edit-field-date-du-und-0-value-datepicker-popup-0").change(
        function() {
          calculatePrice();
        }
      );

      // Changement de date de début d'activité
      $("#edit-field-date-debut-und-0-value-datepicker-popup-0").change(
        function() {
          calculatePrice();
        }
      );

      // Chagement de régime déclaratif dont « Micro-BIC/BA »
      $("#edit-field-regime-declaratif-und input").change(function() {
        calculatePrice();
      });

      // Changement de forme juridique dont "entreprise individuelle"
      $("#edit-field-forme-juridique-caa-und input").change(function() {
        formeJuridique();
        manageFields();
        calculatePrice();
      });

      // Changement de type d'adhésion dont "première adhésion"
      $("#edit-field-type-adhesion-caa-und input").change(function() {
        formeJuridique();
        manageFields();
        calculatePrice();
      });

      // Assistance d'un pro ?
      $("#edit-field-assistance input").change(function() {
        manageFields();
      });
      $("#edit-field-provenance-und").change(function() {
        if (
          $("#edit-field-provenance-und").val() ==
          "Autres (saisissez un texte personnalisé)"
        ) {
          $("#field-autre-provenance-add-more-wrapper").show();
        } else {
          $("#edit-field-autre-provenance-und-0-value").val("");
          $("#field-autre-provenance-add-more-wrapper").hide();
        }
      });

      /* Fin de gestion des événements ********************************************************************************/
      function formeJuridique() {
        other_form = $("#edit-field-forme-juridique-caa-und-autre").is(
          ":checked"
        )
          ? true
          : false;
      }

      function manageFields() {
        console.log("Dans manageField : ");
        console.log("prix : ", price);
        $("#edit-field-prix-caa-und-0-value").hide(0);
        if (price !== null && price !== undefined) {
          //console.log("Prix défini...");
          $(".form-item-field-prix-caa-und-0-value label").html(
            Math.round(price * 1.2) + " €TTC"
          );
        } else {
          $(".form-item-field-prix-caa-und-0-value label").text(
            "Le montant de la cotisation sera calculé en fonction vos données."
          );
        }
        if (!$("#edit-field-forme-juridique-caa-und-autre").is(":checked")) {
          $("#field-fj-autre-add-more-wrapper").hide();
          $("#edit-field-fj-autre-und-0-value").val("");
        } else {
          $("#field-fj-autre-add-more-wrapper").show();
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
        if (
          $(
            "#edit-field-paiement-und-line-item-container-0-description"
          ).val() == ""
        ) {
          $("#edit-field-paiement-und-line-item-container-0-description").val(
            guid
          );
        }
        if (
          $("#edit-field-provenance-und").val() ==
          "Autres (saisissez un texte personnalisé)"
        ) {
          $("#field-autre-provenance-add-more-wrapper").show();
        } else {
          $("#field-autre-provenance-add-more-wrapper").hide();
        }
      }

      function newSubmission() {
        if (!$("#new-submission").lenght) {
          $("<div></div>", {
            id: "new-submission",
            text: "Nouvelle inscription : réinitialiser le formulaire"
          }).insertAfter(".pre-instructions");
        }
        $("#new-submission").click(function() {
          var nomsystem = $(
            "#edit-field-paiement-und-line-item-container-0-name"
          ).val();
          $("#inscription-amapl-entityform-edit-form").trigger("reset");
          $("#inscription-amapl-entityform-edit-form")
            .find("input:text, input:password, select, textarea")
            .val("");
          $("#inscription-amapl-entityform-edit-form")
            .find("input:radio, input:checkbox")
            .prop("checked", false);
          $("#edit-field-paiement-und-line-item-container-0-quantity").val(1);
          $("#edit-field-paiement-und-line-item-container-0-tax-rate").val(20);
          $("#edit-field-paiement-und-line-item-container-0-name").val(
            nomsystem
          );
          calculatePrice();
        });
      }

      /*
       Calcul global du prix de la cotisation
       */
      function calculatePrice() {
        console.log("dans calculatePrice");
        // calcul de l'année de début de l'exercice comptable
        let begin_date = $(
          "#edit-field-date-du-und-0-value-datepicker-popup-0"
        ).val();
        begin_date = begin_date
          .split("/")
          .reverse()
          .join("-");
        begin_fiscal_year = new Date(begin_date).getFullYear();
        console.log("begin_fiscal_year :", begin_fiscal_year);

        // Calcul de l'année de début d'activité
        begin_date = $(
          "#edit-field-date-debut-und-0-value-datepicker-popup-0"
        ).val();
        begin_date = begin_date
          .split("/")
          .reverse()
          .join("-");
        begin_activity_year = new Date(begin_date).getFullYear();

        // compagnie individuelle ?
        individual_company = $("#edit-field-forme-juridique-caa-und-ei").is(
          ":checked"
        )
          ? true
          : false;
        console.log("individual_company : " + individual_company);

        // Première adhésion ?
        first_membership = $(
          "#edit-field-type-adhesion-caa-und-premire-adhsion-un-cga-ou-un-omga"
        ).is(":checked")
          ? true
          : false;
        console.log("first_membership : " + first_membership);

        // si case « Micro-BIC/BA » cochée → 99€.
        if ($("#edit-field-regime-declaratif-und-micro").is(":checked")) {
          price = (99 / 1.2).toFixed(10);
        } else if (
        /* si date de début d’exercice comptable (begin_fiscal_year) égale à 2019 et année
        de début d’activité égales à 2019 et entreprise individuelle et première adhésion → 99€.  */
          begin_fiscal_year == this_year &&
          begin_activity_year == this_year &&
          individual_company == true &&
          first_membership == true
        ) {
          price = (99 / 1.2).toFixed(10);
        } else {
          price = (247 / 1.2).toFixed(10);
        }

        // Changement du prix dans le champ "Payment form"
        if (price !== null && price !== undefined) {
          //console.log("Prix dans le if : " + price);
          $("#edit-field-prix-und-0-value").val(Math.round(price * 1.2)).hide();
          $(".form-item-field-prix-caa-und-0-value label").html(
            Math.round(price * 1.2) + " €TTC"
          );
          $("#edit-field-paiement-caa-und-line-item-container-0-amount").val(
            price
          );
        }
        console.log("Prix final dans calculatePrice : " + price);
      }
    }
  };
})(jQuery);
