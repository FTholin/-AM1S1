# Le langage de programmation C


Félicitations pour avoir choisi d'apprendre le langage de programmation C ! Le langage C existe depuis un certain temps et est l'un des langages fondamentaux de l'informatique.

Le C est un langage plus ancien que les autres langages utilisés et pourtant il est toujours très populaire. L'indice [TIOBE](https://www.tiobe.com/tiobe-index/), qui mesure la popularité des langages de programmation, place le C en tête de liste depuis de nombreuses années. Cela est dû à l'utilisation du C dans tous les domaines de l'informatique.

La plupart des systèmes d'exploitation actuels, y compris le noyau Linux, sont mis en œuvre avec du code C. La version principale du langage de programmation Python est appelée CPython parce qu'elle est implémentée en C. Le C a également été étendu à l'aide des langages C++ et C#.

Le langage C est également courant dans les systèmes embarqués, qui sont de petites unités informatiques contrôlant des objets tels que des appareils électroménagers, des contrôleurs d'éclairage et d'autres petits appareils physiques.

Le langage de programmation C est partout. Son apprentissage vous aidera à devenir un meilleur programmeur, prêt à relever le prochain défi dans n'importe quel domaine de l'informatique.


## Introduction à la Compilation en Ligne

Un **compilateur en ligne** est un outil accessible via un navigateur web qui permet de compiler et exécuter du code sans avoir besoin d'installer un environnement de développement sur votre machine. Ces plateformes sont particulièrement utiles pour tester rapidement du code, faire des démonstrations ou apprendre la programmation.

Pour compiler et exécuter du code C en ligne, vous pouvez utiliser des services comme [OnlineGDB](https://www.onlinegdb.com). Ce site offre une interface simple pour écrire, compiler et exécuter du code C directement depuis votre navigateur.

Vous pouvez accéder au compilateur en ligne de C en cliquant sur ce lien : [OnlineGDB - Compilateur C en Ligne](https://www.onlinegdb.com/online_c_compiler). 

En plus de la compilation, cet outil offre des fonctionnalités de débogage, d'édition et de visualisation de l'exécution du code, ce qui en fait un choix pratique pour les développeurs et étudiants.

## Hello World

Regardons donc notre premier programme C !

```c
#include <stdio.h>

int main() {
  // Affiche une ligne
  printf("Hello World!\n");
}
```

Lorsque ce code est exécuté, le texte suivant s'affiche dans le terminal.
```
Hello World!
```

Parcourons le code ligne par ligne pour voir ce qui se passe. Vous n'avez pas besoin de tout comprendre tout de suite, c'est juste un premier regard.

- `#include <stdio.h>` : Cette ligne est nécessaire pour exécuter la ligne de code qui commence par printf.
- `int main(){ }` : C'est le point de départ du code. Tout le code à l'intérieur des accolades `{}` s'exécute en premier.

- `// Affiche une ligne` : Ceci est un commentaire. Il ne s'agit pas d'une ligne de code mais d'un message que nous pouvons ajouter au code pour nous dire ou dire aux autres ce que fait le code. Lorsque le code est exécuté, cette ligne sera ignorée.

- `printf("Hello World !");` : Cette ligne de code imprime, ou affiche, le texte `"Hello World !"` sur la console.

L'affichage du texte sur la console est un moyen pour un programme de communiquer avec l'utilisateur.

Essayez d'exécuter ce code et voyez vous-même le résultat !

```c
#include <stdio.h>

int main() {
  // Affiche une ligne
  printf("Bonjour Florian!\n");
}
```

## Syntaxe et erreurs

Lorsque nous écrivons en C, nous devons suivre un ensemble de règles pour que le code s'exécute correctement. Ces règles sont connues sous le nom de syntaxe.

Au fil des leçons, nous apprendrons de nouvelles syntaxes sur les sujets abordés.

Regardons le code Hello World pour examiner la syntaxe commune qui existera dans la plupart (sinon tous) de vos programmes.

### Sensibilité à la casse

La plupart des mots du code utilisent toutes les lettres minuscules. C'est ce qu'on appelle la sensibilité à la casse. Qu'ils soient en minuscules ou en majuscules, certains mots du code doivent respecter la casse correcte pour que le code s'exécute. Les seules lignes de texte qui peuvent changer de casse sont le commentaire et le texte entre guillemets.

### Le point-virgule
Toutes les instructions, comme l'instruction `printf()`, doivent se terminer par un **point-virgule**. Celui-ci identifie la fin de l'instruction et est nécessaire pour que le code s'exécute correctement.

### Guillemets doubles

Le texte situé entre les guillemets doubles " est appelé chaîne de caractères (pensez à une chaîne de caractères). Toutes les chaînes de caractères doivent être entourées de guillemets doubles.

Que se passe-t-il lorsque nous enfreignons les règles ? La réponse est : des erreurs. Le texte ci-dessous est une erreur qui s'affiche lorsque nous omettons le point-virgule dans l'instruction `printf()` de notre code Hello World.

```
script.c: In function ‘main’:
script.c:6:1: error: expected ‘;’ before ‘}’ token
 }
 ^
```

Le texte ci-dessus donne les informations suivantes :

- L'emplacement du composant, Dans la fonction `'main'`.
- Le numéro de ligne et de colonne, `6:1`
- Une description, attendue `;` avant `}`.

Comme nous pouvons le constater, le message fait de son mieux pour nous aider à résoudre les erreurs dans notre code.

### À vous de jouer ! 🤠

1. Oh là là ! Quelqu'un a cassé le code Hello World. Exécute le code pour afficher l'erreur dans la console.


2. Étant donné l'erreur dans la console, pouvez-vous réparer le code dans script.c.


3. Il y a toujours une erreur dans la console. Compte tenu de cette nouvelle erreur, pouvez-vous corriger le code ?

4. Le code doit s'exécuter et produire le texte comme prévu.



>Lorsque vous écrivez du code, vous rencontrerez toujours des erreurs.
Les bons programmeurs n'écrivent pas un code parfait la première fois, ou la deuxième fois (ou la troisième fois...).
Les bons programmeurs sont capables de comprendre une erreur, d'en identifier la cause et de la corriger dans le code.

```c
#include <stdio.h>


int Main() {
  // Affiche une ligne
  printf("Hello World!\n")
}
```

## Sortie

L'objectif principal de notre exemple de code Hello World est d'afficher le texte `Hello World !` sur la console. La ligne de code qui produit le texte est la suivante :

```c
printf("Hello World!\n");
```

Plongeons plus profondément dans les 2 parties de cette ligne sont :

- `printf()` est connu comme une fonction et effectue l'action d'afficher du texte sur la console.
- `Hello World!\n` est une chaîne de caractères. Une chaîne de caractères est un texte placé entre une paire de guillemets doubles.

En plaçant la chaîne entre les parenthèses de la fonction `printf()`, on affiche le texte (sans les guillemets) sur la console.

Les fonctions et les chaînes de caractères sont des sujets abordés dans les leçons suivantes. Ne vous inquiétez pas si vous ne comprenez pas complètement ces concepts. Ce qu'il faut retenir, c'est que c'est ainsi que nous créons une sortie dans la console.

Qu'en est-il de `\n` à la fin de la chaîne de caractères ? Bonne question ! C'est ce qu'on appelle une **séquence d'échappement** et elle est utilisée pour ajouter un caractère non visuel dans une chaîne.

Dans ce cas, `\n` ajoute une nouvelle ligne à la fin de la chaîne. Regardez ce qui se passe lorsque nous le plaçons entre Hello et World !

```c
printf("Hello\nWorld!");
```

Le code ci-dessus produira un résultat :

```
Hello
World!
```

Il est important de se rappeler qu'une séquence d'échappement est un caractère et qu'elle doit être comprise entre les guillemets.

Une autre séquence d'échappement est `\t`. Elle est équivalente à la touche de tabulation et permet d'insérer des espaces dans une chaîne de caractères :

```c
printf("Hello\tWorld !") ;
```

Le code ci-dessus produira le résultat suivant :

Bonjour le monde !
`\n` et `\t`ne sont que deux des nombreuses séquences d'échappement qui peuvent être insérées dans une chaîne de caractères.

### À vous de jouer ! 🤠

Cette recette est censée être facile à suivre, mais lorsque vous exécutez le code, vous verrez qu'il n'est pas si facile à lire.

Exécutez le code pour observer  et corriger la recette.


2. Il n'y a pas de saut de ligne dans le texte.

En commençant par la première instruction `printf()` dans `main()` :

- Ajoutez une séquence d'échappement de ligne à la fin de la chaîne.
- Exécutez le code pour voir si le rendu de la  recette est meilleur.


3. L'instruction suivante a besoin d'un peu d'espace au milieu.

Dans la deuxième instruction `printf()` de `main()` :

- Ajoute une séquence d'échappement de tabulation entre les mots beurre et (température ambiante).

4. Cette recette doit être plus sucrée.

- Dans `main()` :
    - Ajoute une instruction `printf()` qui affiche la chaîne de caractères : `\n2/3 Cuillères à café : Sucre cristallisé`
    - Remarquez le `\n` au début de la chaîne de caractères pour s'assurer qu'elle est affichée sur une nouvelle ligne.

```c
#include <stdio.h>

int main() {
    // Simple Recette
    printf("2 tasses : farine tout usage") ;
    printf("1 tasse : Beurre non salé(température ambiante)") ;
}

```

## Commentaires

Lorsque nous écrivons du code, il est important de documenter le comportement du code. Une façon de le faire est d'ajouter des commentaires à notre code.

Commencer une ligne par un double slash avant, `//`, créera un commentaire et la ligne entière sera ignorée lorsque nous exécuterons le code.

```c
// Ceci est un commentaire d'une seule ligne

// Il s'agit de 2 commentaires d'une seule ligne
// ensemble pour expliquer un peu plus

```

Les commentaires comme ceux ci-dessus peuvent être ajoutés au-dessus d'une ligne ou d'un bloc de code pour décrire le comportement du code. Des commentaires plus courts peuvent également être ajoutés à la fin d'une ligne de code.

```c
printf("Mon chien est heureux !") ; // Ce que ressent mon chien
```

Dans les deux exemples, une fois que vous avez utilisé `//`, le reste de la ligne est maintenant un commentaire.



Si vous voulez créer un commentaire avec un début et une fin, vous pouvez utiliser `/*` pour commencer le commentaire et `*/` pour le terminer. C'est ce qu'on appelle un commentaire de bloc :

```c
/* La sortie suivante sera
une expression de mon chien dans un
moment de pure joie après avoir vu
un autre chien de l'autre côté de la rue. */
printf("Woof !") ;
```

Comme vous pouvez le voir dans l'exemple ci-dessus, un commentaire de bloc peut envelopper plusieurs lignes sans utiliser autre chose que la notation de début `/*` et la notation de fin `*/`.

### À vous de jouer ! 🤠



1. Au-dessus de la première instruction `printf()` dans `main()` :
    - Ajoutez un commentaire d'une ligne avec votre propre message sur la chaîne de caractères qui est affichée.

2. Maintenant, donnez-vous un peu plus d'espace pour commenter votre code.
    - Au-dessus de la deuxième instruction `printf()` dans `main()` :
    - Ajoutez un commentaire de bloc avec vos pensées étendues sur cette chaîne de caractères.

Bien que vos ajouts au code ne modifient pas le résultat, vous avez maintenant enregistré vos réflexions sur le code, ce qui pourrait s'avérer utile lorsque vous revisitez le code une autre fois.

```c
#include <stdio.h>

int main() {

  printf("Les cookies aux pépites de chocolat sont bien meilleurs que les cookies à l'avoine et aux raisins secs.\n") ;


  printf("Apprendre le langage de programmation C est une aventure passionnante!\n") ;
}
```

## Qu'est-ce qu'une variable en C ?

Dans cette leçon, vous apprendrez :

1. Les règles pour nommer les variables en C.
2. Les principaux types de données en C : `int`, `float`, `double`, et `char`.
3. La déclaration et l'initialisation des types de données en C, ainsi que la modification de leur valeur.
4. Le transtypage d'un type de données à un autre, et certaines limitations potentielles en C.

Commençons par ce qu'est une variable. Il s'agit d'une référence utilisée pour stocker des informations en vue d'une utilisation ultérieure.

Par exemple, `int score` peut être appelé plus tard dans votre code pour affecter, modifier, comparer, etc.

Dans cet exemple, vous pouvez voir que la structure de base de la création d'une variable (appelée déclaration) est le `type nom_variable`. N'ayez crainte, nous allons passer en revue chaque partie de cette déclaration et plus encore dans cette leçon. Plus précisément, nous verrons comment les créer, les nommer, les affecter, les modifier et les convertir en différents types.

En guise d'astuce, vous pouvez créer plusieurs variables du même type à la fois en les listant avec des virgules entre leurs noms:

```c
type variable1, variable_2, variable_3, variable4;
```

## Normes de dénomination

Nous allons commencer par la deuxième partie de notre déclaration de variable, ` type nom_variable`, le `nom_variable`.

Le langage C ne vous permet pas de jeter n'importe quoi et de l'appeler un nom de variable, il y a quelques restrictions.

- Les **noms** peuvent être **composés** de lettres **majuscules et minuscules**, de **chiffres** et de **caractères de soulignement**.

- Le premier caractère doit être une lettre (majuscule ou minuscule).
- Aucun mot clé n'est autorisé comme nom complet (int n'est pas autorisé mais int_count fonctionnerait).

C'est tout, rien de bien folichon, gardez simplement ces règles à l'esprit lorsque vous créez les noms de vos variables.

### À vous de jouer ! 🤠

1. Le code ci-dessous comporte des erreurs dans chacune des déclarations de variables. Regardez les règles pour les noms de variables ci-dessus et corrigez chacune d'entre elles afin qu'il y ait une déclaration de variable par ligne et que le code compile.

Une fois terminé, vous verrez "Hello World" dans la fenêtre de sortie.

```c
#include<stdio.h>

int main() {

  int nombre!;
  int test valeur;
  int 1exemple;
  float int;
  printf("Hello World!\n");

}
```

## Types de données

Qu'en est-il de la première partie de notre modèle  `type` (de `type nom_variable`) ?

Nous avons vu quelques exemples dans l'exercice précédent lorsque vous avez corrigé les mauvais noms de variables, mais parlons de ce qu'ils sont.

Le type d'une variable indique le type d'information qui peut y être stocké. Le C dispose d'un bon nombre de types que vous pouvez utiliser, mais dans cette leçon, nous allons passer en revue les plus courants : `int`, `float`, `double`, et `char`.


En C, vous devez spécifier le type de la variable lorsque vous la déclarez. Une fois qu'il est défini, ce type d'information est le seul type qui peut aller dans cette variable. Ainsi, si vous créez une variable de type `int`, qui ne peut stocker que des nombres entiers, vous ne pourrez pas y stocker `a` ni `1.2`.

Le tableau ci-dessous détaille les types de variables que nous allons examiner et les informations qui peuvent y figurer.

```
Type        	Description	                             Valeurs
int	          un nombre entier	                     -2,147,483,648 à  2,147,483,647
float	      un nombre avec décimales 	             6 decimal places
double	      un nombre avec décimales	             15 decimal places
char	      stocke un caractère (lettre ou chiffre) un unique caractère

```

Vous vous posez peut-être quelques questions en lisant ces descriptions. Quelle est la différence entre un `float` et un `double` ?

Le caractère `char ` contient une seule *lettre* ou un seul *chiffre*, mais que se passe-t-il si vous voulez stocker quelque chose comme le nom d'une personne, qui a plus d'un caractère (dans la plupart des cas) ?

Cela devient un peu plus technique et vous apprendrez comment cela fonctionne dans la leçon sur les chaînes de caractères plus tard dans le cours !

### À vous de jouer ! 🤠

1. Le code dans l'éditeur est prêt à afficher des informations de base sur un étudiant imaginaire. Le problème est que le programmeur a oublié de déclarer les types de données pour chaque variable en haut du programme, ce qui entraîne des erreurs.

Allez-y et ajoutez les types de données appropriés à chaque variable de sorte que lorsque vous exécutez l'application, le programme se termine et les informations sur l'étudiant s'affichent.

```c
#include <stdio.h>

int main() {

  // Corrige les types de données manquants
  rangEleve ;
  totalFraisScolarite ;
  noteEtudiantLettre ;

  // Il n'est pas nécessaire d'apporter des modifications en dessous, utilisez-les comme une indication de la manière dont chaque variable ci-dessus doit être déclarée.
 rangEleve = 1 ;
 totalFraisScolarite = 100.56 ;
 noteEtudiantLettre = 'A' ;

 printf("Rang de l'élève dans la classe : %dst\n", rangEleve) ;
 printf("Total des frais de scolarité de l'étudiant : $%3.2f\n", totalFraisScolarite) ;
 printf("Note de l'étudiant : %c\n", noteEtudiantLettre) ;
}

```

## printf()

Nous allons faire un petit détour pendant une minute pour vous aider à comprendre ce qui se passe dans le code des leçons. Vous avez peut-être remarqué `printf()` au bas de certains exercices. Cette fonction permet d'envoyer du texte au terminal.

Le format de base est `printf("chaîne à afficher", [liste de paramètres facultatifs])`.

Ainsi, si vous aviez quelque chose comme `printf("Hello World !")`, le terminal afficherait **Hello World !**

Les paramètres facultatifs vous permettent d'ajouter des valeurs de manière dynamique à la chaîne de caractères, telles que les valeurs stockées dans les variables que nous avons étudiées. Par exemple, si nous voulions afficher `Hello World, aujourd'hui nous sommes le 3éme jour`, nous pourrions le faire comme suit :

```c
int jour = 3;
printf("Hello World, aujourd'hui nous sommes le %déme jour", jour);
```

Lorsque le compilateur exécutera le code, il remplacera `%d` par la valeur de la liste de variables, en les prenant dans l'ordre trouvé dans la chaîne de caractères correspondant à l'ordre dans lequel elles sont listées ; la première dans la chaîne de caractères correspond à la première dans la liste de paramètres).

Il existe de nombreuses options de formatage et de types de paramètres qui peuvent être utilisées, mais pour nos besoins, voici quelques-unes des options de base.

Pour indiquer un type de variable que vous voulez remplacer :

```
symbole	    Type
%d ou %i	   int
%f	         double ou float
%c	         char
```

Vous pouvez également utiliser certains symboles réservés dans la chaîne de caractères pour invoquer le formatage, dont voici quelques exemples courants.

```
symbole	effet
\n	nouvelle ligne
\r	retour à la ligne
\t	tab
```

## À vous de jouer ! 🤠

1. Ajouter la commande newline à la fin du premier `printf()` pour que la sortie soit plus propre.

2.  Modifiez la commande `printf()` dans le code pour ajouter la variable à la sortie afin que la sortie ait un sens.


```c
#include <stdio.h>

int main() {

 int ageApprentissageVelo = 5 ;
 printf("J'avais ans quand j'ai appris à faire du vélo.") ;
 printf("J'espère que je me souviens encore comment faire du vélo.") ;

}
```

## Initialisation

Revenons à la compréhension des variables en C. Maintenant que nous avons notre variable, que nous connaissons son nom et ce qu'elle peut contenir, que faisons-nous avec elle ?

Pour l'instant, elle est vide et ne sert pas à grand-chose. Le pouvoir d'une variable vient de sa capacité à être définie, modifiée et examinée. La question est donc de savoir comment faire cela.

Il existe deux façons de définir une valeur. Pour l'instant, voyons comment définir la valeur lorsque vous créez la variable elle-même :

```c
int exemple = 3 ;
```

Dans ce cas, non seulement vous avez créé la variable, l'avez nommée **exemple** et l'avez identifiée pour contenir des nombres entiers, mais vous avez également défini sa valeur comme étant `3`. Nous avons gagné du temps en faisant toutes ces parties en une seule ligne !

Lorsque vous déclarez un caractère `char`, vous devez l'entourer de guillemets simples :
```c
char a = 'a';
char deux = '2';
```

### À vous de jouer ! 🤠

1. Le code comporte plusieurs variables (dont les noms et les types sont déjà correctement configurés). Tout d'abord, définissez une valeur appropriée pour la variable `nbLivres`.

    - Remarquez que le code se compile sans que les autres variables aient des valeurs spécifiques, mais vous obtenez des résultats étranges. C'est une bonne leçon à garder à l'esprit ; le compilateur exécutera votre code si vous ne définissez pas de valeur (dans la plupart des cas) mais vous ne pourrez pas dépendre de la valeur de la variable.

> C'est une bonne pratique de définir une valeur par défaut pour les variables que vous créez dès que cela est possible dans votre code.

2. Quelle est votre lettre préférée ? Entrez-la dans la valeur de `lettreFavorite`. N'oubliez pas que, comme il s'agit d'un caractère, vous devrez mettre des guillemets simples autour de la valeur lorsque vous la déclarez.

3. Avez-vous un chiffre préféré ? Entrez-le dans `lettreFavorite`. N'oubliez pas que, comme il s'agit d'un caractère, vous devrez mettre des guillemets simples autour de la valeur lorsque vous la déclarerez. En tant que caractère, il ne peut contenir qu'un seul chiffre. Par exemple, `7` est valide, mais `70` ne l'est pas.

4. Enfin, quel est le prix d'une barre chocolatée dans votre magasin local ? Entrez cette donnée dans la variable `prixBarreChocolat`.

```c
#include <stdio.h>

int main() {

  int nbLivres;
  char lettreFavorite;
  char nombreFavori;
  double prixBarreChocolat;

  printf("Nombre de livres: %d\n", nbLivres);
  printf("Votre lettre favorite est : %c\n", lettreFavorite);
  printf("Votre chiffre favori est: %c\n", nombreFavori);
  printf("Vous payez %.2f€ pour une barre de chocolat.\n", prixBarreChocolat);
}
```

## Float et Double, quelle est la différence ?

Alors pourquoi existe-t-il deux types différents de décimales en C ? En bref, il existe différents types pour différentes situations.

Un flottant `float` est moins précis qu'un `double`, respectivement 6 et 15 décimales possibles, et occupe donc moins de mémoire (4 et 8 octets). Cependant, un double s'exécute plus rapidement, et vous gagnez donc en vitesse au prix d'une utilisation accrue de la mémoire.

L'autre chose dont il faut être conscient est que le système arrondit les valeurs que vous stockez dans l'un ou l'autre. Cela peut entraîner des résultats inattendus, en particulier avec les valeurs flottantes, car elles sont moins précises. C'est pourquoi vous verrez que le double est utilisé chaque fois que la précision est importante, comme dans les applications scientifiques, médicales ou financières.



### À vous de jouer ! 🤠

1. Dans cet exemple, une grande partie du code est déjà en place, ne vous inquiétez pas si vous ne pouvez pas encore suivre tout ce qui se passe, vous apprendrez les boucles dans une leçon ultérieure. Pour l'instant, vous voudrez expérimenter avec `nombreBoucles` et continuer à augmenter sa valeur jusqu'à ce que quelque chose d'inhabituel se produise avec la sortie, en particulier la valeur flottante `float`.

    En général, le programme prend un double et un flottant et ajoute `0.1` à chacun d'eux, et ce, un nombre de fois égal à `nombreBoucles`. Ainsi, si vous fixez la valeur à `10`, cela signifie qu'il ajoute `0.1` dix fois, ou 0.1 x 10, ce qui donne une valeur de sortie de `1.0`. `float` et `double` vous donnent tous deux cette valeur, mais si vous augmentez le nombre de boucles, `float` commencera à donner des résultats inattendus, montrant sa précision inférieure et ses problèmes d'arrondi.

```c
#include <stdio.h>

int main() {

  // Modifiez la valeur de cette variable, commencez doucement et augmentez jusqu'à ce que quelque chose de bizarre apparaisse dans les résultats.
  int nombreBoucles = 10 ;

  // Ne modifiez rien en dessous de ce point
  float a = 0.1f ;
  float b = 0 ;
  double x = 0.1 ;
  double y = 0 ;

  printf("Au départ, notre cible float b est:%f\n", b) ;
  printf("Au départ, notre cible, le double y, est:%f\n", y) ;

// Si vous êtes curieux de savoir ce que fait ce code, il boucle et ajoute à nos variables b et y une quantité définie de 0,1 à chaque boucle.
  for(int i = 0 ; i < nombreBoucles ; i++)
  {
    b += a ;
    y += x ;
  }

  printf("A la fin, notre cible float b est:%f\n", b) ;
  printf("A la fin, notre cible double y est:%f\n", y) ;

}
```  

## Mise à jour des valeurs

Auparavant, nous avons dit qu'il y a deux moments où vous pouvez définir la valeur d'une variable. Nous venons d'examiner comment la définir lors de la déclaration, mais si c'était le seul endroit où elle pouvait être définie, les variables auraient une valeur limitée (nous verrons dans un moment une exception à cette règle). Il s'avère qu'elles peuvent également être définies à tout moment dans le code ! Par exemple :

```c
int unites_total;
…
…
…
unites_total = 3;
```

Remarquez qu'une fois que nous avons déclaré le type, nous ne faisons plus référence au type, nous utilisons simplement le nom de la variable. Vous pouvez également définir une variable pour qu'elle soit identique à ce qui est stocké dans une autre variable, par exemple `a = b`. Si vous modifiez `b` par la suite, les valeurs ne correspondront plus (il existe un moyen de lier les deux variables pour qu'elles correspondent toujours, mais nous y reviendrons dans une prochaine leçon).

N'ayez crainte, nous verrons bientôt comment faire des choses plus avancées avec les valeurs stockées dans une variable.

### À vous de jouer ! 🤠

1. Dans le programme ci-contre, quelqu'un a créé le code initial en déclarant et en configurant des informations sur un livre devenu film. La sortie a également été prise en charge. Ce que vous devez faire, c'est mettre à jour les valeurs en fonction des informations changeantes du marché.

    - Les premières critiques du film étaient généreuses, mais ont baissé depuis le week-end d'ouverture, la note moyenne du film est maintenant un C, veuillez mettre à jour cette note.


2. En raison de la baisse des ventes de billets de cinéma, les cinémas décident d'aligner le prix du livre pour compenser leur manque à gagner. Fixez le prix du billet de cinéma au même niveau que le prix du livre.

```c
#include <stdio.h>

int main() {

  // Ces variables ont été créées et avaient une valeur de départ pour vous, pas besoin de les modifier.
  char noteLivre = 'A' ;
  char noteFilm = 'B' ;
  double prixCinema = 10.25 ;
  double prixLivre = 19.99 ;

  // Mise à jour de la note de la critique du film ici

  // Mettez à jour le prix du billet ici


  // Pas besoin de modifier ce qui suit
  printf("La version livre a obtenu une note de %c et coûte $%.2f\n", noteLivre, prixLivre) ;
  printf("La version cinéma a reçu une note de %c et coûte $%.2f\n", noteFilm, prixCinema) ;
}
```

## Constantes

Dans la plupart des cas, les valeurs des variables peuvent être modifiées dans le programme. Cependant, il y a des cas où vous ne voulez pas permettre à vos variables de changer de valeur. C'est là que les constantes entrent en jeu. Ces types spéciaux empêchent toute modification en cours d'exécution une fois que la valeur est fixée lors de la déclaration.

Tout type de données de base en C, comme ceux que nous avons vus, peut être déclaré comme une constante en utilisant le mot-clé `const` devant le type. Ainsi, au lieu que notre modèle soit de `type nom_variable`, il serait `type const nom_variable`.

Il est également préférable d'utiliser toutes les majuscules lors de la déclaration d'une constante :

```c
const int JOURS_SEMAINE = 7;
```

### À vous de jouer ! 🤠

1. La vitesse de la lumière est une constante, donc un excellent candidat pour un exemple du type de variable const.
    - Pour la première étape, identifiez la `VITESSE_LUMIERE` comme une constante.

Remarquez que le nom est déjà entièrement capitalisé pour correspondre aux meilleures pratiques en matière de constantes.

2. Le programme viole maintenant les règles des constantes. Nous savons que la vitesse de la lumière ne change pas, alors comment pouvez-vous faire en sorte que le code s'exécute correctement en obéissant aux règles des constantes ?

```c
#include <stdio.h>

int main() {

// La vitesse de la lumière est de 1.86e5 mi/s ou 186000 mi/s nous allons stocker 1.86 et faire la multiplicaiton plus tard.
  double VITESSE_LUMIERE ;
  int voyageDansTempsSecondes = 30 ;

  VITESSE_LUMIERE = 1.86 ;


  // Il n'est pas nécessaire de modifier ce qui suit
  printf("La lumière parcourrait %.2f km en %d secondes\n", VITESSE_LUMIERE * 100000 * voyageDansTempsSecondes, voyageDansTempsSecondes) ;

}
```

## Transtypage de types

Il est parfois utile, voire nécessaire, de modifier le type de valeur d'une variable et de l'utiliser à d'autres fins. Par exemple, si vous aviez un double avec un pourcentage de réussite à un test, disons `0.95`, vous voudriez très probablement afficher 95 % à l'utilisateur.

Remarquez que nous ne changeons pas le type de la variable, ni la valeur stockée dans la variable source. Ce que nous faisons, c'est afficher la variable modifiée comme un nouveau type ou la stocker dans une autre variable qui pourrait être d'un type différent.

Vous ne pouvez donc pas faire cela :

```c
int a;
double b = 3.0;
a = b;
```

Il existe deux types de conversions, implicite et explicite.

Lorsque vous définissez une variable comme étant identique à une autre, comme `a = b` ci-dessus, mais que leurs types ne correspondent pas, le compilateur tente de les convertir. Cependant, cela peut s'avérer dangereux, car vous ne savez pas toujours quelles seront les valeurs de la variable au moment de l'exécution, et il se peut qu'elle ne soit pas implicitement convertible en un autre type. Notre exemple ci-dessus était implicite, le compilateur dans ce cas fera une meilleure estimation.

L'autre façon de convertir une variable d'un autre type est explicite. Vous pouvez le faire en indiquant simplement au compilateur le type auquel vous souhaitez la définir. Ainsi, dans notre exemple ci-dessus, nous pourrions changer la ligne `a = b` en `a = (int)b`. De cette façon, si b était différent de 3.0, par exemple 3.2, nous demandons au compilateur de faire en sorte que cela fonctionne et qu'il le mette à 3.

### À vous de jouer ! 🤠

1. Reprenons notre exemple ci-dessous où nous voulons prendre la note en pourcentage sous la forme d'un `double` et la convertir en un `int` pour l'affichage. Définissez `scoreAffichage` comme étant `scoreTest`.

2. Essayez maintenant d'effectuer la conversion de manière explicite en ajoutant `(int)` à votre paramètre `scoreAffichage = scoreTest` ;

```c
#include <stdio.h>

int main() {

  double scoreTest = 95.7 ;
  int scoreAffichage = 0 ;


  // Pas besoin de modifier ce qui suit
  printf("Bon travail, tu as obtenu un %d%% à ton test\n", scoreAffichage) ;

}
```

## Suite du transtypage des types

Une option de conversion plus intéressante consiste à convertir un caractère en un type numérique, ou inversement. Comme précédemment, vous devez faire attention à la manière dont vous configurez cette option.

En arrière-plan, un caractère ne stocke pas `a`, il stocke la valeur qui le représente : `97` pour les minuscules et `65` pour les majuscules.

```c
int cibleInt;
char sourceCar = 'a';
cibleInt = (int)sourceCar;
```

Maintenant, `cibleInt` est égal à 97.

Lorsque vous convertissez un `int` en `char`, vous obtenez le processus inverse et le char est défini à la valeur de l'int. Donc si vous faites :

```c
int sourceInt = 65;
char cibleChar;
cibleChar = (char)sourceInt;
```

`cibleChar` est maintenant égal à `A`.


### À vous de jouer ! 🤠


1. Si `a` vaut 97, que pensez-vous que nous obtiendrions si nous donnions à un int la valeur `99` et le transformions en un `char` ? C'est ce que nous allons découvrir. L'état initial est défini, vous devez donc convertir notre `sourceInt` en `cibleChar`.

    - Définissez `cibleChar` comme étant égal à `sourceInt` et transtypez-le explicitement en utilisant `(char)`.


2. Voyons maintenant ce qui se passe lorsque vous convertissez un `double` en un caractère. Définissez `cibleChar` sur `sourceDouble` en utilisant une conversion implicite (aucun identifiant de type pour la conversion).

```c
#include <stdio.h>

int main() {

    char cibleChar ;
    int sourceInt = 99 ;
    double sourceDouble = 55.67 ;

    // Changer le type ici


    // Pas besoin de modifier ce qui suit
    printf("source int %d, source double, %.2f, target %c\n", sourceInt, sourceDouble, cibleChar) ;

}
```


## Table ASCI

La table `ASCII` (American Standard Code for Information Interchange) est un code de caractères utilisé pour représenter les lettres, chiffres et symboles sur les ordinateurs.

Chaque caractère est assigné à un nombre unique, appelé code `ASCII`.

En C, vous pouvez utiliser des variables de type `char` pour stocker des caractères et utiliser des constantes numériques pour représenter les codes ASCII correspondants.

Par exemple, le code ASCII pour la lettre `A` est 65 et pour `a` est `97`. Vous pouvez utiliser ces codes pour effectuer des comparaisons ou des calculs avec des caractères.

Voici un exemple simple de l'utilisation de la table ASCII en C:

```c
#include <stdio.h>

int main() {
    char c = 'A';  // déclarer une variable de type char pour stocker la lettre 'A'
    int ascii_code = (int) c;  // convertir la variable en entier pour obtenir le code ASCII correspondant

    printf("Le code ASCII pour la lettre %c est %d\n", c, ascii_code);  // Afficher le résultat

    return 0;
}
```

Ce programme déclare une variable de type char nommée `c` et l'initialise avec la valeur `A`.

Il convertit ensuite cette variable en entier en utilisant le type de conversion `(int)` pour obtenir le code `ASCII` correspondant, qui est `65`.

Le résultat est affiché à l'écran avec la fonction `printf()`.

Il est également possible de utiliser des constantes numériques pour représenter les codes `ASCII`:

```c
    printf("Le code ASCII pour la lettre %c est %d\n", 'A', 65);  // Afficher le résultat
```

Vous pouvez également utiliser les codes `ASCII` pour effectuer des comparaisons avec des caractères, par exemple :

```c
char c = 'A';
if (c == 65) {
    printf("La variable contient la lettre A\n");
}
```

Ce serait un exemple de base de l'utilisation de la table `ASCII` en `C`. Il existe de nombreux autres exemples d'utilisations possibles, comme la saisie de caractères à partir du clavier, la modification de la casse des caractères, etc.

## Entrée utilisateur

Pour réaliser une entrée utilisateur en C, vous pouvez utiliser la fonction `scanf()`.

C'est une fonction standard en C qui permet de lire des données à partir de l'entrée standard (généralement le clavier) et de les stocker dans des variables. Elle prend en argument un format de chaîne de caractères qui indique le type de données à lire, ainsi que les adresses des variables où les données seront stockées.

La syntaxe générale de `scanf()` est la suivante :

```c
scanf(format, &variable1, &variable2, ...);
```
Les codes de format couramment utilisés sont :

- %d pour lire un entier
- %f pour lire un nombre réel
- %c pour lire un caractère
- %s pour lire une chaîne de caractères

Par exemple, pour lire un entier et un nombre réel saisis par l'utilisateur, vous pouvez utiliser le code suivant:

```c
int n;
float x;
printf("Entrez un entier et un nombre réel : ");
scanf("%d %f", &n, &x);
```

Il est important de noter que `scanf()` **ne vérifie pas** si les données saisies correspondent au format spécifié. Si l'utilisateur saisit une valeur qui ne peut pas être convertie en entier, par exemple, `scanf()` va quand même stocker la valeur dans la variable correspondante, ce qui peut entraîner des erreurs de programme.

> Il est donc recommandé de vérifier manuellement les données saisies ou utiliser des fonctions de vérification de saisie telles que sscanf() ou strtol() pour éviter les erreurs.
