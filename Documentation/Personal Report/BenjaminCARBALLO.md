# Projet : Exosquelette commandé à distance

### Groupe :
  - CARBALLO  Benjamin
  - FELCE     Joni
  - VEBER     Mathieu

### Initialisation :
  Nous avons parlé du sujet du projet alors que nous hésitions sur trois projets :
    - boule de billard interactive
    - harpe laser
    - exosquelette
  C’est alors qu’après discussion nous avons finalement opté pour le dernier projet, plus riche en travail et en applications dans plusieurs domaines (industrie, pharmaceutique, etc…)

### Démarche : 
  Réalisation de premiers schémas sur brouillon 
  Création d’une première liste de matériel nécessaire à la réalisation du projet :
    -	Une dizaine d’accéléromètres
    -	Une dizaine de servo-moteurs (5 petits, 4 moyens, 1 imposant)
    -	Gant (de motard)
    -	Protection d’avant-bras
    -	Matériaux de récupération (aluminium, acier, étain)

### Les tâches :
  -	Dislocation du bras en deux parties :
    o	L’avant-bras 	(élongation, mouvement du coude)
    o	La main 		(mouvement des doigts et du poignet)
  -	FabLab : construction de l’exosquelette 
  -	Conceptualisation du circuit (accéléromètre, carte Arduino, module Bluetooth, servo-moteur, batterie)
  -	Code :
    o	Détection des angles et calibrage
    o	Réception/analyse/envoi
    o	Mouvements des servo-moteurs
    o	Modélisation 3D
  -	(et autres)

# Compte rendu Hebdomadaire des réalisations Groupe et Personnelle

## Semaine 51,01 : 
  Initialisation du projet collectivement et points soulevés à faire murir

## Semaine 02 :
  Absent

## Semaine 03 :
  ### Groupe:
   Préparation de la diapo, réflexion sur le diagramme de Gantt
    Prise d’initiative de la modélisation 3d de la main robotique pour la fabriquer au Fablab
    Répartition du travail durant la semaine de ski.
  ### Perso :
   Commencement de la partie Inventor pour avoir une main opérationnelle pour mi-Mars

## Semaine 04 :
  ### Groupe:
   Réception des commandes (servomoteurs/résistances flexibles)
    Création de notre premier montage et utilisation des composant:
      Dans cette séance, nous avons fait fonctionner un servo moteur en fonction du rayon de courbure de la led
      puis prévision de la séance de couture pour les résistances sur la main
      et enfin choix des composants complémentaires (résistance de 20k pour comparer la résistance modulable)
  ### Perso:
   Conceptualisation de la main en 3D, et affinage de précision
    Note importante : le redressement des doigts est prévu mais le choix sera fait en groupe et par le groupe

## Semaine 05,06,07,08 :
  ### Perso :
   Abandon de la réalisation de la main 3D faute de savoir faire et de technique
    Finitions des couture du gant et des résistances flexibles
    Partage avec le groupe des gros problèmes suite à la réalisation de la maquette 3D
    Important point soulevé: Redressement des doigts, Système de poussée de la main, et matériel qui est important de 
    commander comme une source lumineuse variant selon la flexion des résistances sur le gant

## Semaine 09 :
   ### Groupe:
   Nous avons cherché comment installer de la lumière qui varie en fonction des mouvements des doigts
     Maxime Surcin nous a présenté les Leds qu'il a utilisé pour son projet d'Horloge avec effet de profondeur
     Nous avons décidé alors d'utiliser les mêmes leds mais plus rapprochées. (suite des commandes)

## Semaine 10 :
   ### Perso:
   Poursuite des recherches sur leds et écriture de premiers codes

## Semaine 11 :
  ### Groupe: 
   Réunion de Groupe dans le centre de Nice, à la recherche d'une main articulée
    Après la visite de 7 Magasins, nous avons réalisé que les mains sur la plupart du marché ne conviennent pas faute de
    mobilité sur le pouce rendant le repliement des doigts (notamment l'index) incomplet.
    
## Semaine 12 :
  ### Groupe: 
   Préparation et finitions de la diapo et recherche de main sur internet (boutique en ligne) sans succès
  ### Perso:
   Recherche de plan sur internet et dessin schématique de main sur papier pour des plans idéaux à la vue des mains sur
    le marché. Réflexion sur l'intégration du Verrin donné pour notre projet et étude du Controleur de moteur présenté 
    par un autre groupe, Benjamin Vouillon et Léo Lasseron.

## Semaine 13 :
  ### Groupe : 
   Nous somme allés ensemble au Fablab afin de voir avec le responsable du site ce qu'il pouvait nous conseiller après
    notre tentative de recherche de main sur le marché. Il nous a présenté une main imprimée par deux de nos camarades et
    on a décidé de reprendre un plan sur internet et d'essayer de le modifier dans le but d'obtenir un résultat qui nous
    intéresse
  ### Perso :
   Après réception des Bandes LED, j'ai essayé de les découper pour enfin les souder mais sans succès dans cette dernière
    étape (voir M. Masson)

## Semaine 14 :
 ### Groupe :
   Recherche de plan d'une main 3D sur Internet, puis commencement des soudures des LEDs et de leur décortication pour
   commprendre comment elles marchent et par où on peut trouver les pins VCC, GND, et control.
 ### Perso :
   commencement et finitions des découpages et préparation des futures soudures sur les leds

## Semaine 15/16 :
   ### Groupe : 
   Envoie des leds en couture et commande d'une surface assez molle de 1.5cm de haut afin d'y enfoncer les servo-moteur de l'avant bras
   ### Perso : 
   Couture des LEDs sur le gant. Réalisation des codes qui nous permettent de mettre en évidence la pliure des doigts. Nous récupérons        notre Lilypad. Soudure des résistances et des fils sur notre gant.

## Semaine 17 :


## Semaine 18,19 :
  ### Groupe :
   Première tentative d'impression 3d qui se conclua par un échec à cause du matériau choisi (NinjaFlex).
    Récupération d'une autre main cette fois en rigide.
    commande de fils élastique. pour remplacer la capacité élastique de matériaux flexible de la première impression.
  ### Perso : 
   Découverte des premiers Problèmes dû à Xbee, comme : la compression des pins Input et Output ou encore la mise en conflit des bibliothèques "Servo" et "SoftwareSerial"
    
## Semaine 20,21 :
  ### Groupe :
   Réalisation de l'avant bras: création des emplacements des servo-moteurs, assemblage de la main et juxtaposition des éléments de            communication (la même chose pour le gant)
  ### Perso : 
   codage des derniers programmes afin de présenter quelque chose malgré mon incapacité à relier les deux module par xbee

## Semaine 22 :
  ### Groupe:
   réalisation des diapos et des Rapports de fin de projet
    
# Conclusion

Même si ce projet m'a apporté connaissance et expérience, technique, il m'a laissé le goût de la déception. En effet, à cause de petits problèmes, nous n'avons rien pu faire durant 1 ou 2 semaines, soit en attendant la main soit en attendant des composants, et en accumulant du retard notre projet "ambitieux" n'a pas porté ses fruits. Cette frustration est pour moi une source encore plus importante d'expérience que la simple connaissance technique que peut apporter ces heures d'enseignements. Prendre en charge les Imprévus dès le commencement d'un projet sont des tâches courantes pour des Ingénieurs. c'est alors à nous de gagner en maturité afin de pouvoir maitriser à tout moment le temps (et plus tard les finances).
