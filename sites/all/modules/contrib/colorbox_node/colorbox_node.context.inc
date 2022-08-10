<?php

/**
 * @file
 * Integrates the context module.
 */

/**
 * Expose the colorbox node context condition.
 */
class colorbox_node_context_condition extends context_condition {
  /**
   * @return array
   */
  public function condition_values() {
    return array(1 => t('Enable this context.'));
  }

  /**
   * @param $op
   */
  public function execute($op) {
    if ($this->condition_used()) {
      foreach ($this->get_contexts() as $context) {
        $this->condition_met($context);
      }
    }
  }

}
