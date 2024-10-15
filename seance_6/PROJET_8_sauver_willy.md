# Il faut sauver Wily

Prenez une phrase comme **"térébenthine et tortues"** et traduisez-la en son équivalent "langage baleine", "uueeieeauuee".

Il existe quelques règles simples pour traduire un texte en langage baleine :

- Il n'y a pas de consonnes.
- Seulement des voyelles à l'exception de la lettre y.
- Les u et les e sont très longs, nous devons donc les doubler.

Une fois que nous avons converti le texte en langage baleine, le résultat est chanté lentement, comme il est de coutume dans l'océan.

## À vous de jouer !


1. Partir d'un projet vierge et créer le corps de la fonction principales ainsi que l'import des librairies nécessaires à l'utilisation des chaînes de caractères.



2. Tout d'abord, vous avez besoin d'une chaîne de caractères pour que le programme puisse la traduire.

	Déclarez une chaîne `phrase` et initialisez-la avec "turpentine et tortues" ou tout autre chose que vous voulez.


3. Les baleines ne parlent qu'avec des voyelles, vous avez donc besoin d'un tableau de voyelles à extraire de la variable d'entrée.

	Créez un tableau de char nommé voyelles et donnez-lui des valeurs de :
	- 'a'
	- 'e'
	- 'i'
	- 'o'
	- 'u'

	Note : Les baleines ne considèrent pas le 'y' comme une voyelle.


4. Créez un autre chaine vide appelé `langage_baleine`.

	Elle servira à stocker les voyelles de la phrase initiale (le discours traduit de la baleine).

	- Initialiser la taille de cette chaine avec la taille de phrase avec une fonction spéciale que vous avez déja vu auparavant.


5. Créez une variable `k` à 0 qui nous servira pour déplacer dans `langage_baleine`.

## Boucle imbriquée :

6. Maintenant que nous avons :

	- La chaîne d'entrée `phrase`
	- Les voyelles
	- Ainsi qu'un endroit pour stocker les caractères résultants `langage_baleine`.

	Réfléchissons à la logique pendant une minute.

	Nous voulons boucler sur `phrase` et vérifier si chacun des caractères est une voyelle.

	Écrivons d'abord une boucle `for` qui parcourt cette chaîne.


7. Mais comment vérifier si chacun des caractères est une voyelle ? Eh bien, nous devons comparer chacun des caractères avec chacune des voyelles.

	Nous avons donc besoin d'une autre boucle à l'intérieur. Une boucle à l'intérieur d'une autre boucle est appelée une **boucle imbriquée** !

	À l'intérieur de votre boucle for actuelle, écrivez une autre boucle for qui nous permet de nous déplacer dans le tableau des voyelles.

	> Remarque : utilisez une variable de compteur différente pour la boucle interne.


8. Maintenant que vous avez une boucle for imbriquée, comparez chacun des caractères avec chacune des voyelles.

	Ecrivez une instruction `if` qui compare `phrase[i]` avec les `voyelles[j]`.

	S'ils sont égaux, donner la valeur de `phrase[i]` à `langage_baleine[k]` puis ajouter 1 à notre compteur k. Cela nous permettra d'ajouter le caractère courant à notre chaîne finale traduite en langage baleine.


9. Pour vérifier votre travail, écrivez une autre boucle for qui parcourt  `langage_baleine` et affiche un à un ses caractères.

	La sortie devrait ressembler à quelque chose comme :

	```
	ueieaue
	```
	
	Nous avons maintenant toutes les voyelles !


## Doublez les e et les u :

10. Les baleines doublent les `e` et les `u` dans leur langue.

	Écrivez une instruction `if` qui vérifie si chaque lettre de la phrase est égale à `'e'`. Si c'est le cas, donner la valeur de `phrase[i]` à `langage_baleine[k]` puis ajouter 1 à k.

	Remarque : cette instruction doit être placée après le bloc de la boucle for interne, mais toujours à l'intérieur de la boucle for externe. En effet, vous ne voulez effectuer cette vérification qu'une seule fois pour chaque lettre de l'entrée.


11. Exécutez le programme et chantez la sortie à voix haute - vous parlez officiellement baleine !

	Pour confirmer, si votre chaîne d'entrée est "térébenthine et tortues", la version baleine sera : "uueeieeauuee".

	Essayez d'autres tests comme "salut, humain" (pour obtenir "auuuuai") ou "Je suis d'accord" (pour obtenir "eeuuiao").
