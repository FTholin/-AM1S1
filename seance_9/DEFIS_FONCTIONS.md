#  Fonctions

Réviser les fonctions en C en relevant quelques défis de code.

Certains de ces défis sont difficiles ! Prenez le temps d'y réfléchir avant de commencer à coder.

Vous n'obtiendrez peut-être pas la bonne solution du premier coup - regardez votre résultat, essayez de trouver où vous vous trompez, et itérez sur votre solution.

Créez un espace de travail vierge  créez les fonctions suivantes et testez les dans le main appliquant ce que vous avez appris à la leçon dernière.


## 1. Puissance dix

Créons quelques fonctions qui peuvent nous aider à résoudre des problèmes mathématiques ! Pour cette première fonction, nous allons prendre la puissance dix d'un nombre. Pour ce faire, nous devons faire trois choses :

1. Créer une entête de fonction puissance_dix qui accepte un paramètre.
2. Prendre la puissance dixième de la valeur d'entrée (utilisation de la [fonction pow](https://koor.fr/C/cmath/pow.wp)
3. Retourner le résultat
4. Tester la fonction
    - avec pour argument 1  qui doit renvoyer 1
    - avec pour argument 0  qui doit renvoyer 0
    - avec pour argument 2  qui doit renvoyer 1024


## 2. Pourcentage de victoire

Ensuite, nous allons créer une fonction qui calcule le pourcentage de parties gagnées. Pour ce faire, nous devons connaître le nombre total de parties et diviser le nombre de victoires par le nombre total de parties. 

Pour cette fonction, il y aura deux paramètres d'entrée, le nombre de victoires et le nombre de défaites. Nous devons également nous assurer que nous retournons le résultat sous forme de pourcentage (entre 0 et 100). Afin de créer cette méthode, nous devons suivre les étapes suivantes :

1. Définir l'en-tête de la fonction avec deux paramètres, les gains et les pertes.

2. Calculer le nombre total de parties en utilisant le nombre de victoires et de défaites.

3. Obtenir le ratio de victoire en utilisant le nombre de victoires sur le nombre total de parties.

4. Convertissez le ratio en pourcentage

5. Retournez le pourcentage

6. Tester la fonction
    - avec pour arguments 5 et 5  qui doit renvoyer 50
    - avec pour arguments 10 et 0  qui doit renvoyer 100
    
    
## 3. Moyenne

Créons une fonction qui prend la moyenne de deux nombres. Ces deux nombres seront l'entrée de la fonction et la sortie sera la moyenne des deux. Pour ce faire, nous devons procéder en quelques étapes :

1. définir la fonction avec deux paramètres d'entrée, num1 et num2
2. Calculer la somme des deux nombres
3. Divisez la somme par le nombre d'entrées de la fonction.
4. Retourner la réponse
5. Tester la fonction
    - avec pour arguments 1 et 100  qui doit renvoyer 50
    - avec pour arguments 1 et -1  qui doit renvoyer 0


## 4. Reste
Nous allons calculer le reste de deux nombres tout en effectuant d'autres opérations mathématiques sur ces derniers. Nous allons multiplier le numérateur par 2 et diviser le dénominateur par 2. Après avoir modifié les deux valeurs, nous allons les diviser et retourner le reste. Pour ce faire, nous devrons :

1. Définir la fonction pour qu'elle accepte deux paramètres.
2. Multiplier la première valeur d'entrée par 2
3. Diviser la deuxième valeur d'entrée par 2
4. Calculer le reste de la première valeur d'entrée modifiée divisée par la deuxième valeur d'entrée modifiée (en utilisant le module).
5. Renvoyer la réponse 
6. Tester la fonction
    - avec pour arguments 15 et 14  qui doit renvoyer 2
    - avec pour arguments 9 et 6  qui doit renvoyer 0


## 5. Dépassement de budget

Disons que nous essayons d'économiser de l'argent et que nous surveillons notre budget. 
Nous devons nous assurer que le résultat de nos dépenses est inférieur au montant total que nous avons allouer pour chacune des catégories.

Notre fonction acceptera un paramètre appelé `budget` qui décrit notre limite de dépenses. 

Les quatre paramètres suivants décrivent ce pour quoi nous dépensons notre argent.
Nous devons additionner toutes nos dépenses et les comparer au budget. 

Si nous avons dépassé le budget, nous retournons `1`.
Dans le cas contraire, nous renverrons `0`.

Voici les étapes dont nous avons besoin :

1. Définir une fonction `depassement_budget` pour accepter cinq paramètres, en commençant par le `budget`, puis la `facture_nourriture`, `facture_electricite`, `facture_internet` et le `loyer`.


2. Calculez la somme des quatre derniers paramètres


3. Utilisez les instructions `if` et `else` pour vérifier si le budget est inférieur à la somme calculée à l'étape précédente.


4. Si la condition est vraie, renvoyer `1`, sinon renvoyer `0`.

Conseil :
Assurez-vous que vous calculez la somme des quatre derniers paramètres ! Cela ressemblera à ceci : `facture_nourriture` + `facture_electricite` + `facture_internet` + `loyer`.

5. Tester la fonction
    - depassement_budget(100, 20, 30, 10, 40) -> 0
    - depassement_budget(80, 20, 30, 10, 30) -> 1
   
   
## 6. Deux fois plus grand

Dans ce défi, nous allons déterminer si un nombre est deux fois plus grand qu'un autre. 

Pour ce faire, nous allons comparer le premier nombre avec deux fois le deuxième nombre. 

Voici les étapes à suivre :

1. Définir notre fonction `deux_fois_plus_grand` avec deux entrées `num1` et `num2`


2. Multipliez la deuxième entrée par 2


3. Utilisez une instruction if pour comparer le résultat du dernier calcul avec la première entrée.

4. Retournez 1 si num1 est supérieur au double de num2. Sinon, retournez 0.

Conseil :
N'oubliez pas de multiplier la deuxième entrée par 2, et non la première. De plus, la fonction ne doit renvoyer true que si la première entrée est supérieure à deux fois la deuxième entrée, et non supérieure ou égale à.

5. Testez la fonction
    - deux_fois_plus_grand(10, 5) -> 0
    - deux_fois_plus_grand(11, 5) -> 1
  
  
## 7. Divisible par dix

Pour rendre les choses un peu plus difficiles, nous allons créer une fonction qui détermine si un nombre est divisible par dix ou non.

Un nombre est divisible par dix si le reste du nombre divisé par 10 est égal à 0. 

Grâce à cela, nous pouvons réaliser cette fonction en quelques étapes :

1. Créez une fonction appelée `divisible_par_10()` qui a un paramètre nommé `num`.


2. Calculer le reste de l'entrée divisée par 10 (utiliser le modulo)


3. Utiliser une instruction if pour vérifier si le reste est égal à `0`.


4. Si le reste est égal à 0, retourner `1`, sinon retourner `0`.


Conseil :
Nous pouvons calculer le reste à l'aide de l'opérateur modulo %. Si num % 10 est égal à 0, alors num est divisible par dix.  

5. Testez la fonction
    - divisible_par_10(20) -> 1
    - divisible_par_10(25) -> 0
    
    
## 8. Somme non égale à dix

Enfin, nous allons vérifier si la somme de deux entrées n'est pas égale à dix. 

Notre fonction va accepter deux entrées et les additionner. Si les deux nombres additionnés ne sont pas égaux à dix, alors nous retournerons true, sinon, nous retournerons false. Voici ce que nous devons faire :

1. Définir la fonction `somme_differente_dix` pour qu'elle accepte deux paramètres, `num1` et `num2`.
2. Additionez les deux paramètres ensemble
3. Tester si le résultat n'est pas égal à 10
4. Si la somme n'est pas égale, renvoyer `1`, sinon, renvoyer `0`

Conseil:
Rappelez-vous que pour tester si deux valeurs ne sont pas égales, nous utilisons `!=`.

5. Tester la fonction
    - somme_differente_dix(9, -1) -> 1
    - somme_differente_dix(9, 1) -> 0
    - somme_differente_dix(5,5) -> 0
    
## 9. Dans l'intervalle

Testons si un nombre se situe dans une certaine intervalle. Nous accepterons trois paramètres, le premier étant le nombre à tester, le deuxième la limite inférieure et le troisième la limite supérieure de notre fourchette. Voici les étapes à suivre :

1. Créez une fonction nommée `intervalle()` qui a trois paramètres nommés `num`, `inferieur` et `superieur`.

2. La fonction doit renvoyer `true` si `num` est supérieur ou égal à  `inferieur` et  inferieur ou égal à `superieur`. Sinon, elle renvoie `false`.

Conseil
N'oubliez pas de relier les conditions `>=` et `<=` avec l'opérateur booléen `&&`.

3. Tester la fonction
    - intervalle(10, 10, 10) -> true
    - intervalle(5, 10, 20) -> false
    

## 10. Évaluation des films

Nous voulons créer une fonction qui nous aidera à évaluer les films. Notre fonction divisera les évaluations en différentes gammes et dira à l'utilisateur comment le film était basé sur l'évaluation du film. Voici les étapes nécessaires :

1. Créez une fonction nommée `note_film()` qui a un paramètre nommé `note`.
2. Si la note est égale ou inférieure à 5, nous retournons "A éviter à tout prix !".
3. Si la note est inférieure à 9, retournez "Celui-ci était amusant".
4. Si aucune des conditions de l'instruction if n'est remplie, renvoyer "Remarquable !".
5. Testez la fonction
    - note_film(9) -> "Remarquable"
    - note_film(4) -> "A éviter à tout prix !"
    - note_film(6) -> "Celui-ci était amusant"
    
Conseil
Utilisez une série d'instructions if pour tester les différentes plages. Nous pouvons vérifier chaque condition séparément pour déterminer la chaîne à renvoyer.


## 11. Nombre maximum

Pour le dernier défi, nous allons sélectionner le nombre le plus grand parmi trois valeurs d'entrée en utilisant des instructions conditionnelles.

Pour ce faire, nous devons vérifier les différentes combinaisons de valeurs pour voir quel nombre est plus grand que les deux autres. Voici ce que nous devons faire :

1. Créez une fonction appelée `nombre_max()` qui possède trois paramètres nommés num1, num2 et num3.
2. Testez si num1 est supérieur aux deux autres nombres.
    2.1 Si oui, renvoyer num1
3. Tester si num2 est plus grand que les deux autres nombres
    3.1 Si oui, retournez num2
4. Tester si num3 est supérieur aux deux autres nombres
    4.1 Si c'est le cas, renvoyer num3

5. S'il y a égalité entre les deux nombres les plus grands, retournez "C'est une égalité !".

6. Testez la fonction 
    - nombre_max(-10, 0, 10) -> 10
    - nombre_max(-10, 5, -30) -> 5
    - nombre_max(-5, -10, -10) -> -5
    - nombre_max(2, 3, 3) -> "C'est une égalité !"

Conseil :
Pour ce faire, vous pouvez utiliser les instructions if, elif et else. Pour le premier paramètre, testez si num1 est supérieur à num2 et si num1 est supérieur à num3. Répétez ces tests pour num2 et num3.
