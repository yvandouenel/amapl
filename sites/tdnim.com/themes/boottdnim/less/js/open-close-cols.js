jQuery(function($) {
    if($('.small-col').length) {
        // le contexte qui correspond à un bouton et son contenu associé
        var context;
        // le contenu associé à un contexte
        var long_description;
        // le titre associé à un contexte
        var title_context;
        // Boutons de fermeture
        var close_button = [];

        // Création des div results-below
        $('.all-small-col').each(function(i){
            $('<div class="results-below" id="results-below-' + i + '"></div>').appendTo($(this));
        });


        $('.small-col').each(function(index){
            context = $(this);
            var parent = context.parent(".all-small-col");

            long_description = $('.body-small-col', context).attr('id','body-small-col-' + index);
            // si la fenêtre est petite (sm), le résultat reste dans la même div
            if($(window).width() > 768){
                long_description.hide().appendTo($(".results-below", parent)).addClass("txt-not-selected");
            } else {
                long_description.hide().addClass("txt-not-selected");
            }

            // Ajout du bouton de fermeture
            close_button[index] =  $('<div class="close-button"><span class="close-button-text sr-only">Fermer</span></div>').prependTo('#body-small-col-' + index);

            $('h3', context).addClass('h3-not-selected h3-small-col h3-initial').attr('id','h3-small-col-' + index);
            (function(context,long_description, button_close) {
                $('h3', context).click(function(){
                    // gestion des class des titres
                    title_context = $(this);
                    var parent = context.parent(".all-small-col");
                    $('.h3-small-col', parent).each(function(){
                        $(this).removeClass("h3-initial");
                        if ($(this).attr('id') != title_context.attr('id')) {
                            $(this).addClass("h3-not-selected").removeClass("h3-selected");
                        }
                    });
                    title_context.toggleClass('h3-selected h3-not-selected');
                    // cache tous les autres textes
                    if($(window).width() > 768) {
                        $('.body-small-col', parent).each(function () {
                            if ($(this).attr('id') != long_description.attr('id')) {
                                $(this).hide().addClass("txt-not-selected");
                            }
                        });
                    }
                    long_description.slideToggle().toggleClass('txt-not-selected text-selected');
                    context.toggleClass('small-col-selected');
                });
                button_close.click(function(){
                    long_description.slideToggle().toggleClass('txt-not-selected text-selected');
                    $('.h3-small-col', context).toggleClass('h3-not-selected h3-selected');
                });
            })(context, long_description, close_button[index]);

        });
    }
    /* Page tarifs ****************************************************************************************************/
    if($('.tarif').length) {
        // Cache toutes les descriptions de tarif
        $(".detail-tarif").hide();
        // Donne la class closed-tarif à tous les titres
        $(".tarif-open-close").addClass('closed-tarif');

        $(".tarif-open-close").click(function(){
            var context = $(this).parent(".tarif");
            $(".detail-tarif", context).slideToggle();
            $(".tarif-open-close", context).toggleClass('closed-tarif opened-tarif');
        })

    }
});
