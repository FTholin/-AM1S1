# Pierre, papier, ciseaux, lézard, spock

Vous avez peut-être joué à Pierre, papier, ciseaux, mais avez-vous joué à Pierre, papier, ciseaux, lézard, spock ? Il s'agit du jeu rendu populaire par la série télévisée The Big Bang Theory.


Dans cette activité nous allons ecrire un programme `pierre_papier_ciseau.cpp` qui :

- Demande à l'utilisateur de **choisir entre Pierre, Papier, Ciseaux, Lézard ou Spock**.

- **Sélectionne aléatoirement pour l'ordinateur** Pierre, Papier, Ciseaux, Lézard ou Spock.

- **Compare** le choix de l'**utilisateur** et celui de l'**ordinateur** et **détermine le gagnant**.

- **Informe** l'utilisateur de l'identité du gagnant.

Nous allons d'abord nous attaquer à Pierre, Papier, Ciseaux, avant de le transformer en Pierre, Papier, Ciseaux, Lézard, Spock !

## Note du créateur Sam Kass:

"J'ai inventé ce jeu parce qu'il semble que lorsque vous connaissez quelqu'un suffisamment bien, 75 à 80 % des parties de Pierre, Papier, Ciseaux que vous jouez avec cette personne se terminent par une égalité. Eh bien, voici une légère variation qui réduit cette probabilité. Cette version est également intéressante car elle satisfait à la loi des cinq."



<details>
<summary>J'ai besoin d'aide ! 😱</summary>
<p>

- Les ciseaux coupent le papier.
- Le papier recouvre la pierre.
- La pierre écrase le lézard.
- Le lézard empoisonne Spock.
- Spock écrase les ciseaux.
- Les ciseaux décapitent le lézard.
- Le lézard mange le papier.
- Le papier réfute Spock.
- Spock vaporise la pierre.

(et comme il elle l'a toujours fait) la pierre écrase les ciseaux.



</p>
</details>


## A vous de jouer ! 🧩 🎮

## Mise en place

1. Commencez par écrire un commentaire de plusieurs lignes qui décrit ce que ce programme va faire.

2. Incluez la bibliothèque de base pour les entrées & sorties.

Dans ce programme, nous avons besoin d'un nombre aléatoire pour le choix de l'ordinateur.

3. Incluez cette bibliothèque en conséquence:
```cpp
#include <stdlib.h>
#include <time.h>
```

4. Créez à la suite la fonction principale avec ses accolades.

5. Ajoutez dans le main le code ci-dessous:
  ```cpp
  // srand(time(NULL)) initialise la fonction srand sur le temps actuel.
  srand (time(NULL));

  // nombre randomisé qui peut être 1, 2 ou 3
  int ordinateur = rand() % 3 + 1;

  // variable utilisateur
  int utilisateur = 0;
  ```

  <details>
  <summary>J'ai besoin de plus d'explication sur cette étape ! 😱</summary>
  <p>

  Le C++ possède une fonction `rand()` issue de `stdlib.h` qui génère un nombre aléatoire.

  Ainsi, si vous ajoutez `#include <stdlib.h>` au début de votre programme, vous pouvez utiliser la fonction `rand()` comme suit :

  ```cpp
  printf("%d", rand());
  printf("%d", rand());
  printf("%d", rand());
  ```
  cela affichera par exemple:

  ```
  1804289383
  846930886
  1681692777
  ```

  Pour cette partie du projet, nous ne voulons pas de nombres complètement aléatoires. Nous voulons soit 1, 2, ou 3.

  C'est là que l'opérateur **modulo** `%` entre en jeu ! L'opérateur modulo calcule le reste d'une division.

  En faisant `rand() % 3`, nous divisons le nombre aléatoire par 3 et trouvons le reste (et le reste ne peut être que 0, 1 ou 2).

  ```cpp
  printf("%d", rand() % 3);
  printf("%d", rand() % 3);
  printf("%d", rand() % 3);

  ```

  Cela transformera chaque nombre aléatoire en 0, 1 ou 2 :
  ```
  2
  0
  1
  ```

  Nous voulons 1, 2 ou 3 à la place, donc nous pouvons simplement ajouter 1 :

  ```cpp
  printf("%d", rand() % 3 + 1);
  printf("%d", rand() % 3 + 1);
  printf("%d", rand() % 3 + 1);

  ```

  </p>
  </details>


6. Avant de continuer, compilons et exécutons en utilisant le terminal pour nous assurer qu'il n'y a pas de bugs.

7. Invitez l'utilisateur à choisir entre Pierre, Papier ou Ciseaux :

```cpp
printf("====================\n");
printf("Pierre papier ciseaux !\n");
printf("====================\n");

printf("1) ✊\n");
printf("2) ✋\n");
printf("3) ✂️\n");

printf("Top ! \n");

```

8. Récupèrez l'entrée de l'utilisateur en utilisant `scanf` et la stocker dans la variable `utilisateur`.


## Implémentation de la logique de jeu

Maintenant que nous avons le choix de l'utilisateur et le choix aléatoire de l'ordinateur, utilisons les structures conditionnels et la logique pour déterminer le gagnant.

Assurez-vous de noter la logique de `Pierre Papier Ciseaux` sur une feuille de papier avant de commencer à coder.

Prenez votre temps !

## Version avec le lézard et Spock

9. Regardez la vidéo ci-dessus et retravaillez votre programme pour en faire la version The Big Bang Theory.

Assurez-vous de noter la logique sur une feuille de papier avant de commencer.