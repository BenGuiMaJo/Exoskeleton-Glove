

					Résumé hebdomadaire de l'avancement de notre projet


		Séance du 22 Décembre : Introduction

Notre groupe est constitué de Benjamin CARBALLO, Guillaume MALEK, Joni FELCE et moi-même (Mathieu VEBER).
Après avoir hésité entre trois projets que sont une boule de billard connectée, une harpe laser et un gant exosquelette, nous avons convergé vers la dernière proposition.

Nous avons par ailleurs fait une grossière découpe des tâches qui est la suivante :
- Avant-bras (Elongation)
- Main (Mouvements des doigts et du poignet)
- Fablab (Exosquelette grâce à l'imprimante 3D)
- Conception des circuits électronique
- Elaboration du code informatique embarqué

Nous avons aussi réfléchi au matériel nécessaire pour notre projet, il nous faudra donc un gant de motard, une protection d'avant-bras, une dizaine d'accéléromètres et autant de servomoteurs.

		Séance du 12 Janvier : Commande du Matériel

Edit : Guillaume MALEK à quitté le groupe pour suivre son propre projet

Lors de la séance, notre professeur nous a conseillé d'utiliser des résistances souples qui sont des capteurs de flexion au lieu de gros accéléromètres qui auraient pris de la place et pesés sur le gant de l'utilisateur. Nous avons par ailleurs regardé un certain nombre de vidéos qui ont été une bonne source d'inspiration. Ainsi nous avons choisi d'utiliser un servomoteur à part entière pour donner un second mouvement au pouce qui serait de passer d'un axe perpendiculaire à un axe parallèle aux autres doigts.

Nous avons réfléchis plus précisément au matériel nécessaire. Après concertation entre nous, nous avons réalisé que le gant "de motard" ne serait pas pratique à utiliser, c'est pourquoi nous avons commandé des sous-gants qui restent agréables à mettre tout en nous laissant la possibilité de coudre dessus (pour attacher les résistances souples par exemple). De plus, nous avons commandé ces fameux capteurs de flexion au nombre de 5 ainsi que 6 servomoteurs (un pour chaque doigt et le dernier pour faire bouger le pouce).

		Séance du 18 Janvier : Approfondissement

Pour cette séance, nous nous sommes attardés sur le fonctionnement des doigts et la conception de phalanges.
Nous avons opté pour l'utilisation de fils pour replier les doigts de la main robotique. D'autre part nous feront le choix, pour être le plus réaliste possible, de reproduire les trois phalanges du doigt qui seront de tailles différentes suivant le doigt (si possible) et nous avons statué sur la forme qu'elles devaient avoir pour laisser passer le fil et pour pouvoir se plier.

Nous avons aussi eu l'idée de rajouter en parallèle des résistances flexibles, des bandes de LEDs qui changeront de couleur (vert puis jaune puis rouge) en fonction du repli de nos doigts. Cela nous permettra d'avoir un retour (pour savoir si l'on interprète bien les informations) et ajoutera aussi un aspect esthétique à notre gant.

		Séance du 23 Janvier : Présentation du Projet

Pour cette semaine, il nous fallait conclure cette phase de conception du projet. Nous avons alors établi un diagramme de Gant pour y voir plus clair dans notre agenda. Ainsi à la prochaine séance nous nous occuperons du gant et de ses capteurs (à conditions que nous ayons le matériel !)

En effet nous avons revue le matériel nécessaire pour notre projet. On a remplacé la communication Bluetooth entre le gant et la main robotisée par du Zigbee dont il nous faut commander les deux modules. Après réflexion, la carte Arduino Nano est trop imposante pour notre gant déjà rempli de capteur, nous nous dirigeons donc vers l'utilisation d'une carte Arduino Lilypad plus petite et plus esthétique.

Bien que les professeurs nous l'aient déconseillé, nous décidons de modéliser en 3D par nous-mêmes la main robotisée et plus précisement les phalanges des différents doigts afin qu'ils aient comme nous le souhaitons des tailles qui varient.

		Mois de Février : Gant et Conception 3D

Nous avons eu une malencontreuse aventure avec le gant commandé qui s'est avéré être de mauvaise facture et difficilement utilisable, nous avons donc recherché un gant de meilleur qualité.

Voilà qui est fait, nous nous sommes procuré un sous-gant de motard sur lequel nous allons pouvoir coudre sans risquer de le trouer. Nous nous attelons à présent à la partie couture. Les résistances flexibles doivent être accolées au gant sans pour autant empêcher les doigts de se plier puisque tout l'intérêt réside dans la mesure de la flexion. A ce sujet nous avons testé les résistances et appréhendé leurs mécanismes.

Cette fois-ci nous avons relié les résistances aux servo-moteurs et cela semble bien fonctionner à un détail près... Les servo-moteurs ne tournent que sur un axe de 180°.

De son côté le conception de la main en 3D a démarré et avance à son rythme, nous songeons à percer le prototype a posteriori (après son impression) car cela sera sans doute plus facile pour réaliser le modèle.

		Mois de Mars : Péripéties

Finalement notre gant sera adapté à une main gauche due a une erreur d'inattention lors de la phase de couture !

Nous réflechissons à comment mettre les bandes de LEDs, aux côtés des résitances, où au dessus les recouvrant, la résistance placée sur le pouce étant mal positionnée, dans tous les cas des retouches seront nécessaires.

En plus de la limite de rotation fixée à 180°, un autre problème s'y est ajouté, comment faire pour que les doigts se déplient efficacement mais surtout se dépli tout court ! En effet, nous avions juste prévu la flexion des doigts et non leur retour à l'état initial... Nous songeons à utiliser des ressorts linéaires ou alors, sur conseil de M. Masson, des barres flexibles qui pourront redevenir droites grâce à leur "rigidité" à l'issue de chaque flexion.

En ce qui concerne la maquette de la main en 3D, nous nous avouons vaincu... C'est trop complexe pour le moment. C'est la raison pour laquelle nous décidons d'acheter une main articulée toute faite.

Pas de chances, après avoir consulté 7 magasins différents dans Nice, nous ne trouvons pas ce pourquoi nous sommes venus... Dans tous les cas, le pouce se retrouve non pas au côté des doigts mais à l'intérieur dans la paume. Si nous prenions une telle main articulée, notre main robotisée se retrouverai dans l'impossibilité d'effectuer un certain nombre de gestes courant, le pouce génant le mouvement des autres doigts. De même pour internet, aucunes de nos recherches ne nous donne des résultats satifaisants.

Nous avons fini par nous décider et statuer sur le fait que nous allons prendre des plans de mains articulées sur internet que nous allons retravailler afin d'obtenir non pas un résultat optimal mais au moins confortable pour ce que nous envisageons pour notre projet.

Ayant pris pas mal de retard, il est fort probable que nous n'ayons pas le temps d'accomplir les objectifs supplémentaires que nous nous étions fixés à l'origine. Ceci étant dit nous comptons tout de même faire l'élongation du bras, nous avons abordé le sujet lors de la présentation et il se trouve que M. Masson est en possession d'un bras qui s'allonge dont il n'a encore aucune utilité particulière. Cet heureux hasard va grandement nous simplifier la tâche et nous pourrons fixer notre main robotisée au bout de ce fameux objet.
