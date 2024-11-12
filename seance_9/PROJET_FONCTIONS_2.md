# Exercices pratiques fonction

## 1. Calculatrice de base


L'objectif de cette activité est de créer une calculatrice basique en C pour nous permettre de pratiquer les fonctions.


### Importation des librairies


1. Incluez les bibliothèques nécessaires:
    - bibliothèques standard d'entrée/sortie et les fonctions mathématiques.


### Fonction principale de base

2. Créer un main basique qui vous permettra de tester vos fonctions.


### Fonctions pour les opérations de base

>Dans cette étape, vous allez définir des fonctions pour chaque opération de base (addition, soustraction, multiplication et division). Chaque fonction **prendra deux arguments** (les nombres à utiliser) et **retournera** le **résultat** de l'**opération** correspondante.


3. Créez la fonction `addition` qui prend deux arguments de type `double` (`nb1` et `nb2`) et **retourne** leur `somme`.

4. Créez la fonction `soustraction` qui prend deux arguments de type `double` (`nb1` et `nb2`) et **retourne** leur `difference`.

5. Créez la fonction `multiplication` qui prend deux arguments de type `double` (`nb1` et `nb2`) et **retourne** leur `produit`.


6. Créez la fonction `division` qui prend deux arguments de type double (`nb1` et `nb2`) et retourne le résultat de la division de `nb1` par `nb2`. Vérifiez si `nb2` est égal à zéro avant de diviser pour éviter une division par zéro.


7. Testez chaque fonction individuellement en utilisant une votre fonction principale (main). Cela vous permet de vous assurer que chaque fonction fonctionne correctement avant de passer à l'étape suivante.

    - Créez 2 variables ou  donnez directement les valeurs dans les arguments de votre fonction à tester, 
    - puis  appelez la fonction avec ces valeurs. 
    - Affichez ensuite le résultat pour vérifier si l'addition fonctionne correctement.

```c
  double a = 5;
  double b = 3;
  double resultat = addition(a, b);
  printf("Le résultat de %lf + %lf est %lf\n", a, b, resultat);
```


### Fonction d'affichage

> Dans cette étape, vous allez créer une fonction qui affiche un menu à l'utilisateur pour qu'il puisse choisir l'opération à effectuer avec la calculatrice. Cette fonction sera appelée dans la fonction principale (main) à chaque fois que vous voulez lancer une fonctionnalité de votre calculatrice.

8. Commencez par définir la fonction `afficher_menu` **sans paramètres** et **sans valeur de retour**.
    - Quel est le type vide en C ?
    
    
9. Utilisez la fonction `printf` pour afficher les options du menu. Chaque option doit correspondre à un numéro que l'utilisateur entrera pour choisir l'opération à effectuer.

```c
 printf("Menu de la calculatrice :\n");
 printf("1. Addition\n");
```

10. Testez la fonction `afficher_menu` en l'appelant depuis votre main. Cela vous permet de vérifier que le menu s'affiche correctement.


### Fonction principale finale


> La fonction principale (main) est le point d'entrée du programme. Dans cette étape, vous allez demander à l'utilisateur de choisir une opération et de saisir les nombres à utiliser. Ensuite, vous allez appeler les fonctions appropriées et afficher le résultat.


11. Déclarez les variables nécessaires pour stocker le choix de l'utilisateur, les nombres saisis et le résultat de l'opération.


12. Utilisez une boucle while pour afficher continuellement le menu jusqu'à ce que l'utilisateur choisisse de quitter le programme.

```c

// Nous allons ici créer une boucle infinie.
while(1){
}
```



13. Dans votre boucle, appelez la fonction `afficher_menu()`  pour afficher les options disponibles à l'utilisateur.


14. Demandez à l'utilisateur d'entrer son choix d'opération et stockez cette valeur dans la variable `choix`.


15. Si l'utilisateur choisit l'option de quitter (5), sortez de la boucle while.


16. Demandez à l'utilisateur d'entrer deux nombres pour l'opération et stockez ces valeurs dans les variables a et b.


17. Utilisez une instruction `switch` pour appeler la fonction correspondant au choix de l'utilisateur et stocker le résultat dans la variable `resultat`.


18. Affichez le résultat de l'opération à l'utilisateur.


19. Fermez la boucle while et terminez la fonction main avec une instruction `return 0`.



## 2. Conversion de devises

> Avant de commencer à écrire le code, planifiez les fonctionnalités du programme et les fonctions nécessaires.

Le programme doit être capable de convertir des montants entre différentes devises en utilisant des taux de conversion prédéfinis.

- Fonction pour afficher le menu des devises disponibles
- Fonction pour lire le choix de l'utilisateur
- Fonction pour saisir le montant à convertir
- Fonction pour effectuer la conversion
- Fonction principale (main) pour gérer le flux du programme


### Importation des librairies


1. Incluez les bibliothèques nécessaires:
    - bibliothèques standard d'entrée/sortie
    
### Fonction principale de base

2. Créer un main basique qui vous permettra de tester vos fonctions.


### Fonction afficher menu

3. Dans cette étape, vous allez définir une fonction qui affiche un menu des devises disponibles pour que l'utilisateur puisse choisir la devise de base. Elle ne doit être **sans arguments et sans valeur de retour**.

```
Choisissez la devise de base:
1. Euro (EUR)
2. Dollar Américain (USD)
3. Livre Sterling (GBP)
4. Yen Japonais (JPY)
5. Quitter
```

### Fonction lire choix

Dans cette étape, vous allez créer une fonction qui lit le choix de l'utilisateur et retourne la valeur.

4. Définissez la fonction lire_choix qui retourne un entier.


5. Utilisez la fonction `printf` pour demander à l'utilisateur de saisir son choix, puis utilisez `scanf` pour lire la valeur entrée et la stocker dans une variable choix.

6. Retournez la valeur 


7. Testez votre fonction dans votre main.


### Fonction pour saisir montant

Dans cette étape, vous allez créer une fonction qui demande à l'utilisateur d'entrer le montant à convertir et retourne la valeur.

8. Définissez la fonction saisir_montant qui retourne un nombre à virgule flottante (double).


9. Utilisez la fonction printf pour demander à l'utilisateur de saisir le montant à convertir, puis utilisez scanf pour lire la valeur entrée et la stocker dans une variable montant.

10. Retournez la valeur.

11. Testez votre fonction dans votre main.

### Fonction convertir

Dans cette étape, vous allez créer une fonction qui prend en paramètres le montant, la devise de base et la devise cible, et retourne le montant converti en utilisant des taux de conversion prédéfinis.


12. Définissez la fonction convertir avec trois paramètres : un nombre à virgule flottante (double) pour le montant et deux entiers pour la devise de base et la devise cible.



13. Créez un tableau 2D taux_conversion pour stocker les taux de conversion prédéfinis entre les différentes devises. Les taux doivent être des nombres à virgule flottante (double).



14. Les dimensions du tableau doivent être 4x4, correspondant aux 4 devises disponibles dans le programme (Euro, Dollar Américain, Livre Sterling et Yen Japonais).


15. Remplissez le tableau avec les taux de conversion prédéfinis. Chaque ligne du tableau représente la devise de base, et chaque colonne représente la devise cible. Les valeurs diagonales du tableau sont égales à 1, car la conversion d'une devise en elle-même ne change pas le montant.
```c
 {1.0, 1.12, 0.85, 129.15},
 {0.89, 1.0, 0.76, 114.98},
 {1.18, 1.32, 1.0, 151.23},
 {0.0077, 0.0087, 0.0066, 1.0}
```
    Voici une explication des valeurs dans le tableau :

    - La première ligne représente les taux de conversion à partir de l'Euro (EUR) vers les autres devises.
    - La deuxième ligne représente les taux de conversion à partir du Dollar Américain (USD) vers les autres devises.
    - La troisième ligne représente les taux de conversion à partir de la Livre Sterling (GBP) vers les autres devises.
    - La quatrième ligne représente les taux de conversion à partir du Yen Japonais (JPY) vers les autres devises.

    > Notez que ces taux de conversion sont des exemples et peuvent ne pas être exacts au moment de l'utilisation du programme. Assurez-vous de mettre à jour les taux de conversion en fonction des taux actuels si nécessaire.


16. Calculez le montant converti en multipliant le montant initial par le taux de conversion approprié du tableau. Soustrayez 1 des indices de devise_base et devise_cible pour correspondre à l'indexation à partir de zéro du tableau.

    - Accédez au taux de conversion approprié dans le tableau taux_conversion en utilisant les indices devise_base - 1 et devise_cible - 1. 
    - Soustrayez 1 des indices pour correspondre à l'indexation à partir de zéro du tableau.
    
    - Par exemple, si l'utilisateur a choisi l'option 1 pour l'Euro et l'option 2 pour le Dollar Américain, les indices correspondants dans le tableau seront 0 et 1, respectivement.
   
17. Multipliez le montant initial par le taux de conversion approprié pour obtenir le montant converti. Stockez le résultat dans la variable montant_converti et retounez la .

18. Testez votre fonction dans votre main.

### Fonction principale finale

Dans cette étape, vous allez créer la fonction principale (main) qui gérera le flux du programme, notamment l'affichage du menu, la saisie des choix de l'utilisateur, la saisie du montant à convertir, l'appel de la fonction convertir et l'affichage du résultat.


19. Repartez d'un main vierge puis déclarez les variables nécessaires pour stocker le choix de l'utilisateur, la devise de base, la devise cible et le montant à convertir.

20. Utilisez une boucle do-while ou while infinie pour afficher le menu et lire le choix de l'utilisateur jusqu'à ce que l'utilisateur choisisse de quitter le programme (choix 5).


21. À l'intérieur de la boucle, demandez à l'utilisateur de choisir la devise cible en appelant à nouveau la fonction afficher_menu et en stockant le résultat dans la variable devise_cible.


22. Demandez à l'utilisateur de saisir le montant à convertir en appelant la fonction saisir_montant et en stockant le résultat dans la variable montant


23. Appelez la fonction convertir avec les paramètres montant, devise_base et devise_cible pour obtenir le montant converti. Stockez le résultat dans la variable montant_converti.


24. Affichez le montant converti en utilisant la fonction printf.


25. Fermez la boucle while et terminez la fonction main avec une instruction `return 0`.