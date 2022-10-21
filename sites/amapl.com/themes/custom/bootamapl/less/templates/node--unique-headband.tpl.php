<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup templates
 */
?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php if ((!$page && !empty($title)) || !empty($title_prefix) || !empty($title_suffix) || $display_submitted): ?>

  <?php endif; ?>
  <div id="headand-unique-container" style="background-color:<?php print($content['field_left_color'][0]["#markup"]) ?>">
    <img id="star" src="sites/amapl.com/themes/custom/bootamapl/less/images/home_headband/etoile.svg" alt="">
    <img id="lines" src="sites/amapl.com/themes/custom/bootamapl/less/images/home_headband/traits.svg" alt="">
    <div id="left-headband-unique">
      <div class="container">
       <div class="row">
         <div class="col-lg-9 col-md-6">


           <?php print render($content['body']);?>
         </div>
       </div>
      </div>
    </div>
    <div class="blogMainArticleMedia cutRight">
      <?php print render($content['field_right_img']);?>
    </div>


    <svg width="0" height="0" preserveAspectRatio="none">
      <defs>
        <clipPath id="cutRight" transform="scale(0.8) translate(512, 210) ">
          <path fill="#79D6FF" stroke="none" d="
M 55.1 -220.55
Q 28.2 -222.65 4 -205.4 -18.15 -189.6 -34.3 -171.35 -39.35 -165.65 -43.2 -160.4
L -46 -156.3 -32.5 -181.65 -94.1 -222.8
Q -126.2375 -209.569140625 -157.85 -174.75 -167.95 -183.8 -183.9 -183.1 -194.35 -182.6 -206.7 -175.3 -217 -169.2 -231.75 -156.3 -248.85 -141.4 -271.5 -119.25 -299.5 -91.8 -314.1 -74.1 -291.4 -112.15 -259.7 -141.95
L -312.4 -187.6
Q -408.833203125 -109.9302734375 -425.55 -25.35
L -376.25 3.3
Q -402.55 66.5 -422.25 94.25 -380.5 121.6 -360.05 130.9
L -384.5 169 -331.2 198.95 -306.3 170.75
Q -290.4701171875 189.1396484375 -271.45 201.4 -262.1873046875 207.3794921875 -252.2 211.9 -246.6759765625 202.9392578125 -241.35 195.1 -219.7 196.2 -142.6 204.45 -61.45 213.2 -7.85 220.5 1.55 197.8 10.9 178.95 19.55 161.45 22.2 159.05 25.3 176.4 34.8 190.25 42.85 201.95 53.75 209.1 73.1498046875 221.7521484375 101.7 217.8 122.28359375 214.93671875 143.15 200.5
L 143.15 -199.85 107.2 -163.75
Q 108.4 -170.8 107.3 -179.65 105.1 -197.35 93.5 -206.15 76.8 -218.85 55.1 -220.55 Z" />
        </clipPath>
      </defs>
    </svg>

  </div>

</article>
