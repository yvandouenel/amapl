<?php
/**
  * La variable $title_class provient du hook bootamapl_preprocess_page
*/

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup templates
 */
?>
<header id="navbar" role="banner" class="<?php print $navbar_classes; ?>">
  <div >
    <div class="row">
      <div class="col-md-6">
        <?php if ($logo): ?>
          <h1 id="h1-logo">
            <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>">
              <img src="<?php print $logo; ?>" alt="<?php print t('Logo AMAPL - organisme mixte de gestion agréé - retour accueil'); ?>" />
            </a>
          </h1>
        <?php endif; ?>
      </div><!-- Fin col -->
      <div class="col-md-6">
        <div class="navbar-header">
          <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
            <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
              <span class="sr-only"><?php print t('Toggle navigation'); ?></span>
              <span class="icon-bar"></span>
              <span class="icon-bar"></span>
              <span class="icon-bar"></span>
            </button>
          <?php endif; ?>
        </div>

        <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
          <div class="navbar-collapse collapse">
            <nav role="navigation" id="top-amapl-navigation">
              <?php if (!empty($page['navigation'])): ?>
                <?php print render($page['navigation']); ?>
              <?php endif; ?>
              <?php if (!empty($primary_nav)): ?>
                <div id="main-amapl-navigation">
                  <?php print render($primary_nav); ?>
                </div>
              <?php endif; ?>
            </nav>
          </div>
        <?php endif; ?>
      </div><!-- Fin col -->
    </div><!-- Fin row -->

  </div>
</header>

<?php if (!empty($title)): ?>
  <div id="under-main-title" class="<?php print $title_class; ?>">
    <div class="container">
      <div class="row">
        <div class="col-md-12">
          <h2 class="page-header <?php print $title_class; ?>"><?php print $title; ?></h2>
        </div>
      </div>
    </div>
  </div>
<?php endif; ?>
<?php if (!empty($page['large-headband'])): ?>
  <div id="under-large-headband">
    <div class="container">
      <div class="row ">
            <div class="col-md-12">
              <?php print render($page['large-headband']); ?>
            </div>
      </div>
    </div>
  </div>
<?php endif; ?>
<div id="under-main-container">
  <div class="main-container <?php print $container_class; ?>">

    <header role="banner" id="page-header">
      <?php print render($page['header']); ?>
    </header> <!-- /#page-header -->
    <!-- Slide show -->
    <?php if (!empty($page['slideshow'])): ?>
      <div class="row">
        <div class="col-md-12">
          <?php print render($page['slideshow']); ?>
        </div>
      </div>
    <?php endif; ?>
    <?php if (!empty($page['block-left-6'])): ?>
      <div class="row two-cols-home">
        <div class="col-md-6 col-home-first">
          <?php print render($page['block-left-6']); ?>
        </div>
        <div class="col-md-6 col-home-second">
          <?php print render($page['block-right-6']); ?>
        </div>
      </div>
    <?php endif; ?>
    <?php if (!empty($page['block-training'])): ?>
      <div class="row three-cols-home">
        <div class="col-md-4 col-training">
          <?php print render($page['block-training']); ?>
        </div>
        <div class="col-md-4 col-zoom">
          <?php print render($page['block-zoom']); ?>
        </div>
        <div class="col-md-4 col-news">
          <?php print render($page['block-news']); ?>
        </div>

      </div>
    <?php endif; ?>

    <div class="row">

      <?php if (!empty($page['sidebar_first'])): ?>
        <aside class="col-sm-3" role="complementary">
          <?php print render($page['sidebar_first']); ?>
        </aside>  <!-- /#sidebar-first -->
      <?php endif; ?>

      <section<?php print $content_column_class; ?>>
        <div id="central-content-wrapper">
          <?php if (!empty($page['highlighted'])): ?>
            <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
          <?php endif; ?>

          <a id="main-content"></a>
          <?php print render($title_prefix); ?>

          <?php print render($title_suffix); ?>
          <?php print $messages; ?>
          <?php if (!empty($tabs)): ?>
            <?php print render($tabs); ?>
          <?php endif; ?>
          <?php if (!empty($page['help'])): ?>
            <?php print render($page['help']); ?>
          <?php endif; ?>
          <?php if (!empty($action_links)): ?>
            <ul class="action-links"><?php print render($action_links); ?></ul>
          <?php endif; ?>
          <?php print render($page['content']); ?>
        </div>
      </section>

      <?php if (!empty($page['sidebar_second'])): ?>
        <aside class="col-sm-3" role="complementary">
          <?php print render($page['sidebar_second']); ?>
        </aside>  <!-- /#sidebar-second -->
      <?php endif; ?>

    </div>
  </div>
</div>

<?php if (!empty($page['footer-1'])): ?>
<footer class="footer">
  <div id="under-parteners-social">
    <div class="<?php print $container_class; ?>">
      <?php print render($page['footer-1']); ?>
    </div>
  </div>
  <div id="under-nav-bottom">
    <div class="<?php print $container_class; ?>">
      <?php print render($page['footer-2']); ?>
    </div>
  </div>
</footer>
<?php endif; ?>
