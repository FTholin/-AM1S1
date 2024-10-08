
### Étape 1:
Création d'un squelette pour notre programme.

```c
#include <stdio.h>

int main() {
    // Code ira ici
    return 0;
}
```

### Étape 3:
Pour afficher tous les nombres de 1 à 100, nous utilisons une boucle `for`.

### Étape 4:
À l'intérieur de cette boucle, affichez la variable `i`.

### Étapes 5 à 7:
Nous implémentons les vérifications pour voir si un nombre est divisible par 3, 5 ou les deux.

Mettons tout cela ensemble:

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        // Étape 5: Vérification de la divisibilité par 3
        int divisible_par_3 = i % 3 == 0;

        // Étape 6: Vérification de la divisibilité par 5
        int divisible_par_5 = i % 5 == 0;

        // Étape 7: Combinaison des vérifications de divisibilité
        if (divisible_par_3 && divisible_par_5) {
            printf("FizzBuzz\n");
        } else if (divisible_par_3) {
            printf("Fizz\n");
        } else if (divisible_par_5) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
```

Quand vous exécutez ce code, il affichera les nombres de 1 à 100, mais remplacera les multiples de 3 par "Fizz", les multiples de 5 par "Buzz", et les multiples de 3 et 5 par "FizzBuzz".

### Étape 8:
Exécutez le code et comparez le résultat avec l'exemple donné. 