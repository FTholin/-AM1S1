# Système de Troc

## **Étape 1 : Définir la structure pour représenter les objets**

### **Indications :**
1. **Créer une structure :**
   - Une structure en C permet de regrouper plusieurs champs sous une seule entité. Ici, vous allez créer une structure `Objet` qui regroupe les informations d'un objet de troc.
   - Définissez la structure avec les champs suivants :
     - **nom** : un tableau de 20 caractères pour stocker le nom de l’objet (par exemple, "Boussole").
     - **valeur** : un entier pour représenter la valeur de l’objet (par exemple, 100 points).

2. **Utilisation de la structure :**
   - Une fois définie, la structure peut être utilisée pour déclarer des variables de type `Objet`.
   - Cela permet de manipuler facilement des informations liées à un objet spécifique.

3. **Déclaration d’une variable `Objet` :**
   - Déclarez une variable de type `Objet`.
   - Initialisez-la avec des données concrètes pour tester son bon fonctionnement.

4. **Affichage des données :**
   - Utilisez `printf` pour afficher le contenu de la structure (le nom et la valeur).
   - Cela permet de vérifier que les champs sont bien accessibles et contiennent les bonnes informations.

### Exemple de test :
1. Déclarez une variable de type `Objet` dans le `main`, initialisez-la avec un nom et une valeur.
2. Affichez les informations de cet objet pour vérifier que la structure est bien définie.

### Résultat attendu :
Si vous testez avec un objet nommé "Boussole" ayant une valeur de 100, votre affichage devrait être :
```
Nom : Boussole, Valeur : 100
```

---

## **Étape 2 : Initialiser un tableau d’objets**

### **Indications :**
1. **Créer un tableau de structures :**
   - Déclarez un tableau de type `Objet` pour contenir plusieurs objets.
   - Un tableau de structures permet de regrouper une collection d’éléments du même type (ici, des objets).
   - Définissez une constante  pour indiquer le nombre total d’objets dans ce tableau.

2. **Initialiser le tableau :**
   - Remplissez le tableau avec des objets, en spécifiant un **nom** et une **valeur** pour chacun.
   - Assurez-vous que les noms des objets respectent la taille limite de 19 caractères (à cause du tableau `char nom[20]`).

3. **Afficher les objets du tableau :**
   - Parcourez le tableau pour afficher les informations de chaque objet.
   - Utilisez une boucle pour itérer sur les éléments et affichez leurs noms et valeurs.

---

### **Exemple de test :**

Pour un tableau contenant "Boussole (100)", "Guitare (250)", "Vélo (300)" et "Livre (50)", votre affichage devrait être :
```
Nom : Boussole, Valeur : 100
Nom : Guitare, Valeur : 250
Nom : Vélo, Valeur : 300
Nom : Livre, Valeur : 50
```

1. **Ajouter un nouvel objet au tableau** :
   - Ajoutez un objet "Lampe" avec une valeur de 200 au tableau.
   - Vérifiez que l'affichage inclut également cet objet :
     ```
     Nom : Boussole, Valeur : 100
     Nom : Guitare, Valeur : 250
     Nom : Vélo, Valeur : 300
     Nom : Livre, Valeur : 50
     Nom : Lampe, Valeur : 200
     ```

2. **Tableau vide** :
   - Si vous déclarez un tableau sans l'initialiser, vérifiez que le programme peut détecter un tableau vide ou non rempli.

3. **Modifier un objet dans le tableau** :
   - Par exemple, changez la valeur de la "Guitare" à 275 et vérifiez l'affichage :
     ```
     Nom : Boussole, Valeur : 100
     Nom : Guitare, Valeur : 275
     Nom : Vélo, Valeur : 300
     Nom : Livre, Valeur : 50
     ```

---

## **Étape 3 : Créer une fonction pour afficher les objets**


### **Indications :**

- Vous allez écrire une fonction qui parcourt un tableau d’objets et affiche leurs informations (indice, nom, valeur) de manière numérotée.

2. **Plan de la fonction :**
   - Prenez en paramètre :
     - Le tableau contenant les objets.
         - Le tableau est passé sous forme de pointeur (type `Objet *`).
     - La taille du tableau (le nombre total d’objets).
   - Parcourez le tableau en utilisant une boucle.
   - Pour chaque objet :
     - Affichez son indice (commençant à 1, pas à 0 pour faciliter la compréhension de l’utilisateur).
     - Affichez son **nom** et sa **valeur**.
   - En-tête d’affichage : ajoutez un titre "=== Liste des Objets ===" pour organiser l'affichage.

3. **Tests à réaliser après implémentation :**
   - Appelez la fonction avec un tableau de 4 objets initialisés et vérifiez que chaque objet s’affiche correctement.

---

### **Exemple de test attendu :**

#### **Entrée** :
Un tableau contenant :
- "Boussole" avec une valeur de 100.
- "Guitare" avec une valeur de 250.
- "Vélo" avec une valeur de 300.
- "Livre" avec une valeur de 50.

#### **Sortie attendue dans la console** :
```
=== Liste des Objets ===
1) Boussole (valeur : 100)
2) Guitare (valeur : 250)
3) Vélo (valeur : 300)
4) Livre (valeur : 50)
```

#### **Cas particulier (tableau vide)** :
Si le tableau est vide :
```
Aucun objet à afficher.
```

---

## **Étape 4 : Demander à l’utilisateur de sélectionner deux objets**


### **Indications :**

1. **Objectif de la fonction :**
   - La fonction demande à l'utilisateur de sélectionner deux indices pour choisir deux objets dans un tableau.
   - Elle vérifie que les indices sont valides :
     - Les indices doivent être compris entre 1 et le nombre d’objets.
     - Les deux indices ne doivent pas être identiques.
   - Elle retourne ces deux indices sous une forme facile à utiliser (via des paramètres ou une structure).

2. **Spécificités de la fonction :**
   - La fonction **ne retourne pas directement une valeur unique** mais modifie deux variables passées en paramètres via des pointeurs.
   - Cela permet de passer les indices sélectionnés au reste du programme.

3. **Prototype de la fonction :**
   - La fonction doit recevoir :
     - Le tableau d'objets (pour valider les indices).
     - La taille du tableau (le nombre d’objets).
     - Deux pointeurs pour stocker les indices choisis.
   - Elle retourne une confirmation de succès (`1` pour des indices valides, `0` en cas d’échec).

### **Résultat attendu :**

#### **Cas classique :**
Entrée utilisateur :
```
Premier objet : 1
Second objet : 3
```
Affichage :
```
Vous avez choisi :
- Objet 1 : Boussole (valeur : 100)
- Objet 3 : Vélo (valeur : 300)
```

#### **Cas invalide (indices identiques) :**
Entrée utilisateur :
```
Premier objet : 2
Second objet : 2
```
Affichage :
```
Les indices ne doivent pas être identiques. Veuillez choisir deux objets différents.
```

#### **Cas invalide (indices hors plage) :**
Entrée utilisateur :
```
Premier objet : 0
Second objet : 5
```
Affichage :
```
Indices invalides. Veuillez entrer des indices compris entre 1 et 4.
```

---


## **Étape 5 : Comparer les valeurs des objets pour le troc (suite)**


### **Indications**

1. **Objectif de l’étape :**
   - Évaluer si deux objets peuvent être échangés selon une marge de tolérance définie. La comparaison repose sur la **différence absolue** entre leurs valeurs.

2. **Structure de la fonction :**
   - La fonction doit prendre :
     - Deux objets passés par pointeur (pour accéder directement à leurs valeurs).
     - Une marge de tolérance.
   - Elle calcule la différence absolue entre les valeurs des deux objets et compare cette différence à la marge.
   - La fonction retourne :
     - `1` (vrai) si le troc est possible (différence ≤ marge).
     - `0` (faux) si le troc n'est pas possible (différence > marge).

3. **Tests à effectuer :**
   - Essayez la fonction avec des objets dont les différences de valeur sont :
     - Inférieures à la marge.
     - Égales à la marge.
     - Supérieures à la marge.
   - Vérifiez que la fonction retourne les résultats attendus.


### **Résultats attendus :**

#### **Cas 1 :**
Comparaison entre "Boussole (100)" et "Vélo (300)" avec une marge de 50.

- Différence = `300 - 100 = 200`.
- Résultat attendu :
  ```
  Tentative de troc entre Boussole (valeur : 100) et Vélo (valeur : 300)
  Le troc est inéquitable, trop d’écart de valeur.
  ```

#### **Cas 2 :**
Comparaison entre "Boussole (100)" et "Livre (50)" avec une marge de 50.

- Différence = `100 - 50 = 50`.
- Résultat attendu :
  ```
  Tentative de troc entre Boussole (valeur : 100) et Livre (valeur : 50)
  Le troc est jugé équitable (différence <= 50).
  ```


### **Tests supplémentaires :**

1. **Cas limite :**
   - Comparer deux objets avec exactement la même valeur.
   - Par exemple, "Boussole (100)" et un objet fictif "Montre (100)".
   - Résultat attendu :
     ```
     Tentative de troc entre Boussole (valeur : 100) et Montre (valeur : 100)
     Le troc est jugé équitable (différence <= 50).
     ```

2. **Marge plus grande :**
   - Augmentez la marge à 250 et comparez "Boussole (100)" et "Guitare (250)".
   - Résultat attendu :
     ```
     Tentative de troc entre Boussole (valeur : 100) et Guitare (valeur : 250)
     Le troc est jugé équitable (différence <= 250).
     ```

3. **Cas avec marge plus petite :**
   - Réduisez la marge à 30 et testez "Boussole (100)" et "Livre (50)".
   - Résultat attendu :
     ```
     Tentative de troc entre Boussole (valeur : 100) et Livre (valeur : 50)
     Le troc est inéquitable, trop d’écart de valeur.
     ```



---
### **Étape 6 : Intégrer le tout dans le programme principal**


### **Indications**

1. **Combiner les étapes précédentes :**
   - Affichez la liste des objets disponibles (Étape 3).
   - Demandez à l’utilisateur de choisir deux indices d’objets (Étape 4).
   - Comparez les valeurs des objets sélectionnés pour vérifier si le troc est équitable (Étape 5).

2. **Validation et gestion des erreurs :**
   - Si l’utilisateur saisit des indices invalides, affichez un message d’erreur clair.
   - Permettez à l’utilisateur de réessayer jusqu’à ce que des indices valides soient fournis.

3. **Message final :**
   - Indiquez si le troc est équitable ou non, en mentionnant les noms et valeurs des objets impliqués.

---

### **Plan d’intégration dans le main**

1. Affichez la liste des objets.
2. Appelez la fonction pour demander les indices.
3. Appelez la fonction pour comparer les valeurs des objets sélectionnés.
4. Affichez le résultat en indiquant si le troc est équitable ou non.


---

### **Scénario de test complet**

#### **1. Cas standard :**
L’utilisateur voit :
```
=== Liste des Objets ===
1) Boussole (valeur : 100)
2) Guitare (valeur : 250)
3) Vélo (valeur : 300)
4) Livre (valeur : 50)
```
Saisit :
```
Premier objet : 1
Second objet : 4
```
Affichage attendu :
```
Tentative de troc entre Boussole (valeur : 100) et Livre (valeur : 50)
Le troc est jugé équitable (différence <= 50).
```

---

#### **2. Cas invalide (indices hors plage) :**
Saisit :
```
Premier objet : 0
Second objet : 5
```
Affichage attendu :
```
Choix invalide. Veuillez entrer des indices compris entre 1 et 4.
```

---

#### **3. Cas invalide (indices identiques) :**
Saisit :
```
Premier objet : 2
Second objet : 2
```
Affichage attendu :
```
Les indices ne doivent pas être identiques. Veuillez choisir deux objets différents.
```

---

#### **4. Cas limite (marge exactement atteinte) :**
Pour "Boussole (100)" et "Livre (50)", différence = 50.
Affichage attendu :
```
Tentative de troc entre Boussole (valeur : 100) et Livre (valeur : 50)
Le troc est jugé équitable (différence <= 50).
```

---

## **Étape 7 : Ajouter des cas limites et des tests complémentaires**

### Indications :
1. Testez des cas où :
   - L'utilisateur choisit deux fois le même objet.
   - La différence entre les valeurs est exactement égale à la marge.
   - Il n’y a qu’un seul objet dans la liste.
2. Vérifiez que le programme se comporte correctement dans ces situations.

### Exemples de tests complémentaires :
- Si l’utilisateur choisit deux fois le même objet :
   ```
   Choisissez un premier objet à troquer : 2
   Choisissez un second objet à troquer : 2
   ```
   Résultat attendu :
   ```
   Vous avez choisi le même objet deux fois. Veuillez choisir deux objets différents.
   ```

- Si la différence est égale à la marge (par exemple, **Livre (50)** et **Boussole (100)**, marge 50) :
   ```
   Tentative de troc entre Livre (valeur : 50) et Boussole (valeur : 100)
   Le troc est jugé équitable (différence <= 50).
   ```

- Si un seul objet est dans la liste :
   ```
   === Liste des Objets ===
   1) Livre (valeur : 50)
   ```
   Résultat attendu :
   ```
   Pas assez d'objets pour effectuer un troc.
   ```


# Tamagotchi 


### **Étape 1 : Définir la structure Tamagotchi**

#### **Objectif :**
Créer une structure qui représente l’état du Tamagotchi avec des indicateurs principaux (faim, énergie, bonheur, santé).

#### **Indications :**
1. Utilisez `typedef` pour définir une structure appelée `Tamagotchi`.
2. Incluez des champs de type `int` pour les indicateurs suivants :
   - `faim` : mesure le niveau de faim (0 = rassasié, valeurs élevées = très faim).
   - `energie` : mesure le niveau d'énergie (0 = épuisé, valeurs élevées = très énergique).
   - `bonheur` : mesure le bonheur du Tamagotchi (0 = triste, valeurs élevées = heureux).
   - `sante` : mesure la santé générale (0 = gravement malade, valeurs élevées = en bonne santé).

---

### **Étape 2 : Initialiser un Tamagotchi**

#### **Objectif :**
Créer une variable de type `Tamagotchi` et l'initialiser avec des valeurs par défaut.

#### **Indications :**
1. Déclarez un Tamagotchi dans la fonction `main`.
2. Initialisez les champs avec des valeurs moyennes (par exemple, `50` pour chaque indicateur).
3. Exemple :
   ```c
   Tamagotchi pet = {50, 50, 50, 50};
   ```

---

### **Étape 3 : Afficher l’état du Tamagotchi**

#### **Objectif :**
Créer une fonction qui affiche les valeurs actuelles des indicateurs du Tamagotchi.

#### **Indications :**
1. Créez une fonction `afficher_etat` qui prend un pointeur vers un `Tamagotchi` en paramètre.
2. Affichez les indicateurs avec des libellés clairs, par exemple :
   ```c
   printf("Faim : %d\n", pet->faim);
   ```
3. Ajoutez un titre pour structurer l’affichage, comme :
   ```c
   printf("=== État du Tamagotchi ===\n");
   ```

#### **Test attendu :**
Pour un Tamagotchi initialisé avec `{50, 50, 50, 50}`, l'affichage devrait ressembler à :
```
=== État du Tamagotchi ===
Faim    : 50
Énergie : 50
Bonheur : 50
Santé   : 50
```

---

### **Étape 4 : Créer les actions (nourrir, jouer, soigner)**

#### **Objectif :**
Créer des fonctions pour modifier les indicateurs du Tamagotchi en fonction des actions choisies.

#### **Indications :**

1. **Fonction `nourrir` :**
   - Réduire la faim.
   - Augmenter légèrement l’énergie.
   - Exemple :
     ```c
     void nourrir(Tamagotchi *pet) {
         pet->faim -= 10;
         if (pet->faim < 0) pet->faim = 0; // Éviter les valeurs négatives
         pet->energie += 5;
         printf("Vous avez nourri votre Tamagotchi.\n");
     }
     ```

2. **Fonction `jouer` :**
   - Augmenter le bonheur.
   - Réduire légèrement l’énergie et augmenter la faim.
   - Exemple :
     ```c
     void jouer(Tamagotchi *pet) {
         pet->bonheur += 10;
         pet->energie -= 5;
         pet->faim += 5;
         printf("Vous avez joué avec votre Tamagotchi.\n");
     }
     ```

3. **Fonction `soigner` :**
   - Augmenter la santé.
   - Réduire légèrement l’énergie.
   - Exemple :
     ```c
     void soigner(Tamagotchi *pet) {
         pet->sante += 10;
         pet->energie -= 2;
         printf("Vous avez soigné votre Tamagotchi.\n");
     }
     ```

---

### **Étape 5 : Créer un menu pour les actions**

#### **Objectif :**
Proposer un menu pour que l'utilisateur puisse choisir une action.

#### **Indications :**
1. Affichez un menu avec les options disponibles :
   ```
   Actions :
   1. Nourrir
   2. Jouer
   3. Soigner
   4. Quitter
   ```
2. Capturez le choix de l’utilisateur avec `scanf`.
3. Utilisez un `switch` pour appeler la fonction correspondante (par exemple, `nourrir` si l’utilisateur choisit `1`).
4. Ajoutez une option pour quitter le programme (`4`).

---

### **Étape 6 : Vérifier les conditions de fin**

#### **Objectif :**
Terminer le programme si l’état du Tamagotchi devient critique (par exemple, faim trop élevée ou santé à 0).

#### **Indications :**
1. Vérifiez après chaque action si :
   - `faim > 100` : Affichez un message et terminez le programme.
   - `sante <= 0` : Affichez un message et terminez le programme.
   - Exemple :
     ```c
     if (pet->faim > 100) {
         printf("Votre Tamagotchi a trop faim... il est parti...\n");
         break;
     }
     if (pet->sante <= 0) {
         printf("Votre Tamagotchi est gravement malade... Fin du jeu.\n");
         break;
     }
     ```

2. Si l’utilisateur choisit "Quitter", affichez un message de départ et terminez.

---

### **Étape 7 : Tester le programme**

#### **Scénarios de test :**

1. **Cas standard :**
   - Nourrissez, jouez, soignez successivement.
   - Vérifiez que les indicateurs changent comme prévu.

2. **Cas critique :**
   - Laissez la faim dépasser `100` ou réduisez la santé à `0`.
   - Vérifiez que le programme affiche un message et termine.

3. **Cas de sortie normale :**
   - Choisissez "Quitter" dans le menu.
   - Vérifiez que le programme termine avec un message.

---

### **Programme complet attendu**

Voici un aperçu des étapes combinées dans un programme fonctionnel :
1. Initialisation d’un Tamagotchi.
2. Menu pour les actions.
3. Mise à jour des indicateurs selon les choix.
4. Conditions de fin pour terminer le jeu.

---

### **À quoi s’attendre ?**

Exemple d’exécution :
```
=== État du Tamagotchi ===
Faim    : 50
Énergie : 50
Bonheur : 50
Santé   : 50

Actions :
1. Nourrir
2. Jouer
3. Soigner
4. Quitter
Choix : 1
Vous avez nourri votre Tamagotchi.

=== État du Tamagotchi ===
Faim    : 40
Énergie : 55
Bonheur : 50
Santé   : 50
```

Ajoutez des tests pour garantir que chaque fonction agit correctement et que le jeu se termine proprement dans tous les cas ! 🎮