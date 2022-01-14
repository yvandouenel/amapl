/**
 * Created by ubuntu on 13/10/17.
 */

(function ($) {
  let onlyOnce;
  Drupal.behaviors.trainingSessionMember = {
    attach: function (context, settings) {


        console.log(` context dans  trainingSessionMember :: `, context);

        // Afficher / cacher l'input du n° d'adhérent

        const checkbox_member = $("#edit-field-amapl-member-und--2");
        checkbox_member.on("change",function(event) {
          console.log(`event.target : `, event.target.checked);
          if(event.target.checked) {
            $("#edit-field-amapl-form-member-und-0-value--2").val("");
            $("#field-amapl-form-member-add-more-wrapper--2").show("1000");
          } else {
            $("#edit-field-amapl-form-member-und-0-value--2").val("Non adhérent");
            $("#field-amapl-form-member-add-more-wrapper--2").hide("1000");
          }
        });
      if (!onlyOnce &&  $("#edit-anon-mail--2").length) {
        onlyOnce = true;
        // Rendre obligatoire le mail dans le cas où la personne n'est pas identifiée
        $("#edit-anon-mail--2").attr("required", "true");
        const asterisk = $(`<span class="form-required" title="Ce champ est requis.">*</span>`);
        asterisk.appendTo(".form-item-anon-mail label");
      }

    }
  };
}(jQuery));
