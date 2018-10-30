// dans la session
field_related_training

// dans la formation
field_training_session_linked

Supprimer les groupes ds intempestifs

Info à se rappeler pour le module amapl_training
Attention, le hook post_save ne fonctionne que si le module hook post action est activé
L'envoi vers l'enregistrement après une inscription se fait grâce à une rule et non pas via le hook node_postsave


L'ajout du chmap entity reference (field_training_session_linked) dans une formation (trainings) se fait grâce à un entity_metadata_wrapper et via le hook amapl_trainings_node_postinsert($node)
