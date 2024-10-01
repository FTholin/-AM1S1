# Fizz Buzz

Fizz Buzz est une question d'entretien classique pour les développeurs, qui est posée ou mentionnée si souvent et depuis si longtemps qu'elle en devient presque un cliché !

Bien que ce défi puisse paraître très simpliste à ceux qui ont une certaine expérience du codage, il est conçu pour éliminer 99,5 % des candidats à un poste de programmation qui ne peuvent pas utiliser de manière créative leurs connaissances en codage pour résoudre des problèmes simples.


Nous allons écrire  un programme  qui affiche des nombres de 1 à 100.

Mais pour les multiples de 3, nous allons afficher `Fizz` au lieu du nombre et pour les multiples de 5, afficher `Buzz`. Pour les nombres qui sont des multiples à la fois de 3 et de 5, nous afficherons `FizzBuzz`.


```
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
16
    ...
98
Fizz
Buzz
```


## Ce que nous allons construire dans le projet :

1. Comme le déclare l'inventeur de ce défi, Imran Ghory :

  > "Après un certain nombre d'essais et d'erreurs, j'ai découvert que les personnes qui ont du mal à coder n'ont pas seulement du mal à résoudre les gros problèmes, ou même les petits problèmes (par exemple, écrire une implémentation d'une liste chainée). Ils ont du mal à résoudre de petits problèmes.  J'ai donc entrepris de développer des questions permettant d'identifier ce type de développeur et j'ai trouvé une catégorie de questions que j'ai appelée "Questions FizzBuzz", du nom d'un jeu auquel les enfants jouent souvent (ou qu'on leur fait jouer) dans les écoles du Royaume-Uni."


2. Partons d'un projet vierge et créons le squelette d'un programme C avec sa fonction `main` et son import de librairie habituel.

3. Comment afficher tous les nombres de 1 à 100 ?

  Eh bien, nous pourrions écrire `printf()` 100 fois de suite, mais ce n'est pas drôle. Que pouvons-nous faire d'autre ?

  C'est bien ça ! Une boucle for !

  **Ecrivez une boucle for qui commence à 1 et va jusqu'à 100.**

4. Dans la boucle for, nous affichons le compteur i.

5. Et maintenant nous avons tous les chiffres. Résolvons la partie difficile.

  Avant de continuer à coder, prenez une feuille de papier et faites un point. Comment vérifier si un nombre est divisible ou non par 3 ?

  Lorsque vous êtes prêt, essayez de créer la vérification de la divisibilité par 3.


6. Essayez maintenant de mettre en œuvre la vérification de la divisibilité par 5.


7. Maintenant, en combinant ce que vous avez trouvé pour 3 et 5, essayez de trouver un moyen de vérifier la divisibilité par 15 et mettez-le en œuvre.

8. Félicitations, vous avez terminé ! Exécutez votre code et voyez votre résultat pour le comparer à l'exemple d'affichage donné au début de l'activité.
