
1. Série de Fibonacci:

```c
#include <stdio.h>

int main() {
    int nbTermes, terme1 = 0, terme2 = 1, termeSuivant;

    printf("Nombre de termes à afficher : ");
    scanf("%d", &nbTermes);

    printf("Voici la série de Fibonacci jusqu'à %d termes :\n", nbTermes);

    for (int i = 1; i <= nbTermes; ++i) {
        printf("%d ", terme1);
        termeSuivant = terme1 + terme2;
        terme1 = terme2;
        terme2 = termeSuivant;
    }

    return 0;
}
```

2. Affichage d'un nombre dans l'ordre inverse:

```c
#include <stdio.h>

int main() {
    int nombre, nombreInverse = 0, reste;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    while (nombre != 0) {
        reste = nombre % 10;
        nombreInverse = nombreInverse * 10 + reste;
        nombre /= 10;
    }

    printf("L'inverse est : %d", nombreInverse);

    return 0;
}
```

3. Triangle d'étoiles:

```c
#include <stdio.h>

int main() {
    int lignes;

    printf("Entrez le nombre de lignes : ");
    scanf("%d", &lignes);

    for (int i = 1; i <= lignes; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
```

4. Table de multiplication:

```c
#include <stdio.h>

int main() {
    printf(" I 1 2 3 4 5 6 7 8 9 10\n");
    printf("-----------------------------------------------\n");

    for (int i = 1; i <= 10; i++) {
        printf("%2d I", i);
        for (int j = 1; j <= 10; j++) {
            printf(" %2d", i * j);
        }
        printf("\n");
    }

    return 0;
}
```
