<?php
/**
 * La variable $title_class provient du hook bootamapl_preprocess_page
 */

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:
 * $title
 * $payment_id
 * payment_amount
 * $entity_form_id
 * $email_subscriber
 * @ingroup templates
 */
?>
<?php if (!empty($entity_form_id)): ?>
  <iframe style="height: 80vh;border:0;"
          id="iframe-stripe"
          title="Inline Frame Example"
          width="100%"
          src="https://recepaiement.amapl.com/?amount=<?php print $payment_amount; ?>&payment_id=<?php print $payment_id; ?>&email=<?php print $email_subscriber; ?>">
  </iframe>
<?php else: ?>
  <h2>Nous n'avons pas pu récupérer les informations concernant votre paiement,
    merci de le renouveler</h2>
<?php endif; ?>




