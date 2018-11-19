// dans la session
field_related_training

// dans la formation
field_training_session_linked

1 - Supprimer les groupes ds intempestifs
2 - Créer la rule qui permet d'envoyer vers le résultat d'une inscription après l'inscription
3 - Créer au moins un formateur
4 - Créer au moins un élément de la taxonomy "Domaine de formation"
5 - Créer au moins un élément de la taxonomy "Type de formation"
6 - Créer au moins un élément de la taxonomy "Lieu de formtion"

Info à se rappeler pour le module amapl_training
Attention, le hook post_save ne fonctionne que si le module hook post action est activé
L'envoi vers l'enregistrement après une inscription se fait grâce à une rule et non pas via le hook node_postsave


L'ajout du chmap entity reference (field_training_session_linked) dans une formation (trainings) se fait grâce à un entity_metadata_wrapper et via le hook amapl_trainings_node_postinsert($node)
