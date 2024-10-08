###  Somme et produit des nombres entiers

```c
#include <stdio.h>

int main() {
    int nombre, somme = 0, produit = 1;

    // Demande à l'utilisateur un nombre entier positif
    do {
        printf("Entrez un nombre entier positif : ");
        scanf("%d", &nombre);
        if (nombre < 1) {
            printf("Erreur : veuillez entrer un nombre positif.\n");
        }
    } while (nombre < 1);

    // Calcul de la somme et du produit des nombres de 1 à 'nombre'
    for (int i = 1; i <= nombre; i++) {
        somme += i;
        produit *= i;
    }

    // Affiche les résultats
    printf("La somme des nombres de 1 à %d est : %d\n", nombre, somme);
    printf("Le produit des nombres de 1 à %d est : %d\n", nombre, produit);

    return 0;
}
```


### Trouver le nombre maximal dans une liste d'entiers


```c
#include <stdio.h>

int main() {
    int n, max, nombre;

    // Demander combien de nombres l'utilisateur veut entrer
    printf("Combien de nombres voulez-vous entrer ? ");
    scanf("%d", &n);

    // Vérifier si l'utilisateur entre un nombre valide
    if (n <= 0) {
        printf("Vous devez entrer au moins un nombre.\n");
        return 1;
    }

    // Demander le premier nombre et l'initialiser comme maximum
    printf("Entrez le nombre 1 : ");
    scanf("%d", &max);

    // Boucle pour lire les autres nombres et trouver le maximum
    for (int i = 2; i <= n; i++) {
        printf("Entrez le nombre %d : ", i);
        scanf("%d", &nombre);
        if (nombre > max) {
            max = nombre;
        }
    }

    // Affiche le nombre maximum trouvé
    printf("Le nombre maximal est : %d\n", max);

    return 0;
}
```



### Tri des nombres avec l'algorithme de tri à bulles (Bubble Sort)


```c
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int temp;
    // Boucle pour chaque passage
    for (int i = 0; i < n-1; i++) {
        // Comparaison des éléments adjacents
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Échange des éléments s'ils sont dans le mauvais ordre
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Demande du nombre d'éléments
    printf("Combien de nombres voulez-vous entrer ? ");
    scanf("%d", &n);

    // Vérification du nombre d'éléments
    if (n <= 0) {
        printf("Vous devez entrer au moins un nombre.\n");
        return 1;
    }

    // Déclaration du tableau
    int arr[n];

    // Saisie des éléments
    for (int i = 0; i < n; i++) {
        printf("Entrez le nombre %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Appel de la fonction de tri
    bubbleSort(arr, n);

    // Affichage du tableau trié
    printf("Nombres triés : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
```

