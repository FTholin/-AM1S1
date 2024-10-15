# Recherche d'Anagrammes

Dans ce projet, nous allons écrire un programme pour déterminer si deux chaînes de caractères sont des anagrammes ou non.

La chaîne `y` est un anagramme de la chaîne `x` si `y` est un réarrangement de la chaîne `x`. 

Cela implique que `y` et `x` ont les mêmes lettres avec la même quantité de chaque lettre.

Exemple :

"code" et "deco" sont des anagrammes !

Les contraintes de ce projet sont les suivantes : 

- Chaque chaîne ne contiendra que des caractères issus des quatre premières lettres de l'alphabet ('a', 'b', 'c', 'd') et des espaces. Toutes les lettres sont en minuscules.

Pour ce faire, nous allons créer deux tableaux de longueur quatre :

- un pour chaque chaîne qui représente le nombre de caractères.

Ces tableaux serviront de compteurs. Dans chaque tableau, le nombre à la position 0 correspond au compte de la lettre 'a', le nombre à la position 1 correspondra au compte de la lettre 'b' et ce schéma continuera pour les lettres restantes. 

Nous ne comptons pas le nombre d'espaces. Par exemple, `"a bc d"` serait une anagramme de `"ab cd"`.

Nous allons ensuite parcourir en boucle les deux chaînes de caractères et mettre à jour leurs compteurs respectifs.

Nous comparons ensuite les deux compteurs pour voir si les deux chaînes sont des anagrammes et, si c'est le cas, nous afficherons "Anagramme". Si ce n'est pas le cas, nous afficherons "Pas d'anagramme !".

### À vous de jouer !

#### Tout mettre en place.

1. Copiez et collez le code  suivant dans un nouvel espace de travail :

    ```c
    #include <stdio.h>
    #include <string.h>
    int main() {

    }
    ```

2. Créez deux tableaux d'entiers appelés `compteur1` et `compteur2`. Initialisez les deux tableaux avec quatre zéros chacun.


3. Nous allons vérifier si les deux chaînes de caractères suivantes sont des anagrammes :

    - Chaîne 1 : "dbb cccccaacb cdbabdcdcdab dcdad"
    - Chaîne 2 : "bbbcc bdddccccad cdbbaaacaccdabdd"

    Juste sous vos compteurs, créez deux tableaux de caractères appelés `ch1` et `ch2` contenant respectivement les chaînes 1 et 2.


Rappelez-vous qu'il y a deux façons de créer une chaîne de caractères en C : L'une consiste à utiliser un tableau de caractères initialisé et l'autre à utiliser des chaînes littérales. Comme les chaînes de caractères sont longues, nous vous recommandons d'utiliser les littéraux de chaîne de caractères.

#### Compter les caractères de la chaîne 1.

4. Tout d'abord, créez une boucle for pour parcourir la chaîne en boucle. Utilisez `strlen()` pour trouver la longueur de la chaîne.



5. Nous allons maintenant écrire la logique permettant de déterminer le numéro de chaque caractère de la chaîne 1.

    Nous allons mettre à jour le compteur 1 de la manière suivante :

    - Si nous rencontrons un `'a'`, nous incrémenterons le `compteur1[0]` de un.
    - Si nous rencontrons un `'b'`, nous incrémentons le `compteur1[1]` d'une unité.
    - Si nous rencontrons un `'c'`, nous incrémentons le `compteur1[2]` d'une unité.
    - Si nous rencontrons un `'d'`, nous incrémentons le `compteur1[3]` d'une unité.
    - Si nous rencontrons un espace, nous l'ignorons.
    
    Implémentez cette logique dans le corps de la boucle.


#### Compter les caractères de la chaîne 2.

6. Bouclez sur la chaîne 2 et mettez à jour son compteur  en conséquence.


#### Comparez les comptes des deux chaînes.

7. Nous avons besoin d'un drapeau que nous pouvons utiliser pour déterminer s'il y a un décalage entre les deux compteurs.

    Tout d'abord, créez une variable entière appelée `flag` et mettez-la à 0.

    La variable flag maintient l'un de ces états :

    `flag` sera mis à zéro s'il n'y a pas de différence entre les compteurs.
    `flag` sera mis à un s'il y a un désaccord entre les compteurs.


8. Créez une boucle `for` vide que vous utiliserez pour parcourir les deux compteurs. Nous y placerons la logique dans la tâche suivante.


9. Dans la boucle, changez la valeur de la variable drapeau en 1 si une incompatibilité est rencontrée.



#### Sont-ils des anagrammes ?

10. Si les deux chaînes de caractères sont des anagrammes, affichez "Anagramme". Si ce n'est pas le cas, imprimez "Pas Anagramme !".