# Activité 1

## Instructions :

1. **Déclaration des variables nécessaires** :
   - Une variable entière pour stocker le nombre total de sessions de recharge.
   - Des variables de type float pour :
     - La durée de chaque session (en heures).
     - L'énergie consommée pour chaque session (en kWh).
     - Le total des durées cumulées.
     - Le total de l'énergie consommée.

2. **Entrée utilisateur** :
   - Demandez à l'utilisateur combien de sessions il souhaite entrer.
   - Stockez cette valeur dans une variable entière.

3. **Collecte des données via une boucle** :
   - Utilisez une boucle pour itérer à travers chaque session.
   - Lors de chaque itération :
     - Demandez la durée de recharge et l'énergie consommée.
     - Ajoutez ces valeurs aux totaux cumulés.

4. **Calculs finaux** :
   - Une fois la boucle terminée :
     - Calculez la durée moyenne par session en divisant le total des durées par le nombre de sessions.
   - Affichez :
     - L'énergie totale consommée.
     - La durée moyenne de recharge.


## Structure
1. **Variables globales à la fonction** :
   - `nombreDeSessions` : Nombre total de sessions.
   - `dureeTotale`, `energieTotale` : Totaux cumulés.
   - `dureeSession`, `energieSession` : Saisies pour chaque session.

2. **Entrée utilisateur** :
   - Utilisation de `scanf` pour lire le nombre de sessions.

3. **Boucle** :
   - La boucle `for` parcourt chaque session, demande les données, et cumule les valeurs.

4. **Calculs finaux** :
   - La durée moyenne est calculée après la boucle.

5. **Affichage des résultats** :
   - Les résultats finaux sont affichés avec deux chiffres après la virgule.

# Activité 2

## Instructions

#### **Étape 1 : Déclarez les variables nécessaires**
1. **Montant** : 
   - Créez une variable entière `montant` pour stocker la valeur entrée par l'utilisateur en euros.

2. **Tableau des billets et pièces** : 
   - Créez un tableau d'entiers contenant les valeurs des billets et pièces en euros, dans l’ordre décroissant, par exemple `{50, 20, 10, 5, 2, 1}`.

3. **Tableau pour stocker les quantités** : 
   - Créez un tableau d'entiers `nbBilletsOuPieces`, initialisé à zéro, pour stocker le nombre de billets ou de pièces utilisés pour chaque type.


#### **Étape 2 : Demandez le montant en euros**
1. **Affichez une demande** : 
   - Invitez l'utilisateur à entrer un montant en euros à diviser en billets et pièces.
   
2. **Lire la saisie utilisateur** : 
   - Lisez le montant et stockez-le dans la variable `montant`.


#### **Étape 3 : Utilisez une boucle pour déterminer les billets et pièces nécessaires**
1. **Parcourez le tableau des billets et pièces** : 
   - À l’aide d’une boucle, traitez chaque valeur du tableau des billets et pièces.

2. **Calculez le nombre de billets ou pièces pour chaque type** :
   - Divisez le montant restant par la valeur actuelle (division entière) pour déterminer combien de fois cette valeur peut être utilisée.
   - Stockez ce nombre dans le tableau `nbBilletsOuPieces`.

3. **Mettez à jour le montant restant** : 
   - Utilisez l’opérateur modulo pour retirer les billets ou pièces déjà comptés.


#### **Étape 4 : Affichez les résultats**
1. **Pour chaque type de billet ou pièce** :
   - Affichez le nombre de billets ou pièces utilisés.
   - Si le nombre est nul, ne rien afficher ou indiquer "0 billets/pièces de X".

# Activité 3

## Instructions 

#### **1. Déclaration des variables nécessaires**
1. **Montant du prêt** : Une variable pour stocker le montant initial du prêt que l'utilisateur fournira (type `float`).
2. **Taux d'intérêt annuel** : Une variable pour enregistrer le taux d'intérêt annuel entré par l'utilisateur (type `float`).
3. **Montant du paiement mensuel** : Une variable pour stocker le montant du paiement mensuel prévu (type `float`).
4. **Taux d'intérêt mensuel** : Une variable pour calculer le taux d'intérêt mensuel basé sur le taux annuel (type `float`).
5. **Nombre de mois** : Une variable entière pour compter combien de mois seront nécessaires pour rembourser complètement le prêt (type `int`).



#### **2. Entrée des données utilisateur**
1. Demandez à l'utilisateur d’entrer :
   - Le montant initial du prêt.
   - Le taux d'intérêt annuel (en pourcentage).
   - Le montant du paiement mensuel.
2. Utilisez des invites claires pour guider l’utilisateur et lisez ces données à l’aide de `scanf`.


#### **3. Calcul du taux d’intérêt mensuel**
1. Calculez le taux d’intérêt mensuel en divisant le taux annuel par **12** (pour les mois) et **100** (pour convertir en pourcentage).
2. Stockez le résultat dans la variable prévue pour le taux mensuel.



#### **4. Boucle de remboursement du prêt**
1. Initialisez la boucle qui continue tant que le solde du prêt (montantPret) est supérieur à zéro.
2. À chaque itération :
   - Ajoutez les intérêts mensuels au solde du prêt :
    $
     \text{montantPret} = \text{montantPret} + (\text{montantPret} \times \text{taux d’intérêt mensuel})
     $
   - Soustrayez le paiement mensuel :
     $
     \text{montantPret} = \text{montantPret} - \text{montant du paiement mensuel}
    $
   - Incrémentez le compteur de mois.



#### **5. Affichage du résultat final**
1. Lorsque la boucle se termine (solde <= 0), affichez le nombre total de mois nécessaires pour rembourser complètement le prêt à l’aide de `printf`.


# Activité 4

## Instructions  :



#### **1. Déclaration des variables nécessaires**
1. **Montant de l'investissement** : Une variable `float` pour stocker le montant initial de l'investissement, en euros.
2. **Variation quotidienne (%)** : Une variable `float` pour stocker le pourcentage de variation quotidienne, qui peut être positif ou négatif.
3. **Nombre de jours** : Une variable `int` pour stocker la durée totale de l'investissement, en jours.
4. **Valeur actuelle de l'investissement** : Une variable `float` qui sera mise à jour quotidiennement pour refléter la variation du montant initial.



#### **2. Demande des informations utilisateur**
1. Affichez des messages clairs pour inviter l'utilisateur à saisir :
   - Le montant initial de l'investissement.
   - Le pourcentage de variation quotidienne.
   - Le nombre total de jours.
2. Utilisez `scanf` pour lire ces valeurs et les assigner aux variables correspondantes.



#### **3. Simulation quotidienne avec une boucle**
1. Initialisez la **valeur actuelle de l'investissement** avec le montant initial.
2. Utilisez une boucle `for` qui s'exécute pour chaque jour de la période (de 1 à `nombreDeJours` inclus).
3. À chaque itération :
   - **Calculez la variation quotidienne** :
     $
     \text{variation} = \text{valeur actuelle} \times \frac{\text{variation quotidienne}}{100}
     $
   - **Mettez à jour la valeur de l'investissement** :
     $
     \text{valeur actuelle} = \text{valeur actuelle} + \text{variation}
     $
   - **Affichez la valeur du jour courant** :
     Montrez le numéro du jour et la valeur actualisée de l'investissement (par exemple : "Jour 1 : 1050.00 €").



#### **4. Affichage final**
1. Une fois la boucle terminée, la valeur finale de l'investissement est déjà affichée au dernier jour.
2. Optionnel : Affichez un récapitulatif indiquant le montant initial et la valeur finale après la période donnée.



### **Exemple d’exécution**
#### Entrées utilisateur :
- Montant initial : **1000 €**
- Variation quotidienne : **5 %**
- Nombre de jours : **3**

#### Sortie attendue :
```
Entrez le montant initial de l'investissement (en euros) : 1000
Entrez la variation quotidienne (en pourcentage, positif ou négatif) : 5
Entrez la durée de l'investissement (en jours) : 3

Évolution de l'investissement jour par jour :
--------------------------------------------------
| Jour | Valeur de l'investissement (en euros) |
--------------------------------------------------
|    1 |                              1050.00 |
|    2 |                              1102.50 |
|    3 |                              1157.63 |
--------------------------------------------------
Après 3 jours, la valeur finale de l'investissement est : 1157.63 €
```

# Activité 5

## Instructions 



Ce programme simule un système de vote. L'utilisateur entre le nombre de votes reçus par chaque candidat, et le programme calcule le pourcentage de votes obtenus par chaque candidat par rapport au total des votes.



### **Étape 1 : Déclaration des variables nécessaires**
1. **Nombre de candidats** (`int`) : Une variable pour stocker le nombre total de candidats participants.
2. **Votes pour chaque candidat** (`int[]`) : Un tableau qui sera déclaré après que l'utilisateur aura entré le nombre de candidats.
3. **Total des votes** (`int`) : Une variable initialisée à 0 pour accumuler les votes de tous les candidats.


### **Étape 2 : Demande du nombre de candidats**
1. Demandez à l’utilisateur d’entrer le nombre total de candidats.
2. Vérifiez que le nombre de candidats est raisonnable (par exemple, entre 1 et 100).



### **Étape 3 : Déclaration du tableau des votes**
1. Déclarez un tableau statique de taille adaptée au nombre de candidats saisi.
   - Exemple : `int votes[nombreCandidats];`
2. Ce tableau sera utilisé pour enregistrer les votes de chaque candidat.


### **Étape 4 : Enregistrement des votes pour chaque candidat**
1. Utilisez une boucle pour enregistrer les votes de chaque candidat :
   - À chaque itération, demandez à l'utilisateur de saisir le nombre de votes reçus par le candidat.
   - Stockez cette valeur dans le tableau des résultats, à l’index correspondant au candidat.
   - Ajoutez la valeur saisie au **total des votes**.



### **Étape 5 : Calcul et affichage des pourcentages**
1. Utilisez une boucle pour parcourir le tableau des votes.
2. Pour chaque candidat :
   - **Calculez le pourcentage** de votes obtenus :
     $
     \text{Pourcentage} = \left(\frac{\text{Votes du candidat}}{\text{Total des votes}}\right) \times 100
     $
   - Affichez le pourcentage obtenu par ce candidat sous une forme lisible.



### **Étape 6 : Affichage final**
1. Affichez un récapitulatif clair des résultats :
   - Le nombre total de votes.
   - Le pourcentage de votes pour chaque candidat.




### **Explications**
1. **Nombre de candidats** : L'utilisateur saisit cette valeur en premier, permettant au programme de s'adapter dynamiquement.
2. **Tableau des votes** : Déclaré après que l'utilisateur a saisi le nombre de candidats, ce qui économise de la mémoire.
3. **Boucles** :
   - La première boucle enregistre les votes et calcule le total.
   - La seconde boucle calcule et affiche les pourcentages.
4. **Validation des entrées** :
   - Nombre de candidats doit être compris entre 1 et 100.
   - Les votes ne peuvent pas être négatifs.
5. **Affichage final** : Montre les résultats sous forme claire avec un formatage précis.


### **Exemple d’exécution**

#### Entrées :
- Nombre de candidats : `3`
- Votes pour le candidat 1 : `120`
- Votes pour le candidat 2 : `300`
- Votes pour le candidat 3 : `180`

#### Sortie :
```
Résultats :
Candidat 1 : 120 votes (20.00%)
Candidat 2 : 300 votes (50.00%)
Candidat 3 : 180 votes (30.00%)
```

# Activité 6

## Instructions

Ce programme analyse les températures sur une période de sept jours. L’utilisateur entre les températures quotidiennes, et le programme calcule trois indicateurs principaux : **température moyenne**, **température la plus haute**, et **température la plus basse**.



### **Étape 1 : Déclarer les variables nécessaires**
1. **Température du jour** :
   - Une variable `float` pour stocker la température saisie par l’utilisateur pour chaque jour.
2. **Total des températures** :
   - Une variable `float` initialisée à `0.0` pour accumuler les températures quotidiennes.
   - Cette variable sera utilisée pour calculer la moyenne à la fin.
3. **Température maximale** :
   - Une variable `float` initialisée à une valeur très basse (par exemple `-100.0`) pour enregistrer la température la plus élevée de la semaine.
4. **Température minimale** :
   - Une variable `float` initialisée à une valeur très haute (par exemple `100.0`) pour enregistrer la température la plus basse de la semaine.



### **Étape 2 : Collecter les températures quotidiennes**
1. **Utiliser une boucle sur 7 jours** :
   - Répétez le processus de collecte des températures pour chaque jour de la semaine.
2. **À chaque itération** :
   - Demandez à l’utilisateur de saisir la température du jour.
   - Ajoutez la température saisie au **total des températures**.
   - Comparez la température saisie avec les valeurs actuelles de la **température maximale** et de la **température minimale** :
     - Si la température du jour est supérieure à la température maximale actuelle, mettez à jour la valeur de la **température maximale**.
     - Si elle est inférieure à la température minimale actuelle, mettez à jour la valeur de la **température minimale**.



### **Étape 3 : Calculer la température moyenne**
1. Une fois les 7 températures saisies, calculez la température moyenne :
   $
   \text{Moyenne} = \frac{\text{Total des températures}}{7}
   $
2. Stockez ce résultat dans une variable pour l’afficher.


### **Étape 4 : Afficher les résultats**
1. Affichez clairement les trois indicateurs :
   - **Température moyenne** avec deux chiffres après la virgule.
   - **Température la plus haute**.
   - **Température la plus basse**.



### **Explications détaillées**
1. **Saisie utilisateur** :
   - Le programme demande les températures pour chaque jour de la semaine via une boucle.
2. **Calculs intermédiaires** :
   - À chaque température saisie, le programme met à jour le total et vérifie si cette température est un nouveau maximum ou minimum.
3. **Calcul final** :
   - Après les 7 saisies, la moyenne est calculée en divisant le total par 7.
4. **Affichage** :
   - Les trois indicateurs principaux sont affichés avec un formatage clair.

---

### **Exemple d’exécution**
#### Entrées utilisateur :
```
Entrez la température pour le jour 1 : 15
Entrez la température pour le jour 2 : 18
Entrez la température pour le jour 3 : 20
Entrez la température pour le jour 4 : 12
Entrez la température pour le jour 5 : 17
Entrez la température pour le jour 6 : 21
Entrez la température pour le jour 7 : 16
```

#### Sortie :
```
Résultats pour la semaine :
Température moyenne : 17.00°C
Température la plus haute : 21.00°C
Température la plus basse : 12.00°C
```

# Activité 7

## Instructions


### **Étape 1 : Déclaration des variables nécessaires**
1. **Plafond mensuel de données** :
   - Une variable `float` pour stocker la limite mensuelle en Go (par exemple, initialisée à 100 Go).
   - L’utilisateur peut être autorisé à entrer cette valeur ou elle peut être définie par défaut.
2. **Données du jour** :
   - Une variable `float` pour stocker la quantité de données utilisées chaque jour, saisie par l'utilisateur.
3. **Total des données consommées** :
   - Une variable `float`, initialisée à `0.0`, pour accumuler les données utilisées quotidiennement.


### **Étape 2: Collecter les données quotidiennes**
1. **Boucle pour chaque jour du mois** :
   - Utilisez une boucle `for` qui itère 30 fois, chaque itération représentant un jour.
2. **À chaque itération** :
   - Demandez à l’utilisateur d’entrer la consommation de données du jour.
   - Ajoutez cette consommation au **total des données**.



### **Étape 3: Surveiller le plafond mensuel**
1. Après avoir mis à jour le **total des données**, vérifiez si le plafond mensuel a été dépassé.
2. Si la consommation totale dépasse le plafond :
   - Affichez un **avertissement** précisant le jour où la limite a été atteinte.
   - **Arrêtez** la collecte pour le reste du mois en sortant de la boucle.

### **Étape 4: Afficher le total des données consommées**
1. À la fin de la boucle (ou si le plafond est atteint) :
   - Affichez le **total des données consommées** pour le mois.
2. (Optionnel) Affichez également combien de données supplémentaires ont été consommées si le plafond a été dépassé.





### **Explications détaillées**

1. **Saisie utilisateur** :
   - La boucle demande chaque jour la consommation en Go, via `scanf`, et la stocke dans `donneesJour`.
2. **Mise à jour et surveillance** :
   - Après chaque saisie, `totalDonnees` est mis à jour.
   - Une vérification immédiate détermine si le plafond est dépassé.
3. **Gestion du dépassement** :
   - Si le plafond est dépassé, le programme affiche un avertissement avec le jour concerné, puis termine la boucle.
4. **Affichage final** :
   - Le total des données consommées est affiché, avec une indication de dépassement éventuel.


### **Exemple d’exécution**

#### **Cas 1 : Plafond non dépassé**
Entrées utilisateur :
```
Entrez la consommation de données pour le jour 1 (en Go) : 3
Entrez la consommation de données pour le jour 2 (en Go) : 4
...
Entrez la consommation de données pour le jour 30 (en Go) : 2
```

Sortie :
```
Consommation totale de données pour le mois : 90.00 Go
```

#### **Cas 2 : Plafond dépassé**
Entrées utilisateur :
```
Entrez la consommation de données pour le jour 1 (en Go) : 20
Entrez la consommation de données pour le jour 2 (en Go) : 30
Entrez la consommation de données pour le jour 3 (en Go) : 60
```

Sortie :
```
Avertissement : Le plafond de 100.00 Go a été dépassé au jour 3.

Consommation totale de données pour le mois : 110.00 Go
Dépassement de 10.00 Go par rapport au plafond.
```
