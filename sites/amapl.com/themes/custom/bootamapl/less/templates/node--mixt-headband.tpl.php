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
  <div id="headband-complex">
    <div id="headband-col-1" style="background-color:<?php print($content['field_left_color'][0]["#markup"]) ?>">
      <div ><?php print $slideshow; ?></div>
    </div>
    <div id="headband-col-2" >
      <img id="ajouts" src="sites/amapl.com/themes/custom/bootamapl/less/images/home_headband/ajouts.png" alt="">
      <div id="headand-container" >
        <div class="blogMainArticleMedia cutR">
          <?php print render($content['field_center_img']);?>
        </div>


        <svg width="0" height="0" preserveAspectRatio="none">
          <defs>
            <clipPath id="cutR"  transform="scale(3.8) translate(0, -205) ">
              <path d="M 0.16055528,233.41162 C 5.5112652,222.74096 24.778214,203.92619 25.254037,205.07529 l -0.0172,-0.0415 12.75065,6.32375 -1.712984,6.56571 1.953359,-2.60211 c 0,0 4.743731,-7.07505 12.510271,-10.28735 3.157636,-1.30601 9.279656,-0.079 11.617275,2.21332 2.337617,2.29236 2.721139,4.35484 3.187654,8.85326 v 0 l 8.571286,-9.4066 12.254781,14.22846 c 0,0 -11.333913,9.88087 -13.317342,17.46938 v 0 c 0,0 3.870993,-1.34298 6.37532,-1.26476 2.829919,0.16209 6.933437,2.11111 8.137656,6.69585 2.055764,6.48512 -5.304172,15.04206 -5.304172,15.04206 v 0 l 10.200514,7.11423 c 0,0 -10.058833,17.07414 -15.796636,22.76552 -5.7378,5.69138 -11.177479,7.86734 -14.096554,7.98374 -3.287285,0.13108 -7.269647,-2.80617 -9.253084,-5.25663 -1.983442,-2.45044 -2.151677,-8.97181 -2.151677,-8.97181 0,0 -7.921064,6.87327 -11.590943,13.19715 -0.06422,0.11065 0.0073,0.0181 0.0073,0.0181 0,0 -4.341318,-2.66908 -7.780379,-6.0736 -3.126169,-3.09475 -4.508048,-5.24451 -4.508048,-5.24451 l -5.679853,5.90538 -10.754318,-9.38345 4.108542,-7.74659 c 0,0 -3.11683,-2.05521 -5.3127767,-2.37142 -2.1959423,-0.31618 -6.162814,-0.94856 -6.162814,-0.94856 0,0 1.062557,-10.35515 2.6209703,-15.80939 1.558412,-5.45425 5.1002564,-11.61989 5.1002564,-11.61989 z"
                    style="fill:none;" />
            </clipPath>
          </defs>
        </svg>

      </div>


    </div>
    <div id="headband-col-3" style="background-color:<?php print($content['field_right_color'][0]["#markup"]) ?>">
      <?php print render($content['body']);?>
    </div>

  </div>

</article>
