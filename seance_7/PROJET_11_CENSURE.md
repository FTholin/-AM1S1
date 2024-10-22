# Bureau des censures 

Créer un programme de censure de mots avec les pointeurs en C :

1. Déclarer une chaîne de caractères contenant les mots à censurer :
	- Dans cet exemple, nous avons une liste de 3 mots à censurer stockés dans un tableau multidimensionnel.
	- La variable nb_mots contient le nombre de mots dans le tableau.

2. Déclarer une chaîne de caractères pour stocker la phrase à censurer :
	
	- Dans cet exemple, la phrase à censurer est stockée dans un tableau de caractères de 100 caractères.

3. Demander à l'utilisateur de saisir la phrase à censurer :
	- Utiliser scanf
	- La fonction fgets() est utilisée pour lire une ligne de texte entrée par l'utilisateur à partir de l'entrée standard (dans ce cas, le clavier) et la stocker dans la chaîne de caractères phrase.

4. Parcourir la phrase à la recherche de mots à censurer :
	- Si un mot à censurer est trouvé, chaque lettre du mot est remplacée par un astérisque en utilisant les pointeurs pour accéder à chaque caractère.

	- La boucle while peut être utilisée pour trouver toutes les occurrences du mot dans la phrase.

	- Initialisation d'un pointeur ptr à la première adresse mémoire de la chaîne phrase.
	- Calcul de la longueur du mot à censurer avec strlen().
	- Boucle while utilisant strstr() pour rechercher la première occurrence d'un mot à censurer dans la chaîne phrase.
	- Si le mot à censurer est trouvé, chaque lettre du mot est remplacée par un astérisque en utilisant des pointeurs pour accéder à chaque caractère.
	- Le pointeur ptr est incrémenté de la longueur du mot à censurer pour continuer la recherche dans la chaîne.

5. Afficher la phrase censurée :

