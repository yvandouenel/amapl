Pour fonctionner, il faut modifier le fichier sites/all/modules/contrib/paypal_payment/paypal_payment_pps/includes/PayPalPaymentPPSPaymentMethodController.inc
public function execute(Payment $payment) {
    entity_save('payment', $payment);
    $_SESSION['paypal_payment_pps_pid'] = $payment->pid;
    drupal_goto('/vers-stripe/'.$payment->pid);
  }
