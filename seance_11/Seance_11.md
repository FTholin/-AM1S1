## 1) Devinette

Scénario :

Un jeu demande à l'utilisateur de deviner un nombre secret (par exemple, 42). Le programme :

1. Permet à l'utilisateur de saisir plusieurs tentatives.


2. Fournit des indices après chaque tentative :

"C'est plus grand" si la tentative est inférieure au nombre secret.

"C'est plus petit" si la tentative est supérieure au nombre secret.



3. Affiche un message de victoire lorsque le nombre est trouvé.


### Étapes de conception :




#### Étape 1 : Déclaration des variables

1. Nombre secret :

Une variable (par exemple, nombre_secret) est définie avec une valeur fixe (42 dans cet exemple).

Cette valeur pourrait être choisie aléatoirement dans une version plus avancée.



2. Tentative de l'utilisateur :

Une variable tentative est utilisée pour stocker la saisie de l'utilisateur.







#### Étape 2 : Demander la première tentative

1. Affiche un message demandant à l'utilisateur de saisir un nombre.


2. Utilise scanf pour lire et stocker la saisie dans la variable tentative.






#### Étape 3 : Boucle de vérification (while)

1. Tant que la tentative est incorrecte (tentative != nombre_secret) :

Vérifie si la tentative est inférieure ou supérieure au nombre secret.

Affiche un indice :

"C'est plus grand" si la tentative est inférieure.

"C'est plus petit" si la tentative est supérieure.


Demande une nouvelle saisie à l'utilisateur.



2. Sortie de la boucle :

La boucle se termine uniquement lorsque la tentative est égale au nombre secret.






#### Étape 4 : Message de victoire

1. Affiche un message indiquant que l'utilisateur a trouvé le nombre secret.


2. Termine le programme.


### Exemple d'exécution

#### Entrée utilisateur :
```
Jeu : Devinez le nombre secret !
Entrez votre tentative : 30
C'est plus grand ! Essayez encore : 50
C'est plus petit ! Essayez encore : 42
Bravo ! Vous avez trouvé le nombre secret.
```
#### Sortie attendue :
```
Jeu : Devinez le nombre secret !
Entrez votre tentative : 30
C'est plus grand ! Essayez encore : 50
C'est plus petit ! Essayez encore : 42
Bravo ! Vous avez trouvé le nombre secret.
```


## 2) Présence étudiant 


### Scénario :

Un enseignant veut suivre la présence des étudiants dans une classe. Le programme doit :

1. Demander combien d’étudiants sont présents dans la classe.


2. Permettre à l’utilisateur de saisir l’état de chaque étudiant :

1 pour présent et 0 pour absent.



3. Calculer et afficher le pourcentage de présence.


4. Lister les étudiants absents (en affichant leur numéro).



### Étapes  :


#### Étape 1 : Déclarer les variables nécessaires

1. Un tableau pour enregistrer les présences :

Par exemple, presences[30] pour une classe de 30 étudiants.

Chaque élément du tableau contient :

1 (présent) ou

0 (absent).




2. Variables complémentaires :

nb_etudiants : Nombre total d’étudiants dans la classe.

total_present : Compteur pour le nombre d’étudiants présents.




#### Étape 2 : Demander et valider le nombre d’étudiants

1. Affiche un message demandant à l'utilisateur d'entrer le nombre d'étudiants (nb_etudiants).


2. Vérifie que le nombre est compris entre 1 et une limite maximale (par exemple, 30).


3. Si le nombre est invalide, affiche un message d'erreur et termine le programme.




#### Étape 3 : Saisir les présences

1. Parcourt tous les étudiants avec une boucle (de 0 à nb_etudiants - 1).


2. Pour chaque étudiant :

Affiche un message pour demander l’état (1 pour présent ou 0 pour absent).

Valide l’entrée :

Si l’entrée est invalide, redemande la saisie.

Si l’étudiant est présent (1), incrémente total_present.






#### Étape 4 : Calculer le pourcentage de présence

1. Utilise la formule suivante pour calculer le pourcentage :



$\text{Pourcentage de présence} = \frac{\text{total présent}}{\text{nb étudiants}} \times 100$


---

#### Étape 5 : Lister les étudiants absents

1. Parcourt à nouveau le tableau des présences.


2. Si un étudiant a une valeur 0 (absent), affiche son numéro.




---

#### Étape 6 : Afficher les résultats

1. Affiche le pourcentage de présence.


2. Affiche les numéros des étudiants absents.






### Exemple d'exécution

#### Entrée utilisateur :
```
Combien d'étudiants dans la classe ? 5
Entrez 1 pour présent et 0 pour absent :
Étudiant 1 : 1
Étudiant 2 : 0
Étudiant 3 : 1
Étudiant 4 : 0
Étudiant 5 : 1
```

#### Sortie attendue :
```
Pourcentage de présence : 60.00 %
Étudiants absents :
- Étudiant 2
- Étudiant 4

```


## 3) Sommeil 


## Scénario :

Une personne souhaite suivre ses heures de sommeil sur une semaine. Le programme doit :

1. Enregistrer les heures de sommeil pour chaque jour.


2. Calculer la moyenne des heures de sommeil sur la semaine.


3. Trouver le jour où elle a dormi le plus et le moins.


4. Lister les jours où elle a dormi moins que la moyenne.





## Étapes détaillées :

#### Étape 1 : Déclarer les variables nécessaires

1. Un tableau pour enregistrer les heures de sommeil :

sommeil[7] : Stocke les heures pour chaque jour de la semaine.



2. Variables pour les calculs :

somme : Accumule les heures totales de sommeil.

moyenne : Calcule la moyenne des heures de sommeil.

max et min : Identifient respectivement les heures maximum et minimum.

jour_max et jour_min : Retiennent les indices des jours avec le plus et le moins de sommeil.





---

#### Étape 2 : Saisir les heures de sommeil

1. Parcourir chaque jour avec une boucle for (de 0 à 6).


2. Pour chaque jour :

Afficher un message demandant à l'utilisateur d'entrer les heures de sommeil.

Valider l’entrée si nécessaire.

Ajouter les heures saisies à somme.



3. Comparer les heures saisies avec max et min pour identifier les jours avec le plus et le moins de sommeil.




---

#### Étape 3 : Calculer la moyenne

1. Une fois toutes les heures saisies, divise somme par 7 pour obtenir la moyenne.




---

#### Étape 4 : Identifier les jours avec moins de sommeil que la moyenne

1. Parcourir à nouveau le tableau sommeil.


2. Comparer chaque valeur avec la moyenne :

Si une valeur est inférieure à la moyenne, afficher le jour correspondant.





---

#### Étape 5 : Afficher les résultats

1. Affiche :

La somme totale des heures de sommeil.

La moyenne des heures.

Le jour avec le plus et le moins de sommeil.

Les jours avec moins de sommeil que la moyenne.




---

### Exemple d'exécution

#### Entrée utilisateur :
```
Entrez vos heures de sommeil pour chaque jour de la semaine :
Jour 1 : 6.5
Jour 2 : 7
Jour 3 : 5.5
Jour 4 : 8
Jour 5 : 6
Jour 6 : 7.5
Jour 7 : 9
```

#### Sortie attendue :
```
Statistiques de sommeil :
Somme totale des heures de sommeil : 49.50 heures
Sommeil moyen par jour : 7.07 heures
Jour avec le plus de sommeil : Jour 7 (9.00 heures)
Jour avec le moins de sommeil : Jour 3 (5.50 heures)

Jours avec moins de sommeil que la moyenne :
- Jour 1 : 6.50 heures
- Jour 3 : 5.50 heures
- Jour 5 : 6.00 heures
```


## Gestion d’un planning de réservation


### **Scénario :**
Un hôtel dispose de **3 chambres**, et les réservations sont enregistrées pour **7 jours**. Le programme doit :
1. Initialiser un tableau représentant le planning des réservations : chaque jour (ligne) et chaque chambre (colonne).
2. Permettre à l’utilisateur de modifier l’état d’une chambre pour un jour donné :
   - `0` pour **libre**.
   - `1` pour **occupée**.
3. Afficher le planning complet après chaque modification.

---

### **Étapes :**

---

#### **Étape 1 : Déclarer les variables nécessaires**
1. **Planning des réservations :**
   - Un tableau 2D `planning[7][3]` est utilisé :
     - **7 lignes** : Une pour chaque jour.
     - **3 colonnes** : Une pour chaque chambre.

   Au début, toutes les chambres sont libres (valeurs initiales de `0`).

2. **Variables complémentaires :**
   - `jour` : Indique le jour à modifier (de 1 à 7).
   - `chambre` : Indique la chambre à modifier (de 1 à 3).
   - `statut` : Représente la réservation :
     - `0` pour libre.
     - `1` pour occupée.

---

#### **Étape 2 : Initialiser le tableau des réservations**
1. Toutes les valeurs du tableau sont initialisées à `0` pour indiquer que toutes les chambres sont libres au départ.

---

#### **Étape 3 : Afficher le planning initial**
1. Parcourir le tableau avec deux boucles imbriquées :
   - Une **boucle externe** pour les lignes (jours).
   - Une **boucle interne** pour les colonnes (chambres).
2. Afficher chaque ligne de manière formatée :
   - Exemple :
     ```
     Jour 1 : 0 0 0
     Jour 2 : 0 0 0
     ```

---

#### **Étape 4 : Modifier une réservation**
1. L’utilisateur peut modifier une réservation :
   - Saisir le jour, la chambre et le statut (`0` ou `1`).
2. Les saisies sont converties pour correspondre aux indices du tableau :
   - Jour : `jour - 1` (convertir de 1-indexé à 0-indexé).
   - Chambre : `chambre - 1`.

---

#### **Étape 5 : Valider les entrées**
1. Vérifier les conditions suivantes :
   - **Jour** doit être compris entre 1 et 7.
   - **Chambre** doit être compris entre 1 et 3.
   - **Statut** doit être soit `0` soit `1`.

2. Si une entrée est invalide :
   - Afficher un message d’erreur.
   - Redemander les informations.

---

#### **Étape 6 : Mettre à jour le planning**
1. Si les entrées sont valides, mettre à jour l’élément correspondant dans le tableau :
  $planning[jour - 1][chambre - 1] = statut$

---

#### **Étape 7 : Répéter les modifications**
1. Permettre à l’utilisateur de modifier plusieurs réservations :
   - La boucle continue tant que l’utilisateur n’entre pas une valeur négative pour le jour.
   - Exemple :
     - Entrer `-1` pour arrêter la boucle.

---

#### **Étape 8 : Afficher le planning mis à jour**
1. Après chaque modification, afficher à nouveau le planning complet :
   - Parcourir et afficher le tableau comme à l’étape 3.


---

### **Exemple d'exécution**

#### **Étape 1 : Afficher le planning initial**
```
Planning initial (0 = libre, 1 = occupée) :
Jour 1 : 0 0 0
Jour 2 : 0 0 0
Jour 3 : 0 0 0
Jour 4 : 0 0 0
Jour 5 : 0 0 0
Jour 6 : 0 0 0
Jour 7 : 0 0 0
```

#### **Étape 2 : Modifier les réservations**
**Entrée utilisateur :**
```
Entrez le jour (1-7) et la chambre (1-3) à modifier : 2 1
Entrez le statut (0 = libre, 1 = occupée) : 1
```

**Sortie :**
```
Planning mis à jour :
Jour 1 : 0 0 0
Jour 2 : 1 0 0
Jour 3 : 0 0 0
Jour 4 : 0 0 0
Jour 5 : 0 0 0
Jour 6 : 0 0 0
Jour 7 : 0 0 0
```

---

#### **Étape 3 : Terminer le programme**
**Entrée utilisateur :**
```
Entrez le jour (1-7) et la chambre (1-3) à modifier : -1
Merci d'avoir utilisé le système de réservation.
```

---

### **Explication des boucles utilisées :**

1. **Boucle `for` pour afficher le planning :**
   - Parcourt chaque ligne (jour) et chaque colonne (chambre) pour afficher le tableau.

2. **Boucle `while` pour modifier les réservations :**
   - Continue tant que l’utilisateur n’entre pas une valeur négative pour le jour.

---

### **Améliorations possibles**

1. **Ajouter des noms aux chambres :**
   - Exemple : Chambre "Suite", "Double", "Simple".

2. **Gérer plusieurs semaines :**
   - Étendre le tableau pour gérer un planning mensuel ou annuel.

3. **Statistiques :**
   - Calculer le taux d’occupation pour chaque jour ou chaque chambre.

Ce programme fournit une base robuste pour gérer les réservations dans un hôtel ou un système similaire.
