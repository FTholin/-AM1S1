
##  Calculateur de facture d’électricité

Vous devez développer un programme en langage C pour calculer la facture d’électricité d’un utilisateur, selon sa consommation en kilowattheures (kWh). Le tarif appliqué dépend de la tranche de consommation comme suit :

- **Jusqu’à 100 kWh** : 0,15 € par kWh
- **De 101 à 500 kWh** : 0,20 € par kWh
- **Au-delà de 500 kWh** : 0,25 € par kWh

Le programme devra :
1. Demander à l’utilisateur de saisir sa consommation électrique en kWh.
2. Vérifier que la consommation saisie est valide (elle ne peut pas être négative).
3. Calculer le montant total de la facture en appliquant les tarifs ci-dessus.
4. Afficher le montant total de la facture avec deux décimales.


### **Détails techniques**
1. **Créer une fonction `calculer_facture`** :
   - Cette fonction doit :
     - Prendre en entrée un nombre réel représentant la consommation en kWh.
     - Retourner un nombre réel correspondant au coût total de la facture.
   - Appliquer les tarifs en utilisant des conditions pour déterminer la tranche de consommation.

2. **Gérer les erreurs d’entrée** :
   - Si l’utilisateur entre une valeur négative, afficher un message d’erreur approprié et terminer le programme.

3. **Afficher la facture** :
   - Afficher le montant total en euros, formaté avec deux décimales.

---

### **Exemple d’exécution**

#### Cas 1 : Consommation de 50 kWh
```
Veuillez entrer votre consommation électrique en kWh : 50
Votre facture d'électricité est de : 7.50 €
```

#### Cas 2 : Consommation de 150 kWh
```
Veuillez entrer votre consommation électrique en kWh : 150
Votre facture d'électricité est de : 25.00 €
```

#### Cas 3 : Consommation de 600 kWh
```
Veuillez entrer votre consommation électrique en kWh : 600
Votre facture d'électricité est de : 130.00 €
```

#### Cas 4 : Consommation négative
```
Veuillez entrer votre consommation électrique en kWh : -20
Erreur : la consommation ne peut pas être négative.
```


## Machine à café

### **1. Commencer avec une vue globale**
Avant de plonger dans les fonctions, imaginez comment l'utilisateur interagira avec le programme :
1. Il voit un menu avec des choix.
2. Il entre un numéro pour choisir une boisson.
3. Le programme affiche le prix et demande de l'argent.
4. Si l'argent est insuffisant, il demande le complément.
5. Une fois payé, il prépare la boisson.
6. L'utilisateur peut ensuite acheter une autre boisson ou quitter.

**Votre travail :** Transformer ces étapes en fonctions claires et indépendantes.

---

### **2. Créer le menu (fonction `afficher_menu`)**

**But de cette étape :** Offrir à l'utilisateur un aperçu des options disponibles.

#### **Étape 1 : Écrire ce que le menu doit afficher**
1. Le nom des boissons.
2. Le prix de chaque boisson.
3. Les numéros pour chaque option.

Exemple du menu :
```
1. Café Noir - 1.50 €
2. Cappuccino - 2.50 €
3. Thé - 1.20 €
4. Chocolat Chaud - 2.00 €
```

#### **Étape 2 : Définir la fonction**
- La fonction n’a pas besoin d’entrées ou de sorties : elle ne fait qu’afficher ce texte.
- Ce sera une fonction simple qui se contente d’imprimer le menu à chaque cycle.

**À retenir :** La fonction doit être appelée dans une boucle pour que le menu soit affiché à chaque nouvel achat.

---

### **3. Gérer la sélection de la boisson (fonction `selectionner_boisson`)**

**But de cette étape :** Associer le choix de l'utilisateur à une boisson et retourner le prix correspondant.

#### **Étape 1 : Lister les boissons et leurs prix**
Créez une correspondance entre :
- Le numéro choisi (ex. : `1` pour Café Noir).
- Le prix de chaque boisson (ex. : 1.50 € pour Café Noir).

#### **Étape 2 : Gérer les cas invalides**
- Si l'utilisateur entre un numéro hors plage (ex. : `5`), retourner une valeur spéciale (comme `0.0`) pour signaler une erreur.
- Afficher un message d'erreur pour guider l'utilisateur.

#### **Étape 3 : Retourner le prix**
- Une fois le numéro validé, retourner le prix de la boisson pour l'utiliser dans la suite du programme.

**À retenir :** Cette fonction est cruciale pour vérifier que l'utilisateur ne choisit que des options valides.

---

### **4. Gérer le paiement (fonction dans la boucle `main`)**

**But de cette étape :** Vérifier que l'utilisateur a inséré assez d'argent et demander le complément si nécessaire.

#### **Étape 1 : Demander l'argent**
- Affichez un message demandant à l'utilisateur combien il insère.

#### **Étape 2 : Comparer le montant au prix**
- Si le montant est inférieur au prix :
  1. Indiquez combien il manque.
  2. Redemandez le montant complémentaire.
- Si le montant est égal ou supérieur :
  1. Acceptez le paiement.
  2. Si supérieur, calculez et affichez la monnaie à rendre.

#### **Étape 3 : Rendre la monnaie**
- Si le montant est supérieur, soustrayez le prix et affichez la monnaie à rendre.

**À retenir :** Cette étape peut être dans une boucle pour permettre plusieurs tentatives de paiement.

---

### **5. Préparer la boisson (fonction `preparer_boisson`)**

**But de cette étape :** Simuler la livraison de la boisson après paiement.

#### **Étape 1 : Identifier la boisson**
- Passez le nom de la boisson en paramètre à la fonction.

#### **Étape 2 : Afficher un message**
- Indiquez que la boisson est en cours de préparation.
- Exemples :
  - "Préparation de votre Cappuccino..."
  - "Préparation de votre Café Noir..."

**À retenir :** Cette étape ne fait qu'afficher un message pour informer l'utilisateur.

---

### **6. Boucle principale (dans `main`)**

**But de cette étape :** Répéter les étapes précédentes pour permettre plusieurs achats.

#### **Étape 1 : Structure de la boucle**
- Utilisez une boucle pour gérer les achats successifs.
- Ajoutez une option permettant de quitter après chaque achat.

#### **Étape 2 : Interactions avec l'utilisateur**
1. Affichez le menu.
2. Demandez le choix de boisson.
3. Gérer le paiement.
4. Préparez la boisson.
5. Demandez si l'utilisateur souhaite continuer ou quitter.

---

### **7. Gérer les erreurs**

**But de cette étape :** Rendre le programme robuste face aux erreurs utilisateur.

#### **Étape 1 : Choix invalide**
- Si un utilisateur entre un numéro invalide, affichez un message :
  ```
  Choix invalide. Veuillez réessayer.
  ```
- Redemandez le choix dans la boucle.

#### **Étape 2 : Montant insuffisant**
- Si le montant inséré est insuffisant, affichez combien il manque :
  ```
  Montant insuffisant. Il manque 0.50 €.
  ```
- Redemandez à l'utilisateur d'insérer davantage.

#### **Étape 3 : Entrée incorrecte**
- Si l'utilisateur entre un texte ou une valeur inattendue, affichez un message et redemandez l'entrée.

---

### **Plan récapitulatif : Ordre des fonctions**

1. **Afficher le menu (`afficher_menu`)** :
   Montrez les options disponibles.
2. **Gérer le choix (`selectionner_boisson`)** :
   Validez le choix et obtenez le prix.
3. **Gérer le paiement (dans `main`)** :
   Vérifiez et complétez le paiement.
4. **Préparer la boisson (`preparer_boisson`)** :
   Simulez la livraison de la boisson.
5. **Boucle principale (`main`)** :
   Répétez les étapes pour plusieurs achats ou quittez.




### **Lancement du programme**

Lorsque vous démarrez le programme, l'utilisateur voit un menu affiché comme ceci :

```
=== Bienvenue à la machine à café ===
1. Café Noir - 1.50 €
2. Cappuccino - 2.50 €
3. Thé - 1.20 €
4. Chocolat Chaud - 2.00 €
=====================================
Choisissez une boisson en entrant le numéro correspondant :
```

---

### **Premier achat**

#### **Étape 1 : Choix de la boisson**
- L'utilisateur entre `2` pour choisir **Cappuccino**.

Programme :
```
Le prix de la boisson choisie est : 2.50 €
Veuillez insérer l'argent :
```

#### **Étape 2 : Paiement**
- L'utilisateur insère `2.00`.

Programme :
```
Montant insuffisant. Il manque 0.50 €.
Veuillez insérer de l'argent supplémentaire :
```

- L'utilisateur insère `0.50` supplémentaire.

Programme :
```
Paiement accepté. Préparation de votre boisson...
```

#### **Étape 3 : Préparation**
- Le programme indique que la boisson est en cours de préparation.

Programme :
```
Préparation de votre Cappuccino...
Merci pour votre achat !
```

#### **Étape 4 : Choix de continuer**
- Le programme demande si l'utilisateur souhaite acheter une autre boisson ou quitter.

Programme :
```
Souhaitez-vous acheter une autre boisson ? (1 : Oui, 0 : Non) :
```

- L'utilisateur entre `1` pour continuer.

---

### **Deuxième achat**

#### **Étape 1 : Choix de la boisson**
- Le programme réaffiche le menu.

Programme :
```
=== Bienvenue à la machine à café ===
1. Café Noir - 1.50 €
2. Cappuccino - 2.50 €
3. Thé - 1.20 €
4. Chocolat Chaud - 2.00 €
=====================================
Choisissez une boisson en entrant le numéro correspondant :
```

- L'utilisateur entre `3` pour choisir **Thé**.

Programme :
```
Le prix de la boisson choisie est : 1.20 €
Veuillez insérer l'argent :
```

#### **Étape 2 : Paiement**
- L'utilisateur insère `1.50`.

Programme :
```
Paiement accepté. Préparation de votre boisson...
Voici votre monnaie : 0.30 €
```

#### **Étape 3 : Préparation**
- Le programme indique que la boisson est en cours de préparation.

Programme :
```
Préparation de votre Thé...
Merci pour votre achat !
```

#### **Étape 4 : Choix de continuer**
- Le programme demande si l'utilisateur souhaite acheter une autre boisson ou quitter.

Programme :
```
Souhaitez-vous acheter une autre boisson ? (1 : Oui, 0 : Non) :
```

- L'utilisateur entre `0` pour quitter.

---

### **Fin du programme**

Le programme affiche un message de fin amical avant de se terminer.

Programme :
```
Merci d'avoir utilisé notre machine à café. À bientôt !
```

---

### **Résumé des étapes d'utilisation**

1. **Affichage du menu** : Le programme montre les boissons disponibles et leurs prix.
2. **Choix de la boisson** : L'utilisateur choisit un numéro correspondant.
3. **Paiement** :
   - Si le montant est insuffisant, le programme demande un complément.
   - Si le montant est exact ou supérieur, le programme accepte le paiement et rend la monnaie si nécessaire.
4. **Préparation** : Le programme affiche un message simulant la préparation.
5. **Continuation ou fin** : L'utilisateur peut acheter une autre boisson ou quitter.

---

### **Cas spécifiques et messages associés**

1. **Choix invalide dans le menu** :
   - Si l'utilisateur entre un numéro incorrect (`5`, ou une lettre comme `A`) :
     ```
     Choix invalide. Veuillez réessayer.
     ```

2. **Montant insuffisant** :
   - Si l'utilisateur insère un montant trop bas, le programme demande le complément :
     ```
     Montant insuffisant. Il manque 0.70 €.
     ```

3. **Rendu de monnaie** :
   - Si le montant inséré est supérieur, le programme rend la différence :
     ```
     Voici votre monnaie : 0.40 €
     ```

---

### **Ajouts possibles**

1. **Gestion du stock** :
   - Ajoutez une vérification pour limiter les boissons en stock.
   - Affichez un message si une boisson est en rupture :
     ```
     Désolé, le Cappuccino est en rupture de stock.
     ```

2. **Personnalisation** :
   - Ajoutez des options pour le sucre ou le lait.
   - Par exemple :
     ```
     Voulez-vous du sucre dans votre Café Noir ? (1 : Oui, 0 : Non) :
     ```

3. **Rendu de monnaie détaillé** :
   - Simulez les pièces rendues :
     ```
     Voici votre monnaie :
     - 1 pièce de 1 €
     - 1 pièce de 0.50 €
     ```

