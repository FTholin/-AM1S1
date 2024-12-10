# Simulateur de course

A vos marques, prêts, partez ! En utilisant les structures et le reste de vos connaissances en C, nous allons créer un simulateur de course.

Tout d'abord, nous définirons nos types de données complexes à l'aide de structures. Ensuite, nous créerons des fonctions d'affichage amusantes pour aider à mettre à jour notre public. Enfin, nous mettrons en œuvre des fonctions pour aider à la logique de la course et nous commencerons notre course !


## Préparation de la course !

Nous allons commencer par créer nos types de données pour la course.

1. Créer un espace de travail vierge et copiez-collez le code suivant:
```c
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>

    // Structures 

    // Fonctions d'affichage

    // fonctions logiques

    int main() {
        srand(time(0));

    };
```


3. Dans la section des structures, créez une structure `Course` avec les variables membres suivantes :
    - un int - `nombre_tours`
    - un int - `tour_courant`
    - une chaîne de caractères - `nom_pilote_premiere_place`
    - une chaîne de caractères - `couleur_voiture_premiere_place`


4. Ensuite, dans la section des structures, créez une structure `VoitureCourse` qui possède les variables membres suivantes :
    - une chaîne de caractères - `nom_pilote`
    - une chaîne - `couleur_voiture`
    - un int - `temps_total_tour`
    
    
Puisque chaque course a besoin d'une introduction amusante, créons-en une.

5. Dans la section des fonctions d'affichage, créez la fonction `affiche_intro()` qui affiche un message d'introduction amusant pour la course sur la console.

    Par exemple :

    ```
    Bienvenue à notre Course de fonceurs !
    J'espère que tout le monde a pris son goûter, car nous sommes sur le point de commencer !
    ```

    - Appelez `affiche_intro()` à partir de `main()` pour voir sa sortie dans la console.   


En plus d'une introduction, une course a toujours un compte à rebours !

6. Dans la section des fonctions d'affichage, créez la fonction `affiche_compte_a_rebours()` qui affiche un message amusant de compte à rebours pour nos coureurs.
    Voici un exemple :

    ```
    Les coureurs sont prêts ! Dans...
    5
    4
    3
    2
    1
    Go !
    ```

    - Appelez `affiche_compte_a_rebours()` à partir de la fonction `main()` pour voir ce qu'elle produit.


Une fois la course commencée, nous devons être en mesure d'informer le public de l'identité de celui qui est en tête après chaque tour.

7. Dans la section des fonctions d'affichage, créez la fonction `affiche_premiere_place_tour()` qui a un seul paramètre de type `Course` nommé course.
    - La fonction doit accéder aux variables membres `course` et afficher un message annonçant le tour en cours, le nom du pilote en première place et la couleur de la voiture de course qu'il conduit.

    - Voici un exemple :
    ```
    Après le tour 2
    La première place est occupée par George dans la voiture de course jaune !
    ```


À la fin de la course, nous devons féliciter le gagnant et annoncer au public que la course est terminée.

8. Dans la section des fonctions d'affichage, créez la fonction `affiche_felicitations()` avec un paramètre de type Course nommé `course`.

    -La fonction doit accéder aux variables membres `course` et afficher un message de félicitations avec le nom du pilote et la couleur de la voiture de course qu'il conduisait.

    - Par exemple :
    ```
    Félicitons tous Cosmo, dans la voiture de course orange, pour son excellente performance.
    C'était vraiment une belle course et bonne nuit à tous !
    ```

##  Les coureurs sont prêts

Pour que notre course soit passionnante, nous avons besoin d'un moyen de calculer le temps qu'il faut à une voiture de course pour effectuer un tour.

9. Définir une simple fonction  pour calculer le temps total du tour :

    - Définir la fonction "calcul_temps_tour_complet" qui retourne le temps total du tour en secondes.
    - Dans la fonction, utiliser une fonction aléatoire pour générer un temps aléatoire compris entre 60 et 120 secondes, qui représente le temps nécessaire pour effectuer un tour complet.
    - Retourner ce temps aléatoire comme temps total du tour.



Maintenant que nous savons combien de temps il faut à une voiture de course pour terminer un tour, nous devons être en mesure de connaître la durée totale de la course.

Créons une fonction pour mettre à jour le temps total du tour pour une voiture de course

10. La fonction "voiture_course_maj" prend un pointeur vers la structure "VoitureCourse" en paramètre et utilise la fonction "calcul_temps_tour_complet" pour récupérer le temps total du tour. Elle ajoute ensuite ce temps total au temps total de la voiture de course :

    - Définir la fonction "voiture_course_maj" avec un paramètre "voitureCourse" qui est un pointeur vers une structure "VoitureCourse".
    - Dans la fonction, appeler la fonction "calcul_temps_tour_complet" pour récupérer le temps total du tour en secondes.
    - Ajouter ce temps total au temps total de la voiture de course en utilisant l'opérateur "->" pour accéder à la variable "temps_total_tour" de la structure "VoitureCourse".


11. La fonction "debutCourse" prend en paramètre un pointeur vers la structure "Course" et deux pointeurs vers les structures "VoitureCourse" des deux voitures de course. Elle utilise une boucle "for" pour exécuter chaque tour de la course. Pour chaque tour, elle appelle la fonction "voiture_course_maj" pour mettre à jour le temps total du tour pour chaque voiture de course. Ensuite, elle compare les temps totaux des deux voitures de course pour déterminer le pilote et la voiture en première place, et affiche le résultat pour le tour en cours en utilisant une fonction d'affichage :

    - Définir la fonction "debutCourse" avec trois paramètres : "course", "voitureCourse1" et "voitureCourse2", qui sont des pointeurs vers les structures "Course" et "VoitureCourse".
    - Dans la fonction, utiliser une boucle "for" pour exécuter chaque tour de la course en initialisant la variable "tour_courant" de la structure "Course" à 1, en vérifiant si "tour_courant" est inférieur ou égal à "nombre_tours", et en incrémentant "tour_courant" à chaque itération.
    - Dans la boucle, appeler la fonction "voiture_course_maj" pour mettre à jour le temps total du tour pour chaque voiture de course en utilisant les pointeurs "voitureCourse1" et "voitureCourse2".
    -  Ensuite, utiliser une structure "if-else" pour comparer les temps totaux des deux voitures de course : si le temps total de "voitureCourse1" est inférieur au temps total de "voitureCourse2", alors la voiture en première place est "voitureCourse1", sinon la voiture en première place est "voitureCourse2".
    - Copier le nom du pilote et la couleur de la voiture de la voiture en première place dans les variables correspondantes de la structure "Course" en utilisant la fonction "strcpy".
    - Enfin, afficher le nom du pilote et la couleur de la voiture en première place pour le tour en cours en utilisant une fonction d'affichage "affiche_premiere_place_tour" avec un paramètre qui

Maintenant que la logique de la course est complète, nous pouvons travailler sur le point d'entrée de la simulation de course.

12. Dans main(), déclarez et initialisez 2 types de données VoitureCourse.

    - Ensuite, affichez un message d'introduction et commencez le compte à rebours.

    - Enfin, appelez debutCourse() avec des pointeurs vers les types VoitureCourse que vous avez créés.

Bonne course !



