
## Activité : Somme et produit des nombres entiers

#### Objectif :
- Demander à l'utilisateur un nombre entier positif.
- Utiliser une boucle pour calculer la somme et le produit de tous les entiers de 1 jusqu'au nombre donné.
- Afficher les résultats.

#### Exigences :
1. L'utilisateur doit entrer un entier positif.
2. Si l'utilisateur entre un nombre négatif, le programme doit afficher un message d'erreur et demander de nouveau un nombre.
3. Utiliser des boucles pour calculer la somme et le produit.

#### Exemple de sortie attendue :
```
Entrez un nombre entier positif : 5
La somme des nombres de 1 à 5 est : 15
Le produit des nombres de 1 à 5 est : 120
```


### Points de réflexion pour les étudiants :
- Quelle est la différence entre une boucle `for` et une boucle `while` ? Dans quel cas utiliser l'une ou l'autre ?
- Comment gérer les erreurs d'entrée utilisateur ?
- Que se passe-t-il si l'utilisateur entre des valeurs extrêmes ?


## Trouver le nombre maximal dans une liste d'entiers

#### Objectif :
- Demander à l'utilisateur d'entrer un certain nombre de valeurs.
- Utiliser une boucle pour parcourir les valeurs et trouver la valeur maximale.
- Afficher la valeur maximale.

#### Exigences :
1. L'utilisateur doit spécifier combien de nombres il souhaite entrer.
2. Utiliser une boucle pour récupérer chaque nombre et déterminer le plus grand.
3. Si l'utilisateur n'entre aucun nombre, afficher un message approprié.

#### Exemple de sortie attendue :
```
Combien de nombres voulez-vous entrer ? 5
Entrez le nombre 1 : 10
Entrez le nombre 2 : 25
Entrez le nombre 3 : 7
Entrez le nombre 4 : 30
Entrez le nombre 5 : 18
Le nombre maximal est : 30
```

### Points de réflexion pour les étudiants :
- Comment la boucle permet-elle de comparer chaque nombre ?
- Comment pourrait-on modifier ce programme pour trouver le minimum ?
- Comment gérer des listes vides ou des entrées non valides (comme du texte à la place de chiffres) ?



## Tri des nombres avec l'algorithme de tri à bulles (Bubble Sort)

#### Objectif :
- Demander à l'utilisateur d'entrer une série de nombres.
- Utiliser l'algorithme de tri à bulles pour trier ces nombres dans l'ordre croissant.
- Afficher les nombres triés.

#### Exigences :
1. L'utilisateur doit spécifier combien de nombres il souhaite entrer.
2. Utiliser un tableau pour stocker les nombres.
3. Implémenter l'algorithme de tri à bulles pour trier les nombres.
4. Afficher la liste triée à la fin.

#### Exemple de sortie attendue :

```
Combien de nombres voulez-vous entrer ? 6
Entrez le nombre 1 : 45
Entrez le nombre 2 : 12
Entrez le nombre 3 : 98
Entrez le nombre 4 : 23
Entrez le nombre 5 : 5
Entrez le nombre 6 : 33
Nombres triés : 5 12 23 33 45 98
```

### Fonctionnement détaillé du tri à bulles :

Nous allons illustrer un passage de l'algorithme de tri à bulles avec le tableau suivant : `[45, 12, 98, 23, 5, 33]`.

1. **Premier passage** :
   - Comparer 45 et 12 → échanger : `[12, 45, 98, 23, 5, 33]`
   - Comparer 45 et 98 → ne pas échanger.
   - Comparer 98 et 23 → échanger : `[12, 45, 23, 98, 5, 33]`
   - Comparer 98 et 5 → échanger : `[12, 45, 23, 5, 98, 33]`
   - Comparer 98 et 33 → échanger : `[12, 45, 23, 5, 33, 98]`
   - Le plus grand élément (98) est maintenant à la fin du tableau.

2. **Deuxième passage** :
   - Comparer 12 et 45 → ne pas échanger.
   - Comparer 45 et 23 → échanger : `[12, 23, 45, 5, 33, 98]`
   - Comparer 45 et 5 → échanger : `[12, 23, 5, 45, 33, 98]`
   - Comparer 45 et 33 → échanger : `[12, 23, 5, 33, 45, 98]`
   - Le deuxième plus grand élément (45) est maintenant en place.

3. **Troisième passage** :
   - Comparer 12 et 23 → ne pas échanger.
   - Comparer 23 et 5 → échanger : `[12, 5, 23, 33, 45, 98]`
   - Comparer 23 et 33 → ne pas échanger.
   - Les éléments 33 et 45 sont déjà en place.

4. **Quatrième passage** :
   - Comparer 12 et 5 → échanger : `[5, 12, 23, 33, 45, 98]`

Le tableau est maintenant trié.



### Points de réflexion pour les étudiants :
1. Comment fonctionne l'échange des éléments dans le tableau ?
2. Pourquoi l'algorithme effectue-t-il plusieurs passages à travers le tableau ?
3. Comment peut-on améliorer cet algorithme (optimisations possibles comme l'arrêt anticipé si le tableau est déjà trié) ?
4. Quelle est la complexité du tri à bulles et pourquoi est-il moins efficace que d'autres algorithmes comme le tri rapide (Quick Sort) ou le tri par insertion ?

