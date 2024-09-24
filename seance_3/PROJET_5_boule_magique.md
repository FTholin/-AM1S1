# Boule magique

La boule magique est un jeu populaire développé dans les années 1950 pour la cartomancie ou la recherche de conseils.

Écrivez un programme C  qui peut répondre à n'importe quelle question "Oui" ou "Non" avec une fortune différente à chaque exécution.

Nous utiliserons les 9 réponses possibles suivantes pour notre boule magique:

- Oui - définitivement.
- C'est décidément le cas.
- Sans aucun doute.
- Réponse floue, essayez à nouveau.
- Redemandez plus tard.
- Mieux vaut ne pas vous le dire maintenant.
- Mes sources disent que non.
- Perspectives pas si bonnes.
- Très douteux.

La sortie du programme aura le format suivant :

```
[Nom] demande : [Question]
Réponse de la boule magique : [Réponse]
```

```
Joe demande : Est-ce que le pere Noel existe ?
La réponse de la boule magique : Il vaut mieux ne pas vous le dire maintenant
```

Pour que la réponse soit différente à chaque fois que nous exécutons le programme, nous utiliserons des valeurs générées au hasard.

Note : Ceci sera quelque chose de nouveau ! Mais ne vous inquiétez pas.

## 1. Stocker des chaînes de caractères

Pour stocker une chaîne de caractères en C, vous pouvez utiliser un tableau de char. Par exemple, pour stocker une chaîne "Bonjour" :

```c
char chaine[7] = "Bonjour";
```

Notez que la taille du tableau doit être suffisamment grande pour stocker la chaîne, y compris le caractère de fin de chaîne '\0'.

```c
char prenom[8];
scanf("%s",&prenom);  
printf("Bonjour %s", prenom);
```

### Explications de l'exemple

Ce programme utilise les fonctions `scanf` et `printf` de la bibliothèque `stdio.h` pour saisir un prénom et pour afficher un message de bienvenue.

Tout d'abord, une variable de type char nommée `prenom` est déclarée avec une taille de **8**. Cela signifie que la variable `prenom` peut stocker jusqu'à 7 caractères, car il faut également inclure un caractère de fin de chaîne `\0`.

Ensuite, la fonction `scanf` est utilisée pour lire une chaîne de caractères saisie par l'utilisateur. Le spécificateur de format `%s` indique à `scanf` de lire une chaîne de caractères. L'opérateur `&` (adresse) est utilisé devant le nom de la variable `prenom` pour passer l'adresse de la variable à `scanf`. Cela permet à `scanf` de stocker la chaîne saisie dans la variable `prenom`.

Enfin, la fonction `printf` est utilisée pour afficher un message de bienvenue contenant le prénom saisi. Le spécificateur de format `%s` indique à printf d'afficher la chaîne de caractères stockée dans la variable `prenom`.

Ainsi, le programme demandera à l'utilisateur de saisir un prénom, stockera le prénom saisi dans la variable `prenom` et affichera un message de bienvenue contenant le prénom saisi.

Il est important de noter que si la chaine saisie est plus grande que 8 caractères, cela pourra causer des erreurs de segmentation ou des comportements inattendus. Il est donc important de vérifier la taille de la chaine avant de l'utiliser pour éviter des erreurs.

**Ne pas faire attention au warning du compilateur C sur cet exemple pour le moment**. L'attention portée à cet exercice est de réaliser une logique de jeu pas de manipuler une chaîne de caractère cela sera le sujet d'une autre leçon et activté.

## 2. Simulation du hasard


Pour simuler le hasard en C, vous pouvez utiliser la fonction `rand()` de la bibliothèque standard C. Cependant, pour obtenir des résultats plus aléatoires, il est recommandé de initialiser la fonction `rand()` avec la fonction `srand()`, qui utilise l'heure système comme `seed`. Exemple :

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int nombre_aleatoire = rand() % 100;
    printf("Nombre aléatoire compris entre 0 et 100: %d\n", nombre_aleatoire);
    return 0;
}
```

Ce programme génère un nombre aléatoire entre `0` et `99`.
Il est important de noter que la fonction `rand()` génère des nombres pseudo-aléatoires plutôt que des nombres réellement aléatoires.


`stdlib.h` contient la fonction `rand()` qui permet de générer des nombres aléatoires.
`time.h` contient la fonction `time()` qui permet de récupérer l'heure actuelle du système et la fonction `srand()` qui utilise l'heure pour initialiser la fonction `rand()` et ainsi générer des séries de nombres aléatoires différentes à chaque exécution du programme.

Dans l'exemple donné, on utilise `srand(time(NULL))` pour initialiser la fonction rand() avec l'heure actuelle, puis on utilise rand() pour générer un nombre aléatoire entre `0` et `99` `(rand()%100)`. Ce nombre aléatoire est ensuite affiché à l'écran.


> Si vous avez besoin de nombres aléatoires de haute qualité pour des applications critiques, il est recommandé d'utiliser une bibliothèque de génération de nombres aléatoires telle que random ou un générateur de nombres aléatoires cryptographiquement sûr comme OpenSSL.
