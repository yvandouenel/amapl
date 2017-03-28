jQuery(function ($) {

    $(window).on('resize', ppaFullWidth);

    function ppaFullWidth() {
        var $elements = $('.full-width-bg');//[data-ppa-full-width="true"]
        $.each( $elements, function( key, item ) {
            var $el = $(this);
            var $container = $el.closest('.container');
            var margin_left_right = ($(window).width() - $container.width()) / 2;

            $el.css({
                position: "relative",
                left: -margin_left_right - 15 + "px",
                "box-sizing": "border-box",
                width: $(window).width(),
                "padding-left": margin_left_right + 15 + "px",
                "padding-right": margin_left_right + 15 + "px"
            });
        });
    }
    ppaFullWidth();
});
