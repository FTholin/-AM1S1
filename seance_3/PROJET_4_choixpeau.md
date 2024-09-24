# Le Choixpeau magique de Poudlard 🧙

```
Voici un peu plus de mille ans,
Lorsque j'étais jeune et fringant,
Vivaient quatre illustres sorciers
Dont les noms nous sont familiers
...
```

L'école de sorcellerie Poudlard vous souhaite la bienvenue !

Les élèves de première année doivent passer par la cérémonie annuelle de choix des maisons.

Le Choixpeau est un chapeau parlant de Poudlard qui détermine par magie à laquelle des quatre maisons de l'école chaque nouvel élève va appartenir :

- Gryffondor
- Poufsouffle
- Serdaigle
- Serpentard


Écrivez un programme `choixpeaux.cpp` qui pose quelques questions à l'utilisateur et le place dans l'une des quatre maisons en fonction de ses réponses !

## A vous de jouer ! 🧩 🎮

1. À la première ligne, inclure la bibliothèque de base pour les entrées & sorties.

2. Créez à la suite la fonction principale avec ses accolades.

A chaque fois qu'un participant au quiz répond à une question celui-ci reçoit des points pour une ou plusieurs maisons.

3. Déclarons ainsi quatre variables entières :
  - `gryffondor`
  - `poufsouffle`
  - `serdaigle`
  - `serpentard`

et initialisons-les à `0`.

4. Déclarons quatre autres variables entières pour stocker chacune de leurs réponses aux quatre questions du quiz :
  - `reponse1`
  - `reponse2`
  - `reponse3`
  - `reponse4`

Pensez bien à initialiser ces variables.

5. Ajoutons une instruction d'affichage qui indique au jeune sorcier qu'il a commencé le quiz avec la phrase `"Commençons l'épreuve du Choixpeau magique !"`.

6. Avant de continuer, `enregistrez`, `compilez` puis `exécutez` le programme en utilisant le terminal pour s'assurez qu'il n'a pas de bugs 🐛.

## Question 1) Quand je serai mort...

7. Et maintenant, la première question !

  Utilisez plusieurs instructions `printf` pour afficher la question suivante :

  `Q1) Quand je serai mort, je veux que les gens se souviennent de moi comme :`

  `1) Le bon`

  `2) Le grand`

 `3) Le sage`

 `4) L'audacieux`

8. Utilisez ensuite [scanf](http://ressources.unit.eu/cours/Cfacile/co/ch4_p5_6.html) pour recevoir une réponse de l'utilisateur.

  Stockez cette entrée dans `reponse1`.

Par la barbe de Gryffondor ! Nous avons la réponse de l'utilisateur mais maintenant nous avons besoin... d'une structure de logique conditionelle.

9. Ecrivez une structure conditionnelle pour cette logique :
  - si `reponse1 == 1`, ajoutez un point à `poufsouffle`.
  - sinon si  `reponse1 == 2`, ajoutez un point pour `serpentard`.
  - sinon si `reponse1 == 3`, ajoutez un point pour `serdaigle`.
  - sinon si `reponse1 == 4`, ajoutez un point pour `gryffondor`.
  - sinon affichez à la console **"Je n'ai pas compris votre choix jeune sorcier !"**

10. `Enregistrez`, `compilez` puis `exécutez` de nouveau le programme en utilisant le terminal pour s'assurez qu'il n'a pas de bugs 🐛.


## Question 2) Aurore ou crépuscule ?

11. Faites la même chose pour la question 1 :

  `Q2) Aurore ou crépuscule ?`

    `1) Aurore`

    `2) Crépuscule`

Utilisez de nouveau [scanf](http://ressources.unit.eu/cours/Cfacile/co/ch4_p5_6.html) pour récupérer l'entrée de l'utilisateur et la stocker dans `reponse2`.

12. Pour cette question, créez la logique suivante:
  - Si `reponse2 == 1`, un point est attribué à `gryffindor` et `serdaigle`.
  - Sinon, si la `reponse2 == 2`, un point est attribué à `poufsouffle` et à `serpentard`.

  - Sinon, affichez à la console **"Je n'ai pas compris votre choix jeune sorcier !"**


## Question 3) L'instrument

13. Faites la même chose pour la question 2 :
  `Q3) Quel est l'instrument de musique qui vous plait le plus ?`

  `1) Le violon`

  `2) La trompette`

  `3) Le piano`

  `4) Le tambour`

14. Pour cette question, voici la logique :
  - Si `reponse3 == 1`, ajoutez un à `serpentard`.
  - Sinon, si `reponse3 == 2`, ajoutez un à `poufsouffle`.
  - Sinon, si `reponse3 == 3`, ajoutez un  à `serdaigle`.
  - Sinon, si `reponse3 == 4`, ajoutez un à `gryffondor`.
  - Sinon, affichez à la console **"Je n'ai pas compris votre choix jeune sorcier !"**

## Question 4) Quelle route vous tente le plus ?

15. Faites la même chose pour la question 3 :

  `Q4) Quelle route vous tente le plus ?`

  `1) La large allée herbeuse et ensoleillée`

  `2) La ruelle étroite, sombre, éclairée par une lanterne`

  `3) Le chemin sinueux, parsemé de feuilles, à travers les bois`

  `4) La rue pavée bordée de bâtiments anciens`

16. Pour cette question, créez la logique suivante:
  - Si `reponse4 == 1`, ajoutez  un à `poufsouffle`.
  - Sinon, si `reponse4 == 2`, ajoutez un à `serpentard`.
  - Sinon, si `reponse4 == 3`, ajoutez un à `gryffondor`.
  - Sinon, si `reponse4 == 4`, ajouter un à `serdaigle`.
  - Sinon, affichez à la console **"Je n'ai pas compris votre choix jeune sorcier !"**

## La réponse finale

17. Maintenant, nous devons trouver laquelle de ces quatre maisons a le score la plus élevé !

  Nous aurons besoin d'une autre variable appelée `max` qui `commence à 0` et une chaîne de caractères vide avec :
  ```c
  char maison_choisie[100];
  ```

18. Afin d'utiliser la fonction [strcpy](https://www.programiz.com/c-programming/library-function/string.h/strcpy), nous allons importer la librairie `string.h`.

18. Créez la logique finale pour trouver la maison ayant le nombre maximum:
  - Si `gryffondor > max` alors `max = gryffondor` puis ajouter la ligne `strcpy(maison_choisie, "Gryffondor");`.

  - Si `poufsouffle > max` alors `max = poufsouffle` puis ajouter la ligne `strcpy(maison_choisie, "Poufsouffle");`.

  - Si `serdaigle > max` alors `max = serdaigle` puis ajouter la ligne `strcpy(maison_choisie, "Serdaigle");`.

  - Si `serpentard > max` alors `max = serpentard` puis ajouter la ligne `strcpy(maison_choisie, "Serpentard");`.

> L'utilisation de la fonction strcpy sera expliqué plus en détail dans une prochaine leçon.

19. Affichez au jeune sorcier la maison dans laquelle il a été choisi.


19. `Enregistrez`, `compilez` puis `exécutez` le programme en utilisant le terminal pour s'assurez qu'il n'a pas de bugs 🐛.


21. Bravo jeune sorcier !!, vous avez réalisé votre premier jeu.
