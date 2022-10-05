(function ($) {
  Drupal.behaviors.feature_form_amapl = {
    attach: function (context, settings) {
      const amount = Drupal.settings.feature_form_amapl.amount;
      const payment_id = Drupal.settings.feature_form_amapl.payment_id;
      console.log("dans feature_form_amapl_stripe.js - amount : ", amount);

      // Création de la modale
      const modal = $(`
        <div class="modal fade" tabindex="-1" role="dialog" id="myModal" style="min-height: 600px;">
          <div class="modal-dialog" role="document">
            <div class="modal-content">
              <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
                <h4 class="modal-title">Modal title</h4>
              </div>
              <div class="modal-body" style="height: 90vh;">
                <iframe style="height: 80vh;"
                    id="inlineFrameExample"
                    title="Inline Frame Example"
                    width="100%"
                    src="http://local.paiementd9.my?price=${amount}&payment_id=${payment_id}">
                </iframe>
              </div>
            </div><!-- /.modal-content -->
          </div><!-- /.modal-dialog -->
        </div>`);
      $("body").append(modal);

      // Gestion de la soumission du formulaire
      $("#payment-form-standalone").on("submit", function (e) {
        console.log("validation du formulaire");
        $('#myModal').modal('toggle');

        e.preventDefault();

      });
    }
  };
}(jQuery))
