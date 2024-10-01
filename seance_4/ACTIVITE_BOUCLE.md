# Les boucles

## Introduction

Une boucle est un moyen de répéter un code ou un ensemble d'instructions jusqu'à ce qu'une condition spécifique soit atteinte.

Par exemple, avez-vous déjà cherché quelqu'un dans une épicerie ? Vous vérifiez chaque allée jusqu'à ce que vous la trouviez. Vous effectuez naturellement certaines tâches avec une répétition, ou itération, jusqu'à ce qu'une condition soit remplie. Dans ce cas, lorsque vous apercevez enfin une personne familière !

Le terme générique "itérer" signifie "répéter". Vous verrez que, tout comme dans la vie réelle, vous utiliserez des boucles dans votre code en permanence ! Et tout comme ce GIF infini de blocs qui tournent, une tâche peut se répéter apparemment à l'infini, mais vous avez toujours un moyen de contrôler quand elle s'arrête.

![blocs](./ressources/boucle.gif)

Lorsque nous voyons qu'un processus doit être répété plusieurs fois de suite, nous écrivons une boucle. Les boucles nous permettent de créer un code efficace qui automatise les processus pour en faire des programmes évolutifs et gérables.

Dans cette leçon, nous allons découvrir trois types de boucles : les boucles while, do-while et for !


## Boucle while

Comme premier exemple de répétition, nous avons le premier programme jamais exécuté sur un ordinateur à programme enregistré (l'EDSAC). Il a été écrit et exécuté par David Wheeler dans le laboratoire d'informatique de l'université de Cambridge, en Angleterre, le 6 mai 1948, pour calculer et imprimer une simple liste de carrés comme celle qui suit :

```
0    0
1    1
2    4
3    9
4    16
5    25
6    36
7    49
8    64
9    81
```

A gauche, il y a les chiffres de 0 à 9. À droite, on trouve leurs carrés. Par exemple, pour le nombre 9 : 9 * 9 = 81.

Remarque : un algorithme comme celui-ci est l'un des exemples les plus simples de boucle nécessaire. Mais au fur et à mesure que vous développerez vos compétences en programmation, vous découvrirez de plus en plus d'astuces et d'utilisations subtiles pour intégrer les boucles dans votre code !



Avant de nous plonger dans la syntaxe de la boucle `while`, faisons une démonstration.

Vous trouverez un programme à exécuté qui demande et vérifie un mot de passe. Il utilise une boucle `while` pour demander le mot de passe à l'utilisateur encore et encore.

Note : Vous n'avez pas besoin de comprendre le code pour l'instant.


## A vous de jouer ! 🧩 🎮

1. Copiez collez le code suivant dans votre éditeur

  ```c
  #include <stdio.h>

  int main() {

    int pin = 0;
    int essais = 0;

    printf("Bienvenue chez Gringotts\n");

    printf("Entrez votre code PIN : ");
    scanf("%d", &pin);

    essais++;

    // Boucle while
    while (pin != 1234 && essais < 3) {

      // Contenu à exécuter tant que la condition est vraie
      printf("Entrez votre code PIN: ");
      scanf("%d", &pin);
      essais++;

    }

    if (pin == 1234) {

      printf("PIN accepté!\n");
      printf("Vous pouvez accéder à votre compte.\n");

    }

    return 0;

  }
  ```


  2. Compilez et exécutez.

    Lorsque le programme vous demande d'entrer votre PIN :, essayez ce qui suit :

    - Appuyez sur `1111` et appuyez sur la touche `Entrée`.

    - Appuyez sur `2019` et appuyez sur `Entrée`.

    - Appuyez sur `1234` et appuyez sur `Entrée`.

### Devinez le nombre

Maintenant que nous avons vu une démonstration des boucles, écrivons-en une !

La boucle `while` ressemble beaucoup à une instruction `if`. Et tout comme l'instruction `if`, elle **exécute le code** qu'elle contient **si la condition est vraie**.

Cependant, la différence est que la **boucle while continuera à exécuter le code qu'elle contient**, encore et encore, tant que la condition est vraie.

Voici à quoi ressemble une boucle `while` :

```
while (condition) {

  // Contenu à exécuter

}
```

En d'autres termes, au lieu de s'exécuter si quelque chose est vrai, elle s'exécute pendant que cette chose est vraie.

```c
while (devinette != 8) {

  printf("Mauvaise réponse, essayez encore : ");
  scanf("%d", &devinette);

}
```

Dans cet exemple, tant que `devinette` n'est pas égal à 8, le programme continuera à demander à l'utilisateur de saisir un nouveau nombre. Il quittera la boucle while dès que l'utilisateur aura tapé 8, puis le programme continuera son exécution.


## A vous de jouer ! 🧩 🎮

1. Copiez collez le code suivant dans votre éditeur

  ```cpp
  #include <stdio.h>

  int main() {

    int devinette;

    int essais = 0;

    printf("Devinez un nombre entre 1 et 10.\n");

    scanf("%d", &devinette);

    // Écrire la boucle while ci-dessous

    if (devinette == 8) {

      printf("Bravo quelle chance !\n");

    }  

  }
  ```

Nous avons un programme qui demande à l'utilisateur de deviner un nombre entre 1 et 10 et la réponse est 8 !

2. Au lieu de demander à l'utilisateur de répondre une seule fois, ajoutons une boucle while pour qu'il réponde jusqu'à 10 fois !

```cpp
while (devinette != 8 && essais < 10) {

  printf("Mauvaise réponse, essayez encore : ");
  scanf("%d", &devinette);

  essais++;

}
```

**Rappel**: Le symbole `&&` signifie **et** et il combine deux conditions en une seule.

Dans cette boucle `while`, si `devinette` n'est pas égal à 8 et que le nombre d'essais est inférieur à 10, nous demandons à l'utilisateur de taper un nombre une nouvelle fois.

Puis nous ajoutons **1** aux essais en utilisant l'opérateur `++`.

**Remarque** : La boucle `while` est à manier avec précaution, en effet si la condition de la boucle ne change pas, la boucle peut tourner indéfiniment et bloquer ainsi l'exécution du programme à cette étape.

```cpp
 while (true) {
   // Aucun changement de prévu durant l'exécution de cette boucle
    printf("Coucou !\n");
 }
```

Vous verrez s'afficher "Coucou !" à **"l'infini"** sur la console.

**Si vous travaillez à partir d'une invite de commande ou d'un terminal, pour mettre fin à l'exécution du programme, tapez `Ctrl+C` sur le clavier.**



## A vous de jouer ! 🧩 🎮

1. Démarrer d'une version vierge sur votre éditeur.

2. Incluez la bibliothèque de base `stdio.h` et créer le squelette de la fonction principale `main`.

3. Déclarez et initialisée une variable entière `email` initialisée à `20`.

4. Ajoutez une boucle `while` avec pour condition de continuité que la variable `email` soit positive.

5. A l'intérieur du corps de la boucle, réalisez les opérations suivantes:
  - affichez **"un email supprimé, il reste `nb emails restant` emails"** ;
  - enlevez 1 à email

  <details>
  <summary>J'ai besoin d'aide ! 😱</summary>
  <p>
  Pour soustraire 1 ou décrémenter :

  ```cpp
  emails--;
  ```
  ou

  ```cpp
  emails = emails - 1;
  ```

  </p>
  </details>


6. **Après la boucle** lorsque votre boîte de réception atteindra zéro, demandez à votre programme d'affichez le message **"BOÎTE DE RÉCEPTION VIDE"** ou un autre message de félicitations.


## Boucle do-while 🧩 🎮

Maintenant que nous avons écrit une boucle while, écrivons une autre forme de cette boucle.

Nous allons d'abord examiner sa syntaxe puis expliquer ce qui se passe et pourquoi :

```c
do {
  // Instructions
} while (condition);
```

C'est étrange, la condition est apparue après les instructions. Cela signifie-t-il que la condition n'est pas vérifiée avant l'exécution des instructions ?

C'est exactement ce qui se passe !

C'est ce que l'on appelle une boucle do-while. Pour faire simple, elle commence par faire quelque chose, puis vérifie la condition après et boucle de cette manière jusqu'à ce que la condition ne soit plus vraie.

La boucle do-while est le plus souvent utilisée lorsqu'un programme veut faire quelque chose au moins une fois avant de vérifier la condition.

### À vous de jouer !


1. Partir d'un programme vierge sur votre éditeur.

2. Incluez le code suivant dans celui-ci:

  ```c
  #include <stdio.h>

  int main() {

    int i = 0;

    while (i < 10) {
      printf("%d\n", i);
      i++;
    }

    return 0;
  }
  ```

3. Transformez la boucle while en une boucle `do-while`.

4. Vous avez peut-être remarqué qu'il n'y avait pas de différence entre les résultats de cette boucle while et de cette boucle do-while.

  Pour voir exactement comment elles s'exécutent différemment, remplacez `int i = 0` par `int i = 11`.

Exécutez-la à nouveau. A votre avis, que va-t-il se passer ?



## Boucle for

L'**itération sur une séquence de nombres** est si courante que le **C**, comme la plupart des autres langages de programmation, possède une syntaxe spéciale pour cela.

Lorsque nous savons exactement combien de fois nous voulons répéter (ou lorsque nous comptons quelque chose), nous pouvons utiliser une boucle `for` au lieu d'une boucle `while` :

```c
for (int i = 0; i < 100; i++) {

  printf("Je ne lancerai pas d'avions en papier en classe..\n");

}
```
Examinons de plus près la première ligne :

```cpp
for (int i = 0; i < 20; i++)
```

Il y a trois parties distinctes séparées par des `;` :

- L'**initialisation** d'un compteur : `int i = 0`
- La **condition de continuation** : `i < 20`
- La **modification du compteur** (dans ce cas, un incrément) : `i++`.

Nous créons donc ici une variable `i` qui commence à **0**.

 Nous allons répéter le code à l'intérieur encore et encore lorsque **i est inférieur à 20**.

 A la fin de la boucle for, nous ajoutons 1 à i en utilisant l'opérateur `++` qui est la notation abrégé pour `variable = variable + 1`.


#### Boucle for incrémentale

```cpp
for (int i = 0; i < 20; i++) {
  // code à exécuter
}
```

#### Boucle for décrémentale

```cpp
for (int i = 20; i > 0; i--) {
  // code à exécuter
}
```

## A vous de jouer ! 🧩 🎮

1. En vous inspirant des exemples du dessus, créez un programme pour afficher sur la console les nombres de 1 à 5.

  Voici le résultat final:
  ```
  1
  2
  3
  4
  5
  ```

## Break
Lorsque vous travaillez avec des boucles, il est important de connaître quelques mots-clés spéciaux qui peuvent affecter le fonctionnement d'une boucle. Prenons un exemple rapide pour présenter le premier mot-clé spécial !

Vous vous souvenez de notre première boucle while ?

```c
while (devinette != 8 && essais < 10) {

  printf("Mauvaise réponse, essayez encore : ");
  scanf("%d", &devinette);

  essais++;

}
```

La boucle fonctionne jusqu'à ce que le 8 soit deviné ou que 10 tentatives aient été faites pour deviner le numéro secret. Cela signifie que la boucle s'arrête dès qu'une de ces conditions est remplie. Il existe une autre façon d'écrire ceci, mais en utilisant un mot-clé spécial. Voyez si vous pouvez la repérer !

```c
while (essais < 10) {
  scanf("%d", &essais);

  if (devinette == 8) {
    break;
  }

  printf("Mauvaise réponse, essayez encore : ");
  essais++;
}
```

Le mot clé `break` nous permet, littéralement, de "sortir" d'une boucle et de l'empêcher de s'exécuter à nouveau.

Il est souvent possible de l'éviter simplement en planifiant soigneusement la conditionnelle qui contrôle une boucle. Il est généralement conseillé d'être prudent avec l'interruption des boucles car cela peut entraîner un traitement inattendu lorsqu'un programmeur a un plan mental centré sur une boucle qui termine toutes ses itérations.

Cependant, lorsqu'il est utilisé efficacement, un `break` peut augmenter l'efficacité d'un programme et aider à minimiser son utilisation de la mémoire par des variables inutiles.

> Remarque : `break` est le plus souvent utilisé lorsqu'un programme souhaite exécuter une boucle à l'infini de manière contrôlée. Par exemple, un programme qui s'exécute jusqu'à ce que l'utilisateur tape "quit".

Dans ce cas, le programme peut s'exécuter indéfiniment, mais ne sortira de sa boucle que lorsque l'utilisateur le lui demandera.

## A vous de jouer ! 🧩 🎮

1. Dans un nouvel espace de travail vide, copiez collez le code suivant:

```c
#include <stdio.h>

int main() {

  int nombre1 = 1;
  int nombre_entree_1 = 0;

  while (nombre_entree_1 < 10) {

    printf("Boucle 1 - Veuillez entrer un nombre: ");
    scanf("%d", &nombre1);

    // Trouvez un moyen de vous échapper d'ici !




    nombre_entree_1++;
  }

  printf("Bien joué ! Vous êtes sorti!\n");
}
```

Dans notre programme, la boucle while s'exécute un nombre déterminé de fois ou jusqu'à ce qu'un nombre non positif soit saisi (ce qui inclut 0 et les nombres négatifs). Sans modifier la condition de la boucle while, essayez de faire en sorte qu'elle s'arrête lorsqu'un nombre non positif est saisi en utilisant le mot-clé `break`.


2. Vous avez peut-être remarqué que le mot-clé `break` n'est pas nécessaire ici pour arrêter l'exécution de la boucle.

  Créez une deuxième boucle `while` sous la première et utilisez la condition `nombre2 > 0 && nombre_entree_2 < 10`, puis écrivez la boucle normalement sans `break`.

  N'oubliez pas d'initialiser les nouvelles variables en haut du main.

3. Exécutez à nouveau le programme avec la deuxième boucle, vous verrez que les deux boucles agissent exactement de la même manière et s'arrêtent lorsqu'un nombre négatif est entré.



## Continue

Dans un jeu vidéo, l'écran "Game Over" vous permet souvent de "continuer" à partir d'une sauvegarde ou d'un point de contrôle précédent.

Les boucles peuvent faire cela de la même manière en utilisant `continue`, le deuxième mot-clé que nous allons apprendre dans cette leçon !

Dans une boucle, si un `continue` est atteint, il ignore immédiatement le reste des instructions à l'intérieur du corps de la boucle et "continue" à l'itération suivante.

Par exemple, regardons la syntaxe suivante :

```c
for (int i = 0; i < 10; i++) {
  if (i % 2 == 0) {
    continue;
  }
  printf("%d est impair\n", i);
}
```

À l'intérieur de la boucle `for`, nous voyons une instruction if qui vérifie si le compteur actuel, i, est un nombre pair en utilisant l'opérateur `%`.

  - Si i est pair, on passe à l'itération suivante et on saute l'instruction print ci-dessous.

  - Si i est impair, affichez  i et continuez normalement.

Remarque : Ces mots-clés peuvent affecter une boucle même s'ils sont contenus dans une instruction `if`.

Cela signifie qu'un continue passera toujours à l'itération suivante même s'il est imbriqué dans plusieurs instructions if / else ! Cela vaut également pour les autres mots-clés de boucle, comme `break`.

S'il y a des boucles imbriquées, un mot-clé n'interagira qu'avec la boucle la plus intérieure dans laquelle il est contenu.


## A vous de jouer ! 🧩 🎮

1. Dans un nouvel espace de travail vide, copiez collez le code suivant:

```c
#include <stdio.h>

int main() {

  int i = 0;

  while (i < 10) {
    // Trouvez comment sauter l'affichage de 5 ici.

    printf("%d\n", i);
    i++;
  }
}
```

2. Utilisez `continue` pour que la boucle while ignore l'instruction d'affichage lorsque `i == 5`.


3. Convertissez la boucle while en boucle for.

  De cette façon, vous n'avez pas à vous soucier de savoir si votre compteur s'incrémentera normalement lorsqu'un `continue` est appelé. Une boucle for incrémentera naturellement le compteur à la fin d'une itération donnée.



## Synthèse

1. Dans un nouvel espace vide, copiez-collez le code suivant:

  ```c
  #include <stdio.h>

  int main() {

    int apprentissage = 1 ;
    int cont ;

    while (apprentissage++ < 10) {

      printf("Félicitations ! Êtes-vous prêt à poursuivre votre apprentissage dans la prochaine leçon ?") ;
      printf("\n1 - Oui\n2 - Non\n") ;

      scanf("%d", &cont) ;

      if (cont == 1) {

        printf("Génial ! Partons et allons de l'avant !\n") ;
        break ;

      } else {

        printf("OK ! Continuez à vous entraîner ! Et n'oubliez pas de faire des pauses!\n") ;

      }

    }

  }
```
