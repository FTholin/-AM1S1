# Projet gestion de contacts


1. Partir d'un espace de travail vierge puis inclure les librairies suivantes:
    - `stdio.h`
    - `stdlib.h`
    - `string.h`


2. Créez un main de base vide pour tester notre programme.


3. Créez une structure `Contact` qui contient les champs nécessaires, tels que `nom`, `prenom`, `telephone` et adresse `email`.
    - a. Commencez par déclarer un nouveau type de structure avec `typedef struct`.
    - b. Nommez la structure `Contact`.
    - c. À l'intérieur de la structure, déclarez les champs requis avec des pointeurs de caractères :
        - Déclarez un champ `nom` de type pointeur de caractères (`char *`).
        - Déclarez un champ `prenom` de type pointeur de caractères (`char *`).
        - Déclarez un champ `telephone` de type pointeur de caractères (`char *`).
        - Déclarez un champ `email` de type pointeur de caractères (`char *`).
    - d. Fermez la structure avec une accolade et un point-virgule.
    - e. Ajoutez le mot-clé `typedef` avant la déclaration de la structure pour **créer un alias** pour le type de structure, ce qui **facilite son utilisation** dans le reste du programme.


4. Dans la fonction `main()` :
    - a. Déclarez une variable de type Contact nommée `personne`.
    - b. Allouez de la mémoire pour les champs de la structure personne :
        - Utilisez `malloc()` pour allouer de la mémoire pour le champ `nom` et affectez le pointeur retourné à `personne.nom`.
        - Utilisez `malloc()` pour allouer de la mémoire pour le champ `prenom` et affectez le pointeur retourné à `personne.prenom`.

        - Utilisez malloc() pour allouer de la mémoire pour le champ `telephone` et affectez le pointeur retourné à `personne.telephone`.

        - Utilisez `malloc()` pour allouer de la mémoire pour le champ `email` et affectez le pointeur retourné à `personne.email`.

    - c. Remplissez les champs de la structure personne avec des valeurs appropriées :
        - Utilisez `strcpy()` pour copier une chaîne de caractères dans le champ `nom`.
        - Utilisez `strcpy()` pour copier une chaîne de caractères dans le champ `prenom`.
        - Utilisez `strcpy()` pour copier une chaîne de caractères dans le champ `telephone`.
        - Utilisez `strcpy()` pour copier une chaîne de caractères dans le champ `email`.

    - d. Affichez les champs de la structure personne à l'aide de `printf()`.
    - e. Libérez la mémoire allouée pour les champs de la structure personne avec `free()`.
    - f. Ajoutez `return 0;` à la fin de la fonction `main()`.
  
  
  
> La notion de constante fait référence à une valeur ou une expression qui reste inchangée tout au long de l'exécution d'un programme. Dans le langage C, les constantes peuvent être définies de différentes manières, telles que les littéraux (par exemple, des nombres ou des chaînes de caractères) ou des symboles définis avec l'aide de la directive préprocesseur `#define`. Une constante est **utile lorsque vous souhaitez utiliser une valeur fixe plusieurs fois dans votre programme**, sans risque de la modifier accidentellement.

5. Déclarer la constante `MAX_CONTACTS` à `2` :
    - Utilisez la directive `#define` pour définir une constante symbolique `MAX_CONTACTS` ayant la valeur `2`. Cette constante représente la taille maximale du tableau de contacts que vous allez utiliser dans votre programme.
    - Pour définir cette constante, ajoutez la ligne suivante en dehors de la fonction main() (généralement en haut du fichier) :
    ```c
    #define MAX_CONTACTS 2
    ```


6.  Dans la fonction `main()`, déclarez un pointeur vers une structure `Contact` nommé `liste_contacts` :
    - Tout d'abord vous allez supprimer le code effectué à l'étape 4 celui-ci nous servait à vérifier le bon fonctionnement de création de notre structure.
    - déclarez un pointeur vers une structure Contact appelé `liste_contacts`. Ce pointeur sera utilisé pour pointer vers le début du tableau dynamique de contacts.
    - Pour déclarer ce pointeur, ajoutez la ligne suivante dans la fonction `main()` :
    ```c
    Contact *liste_contacts;
    ```


7. Allouez de la mémoire pour le tableau dynamique de structures Contact :
    - Utilisez la fonction `calloc()` pour allouer de la mémoire pour le tableau dynamique. La taille totale de la mémoire à allouer est le produit de `MAX_CONTACTS` et `sizeof(Contact)`.
  
  
8. Vérifiez si l'allocation de mémoire a réussi :
    - Après avoir utilisé `calloc()`, vérifiez si l'allocation de mémoire a réussi en vérifiant si `liste_contacts` est différent de `NULL`. Si liste_contacts est égal à `NULL`, cela signifie que l'allocation de mémoire a échoué.
    - Pour vérifier si l'allocation de mémoire a réussi, ajoutez le code suivant dans la fonction `main()` :
    ```c
    if (liste_contacts == NULL) {
        printf("L'allocation de mémoire a échoué.\n");
        return 1;
    } else {
        // Effectuer le traitement ici, par exemple, ajouter, modifier ou supprimer des contacts.

        // Libérer la mémoire allouée pour liste_contacts
        free(liste_contacts);
    }
    ```
    
    - En utilisant un tableau dynamique, vous pouvez gérer la mémoire allouée pour les contacts plus efficacement. N'oubliez pas de libérer la mémoire allouée pour le tableau dynamique en utilisant `free(liste_contacts)` avant de quitter le programme.
    
    
9. En dehors du main, créez la fonction `ajouter_contact` pour ajouter des contacts à la liste de contacts :
    - a. La fonction **retourne** un `int` : Le type de retour int est utilisé pour indiquer la nouvelle position du dernier contact ajouté dans le tableau liste_contacts. Si la fonction retourne -1, cela signifie que le tableau est plein et qu'aucun contact supplémentaire ne peut être ajouté.
    - b. La fonction prend trois paramètres :
        - `Contact *liste_contacts` : Un pointeur vers le tableau de structures Contact. Ce tableau contient les contacts existants et sera mis à jour avec les nouveaux contacts ajoutés.
        - `Contact contact` : Une structure Contact contenant les informations du nouveau contact à ajouter au tableau liste_contacts.
        - `int dernier_contact` : Un entier représentant l'index du dernier contact ajouté dans le tableau liste_contacts. Cette valeur sera utilisée pour déterminer où ajouter le prochain contact et pour vérifier si le tableau est plein.
    - c. Voici la signature de la fonction ajouter_contact :
    ```c
    int ajouter_contact(Contact *liste_contacts, Contact contact, int dernier_contact){
    // Le code de la fonction sera ajouté ici
    }
    ```
    Cette signature permet de définir clairement les entrées et la sortie de la fonction ajouter_contact. Vous utiliserez ces paramètres pour implémenter la logique d'ajout de contacts dans le tableau liste_contacts, tout en mettant à jour l'index du dernier contact ajouté.


10. Implémenter la fonction `ajouter_contact`:
    - a. Commencez par vérifier si le tableau de contacts est plein. Si `dernier_contact` est égal à `MAX_CONTACTS - 1`, cela signifie que le tableau est plein et qu'aucun autre contact ne peut être ajouté. Dans ce cas, retournez `-1` pour indiquer que l'ajout a échoué.
    ```c
    if (dernier_contact == MAX_CONTACTS - 1) {
        return -1;
    }
    ```
    - b. Si le tableau n'est pas plein, incrémente dernier_contact de 1 pour déterminer l'index où le nouveau contact sera ajouté.
    ```c
    dernier_contact++;
    ```
    
    - c. Copiez les données du contact passé en paramètre (contact) dans le tableau `liste_contacts` à l'index `dernier_contact`. Utilisez la fonction `strcpy()` pour copier les valeurs des champs `nom`, `prenom`, `telephone` et `email` du contact dans le tableau.
    ```c
    strcpy(liste_contacts[dernier_contact].nom, contact.nom);
    strcpy(liste_contacts[dernier_contact].prenom, contact.prenom);
    strcpy(liste_contacts[dernier_contact].telephone, contact.telephone);
    strcpy(liste_contacts[dernier_contact].email, contact.email);
    ```

     - d. Enfin, retournez la nouvelle valeur de `dernier_contact`, qui correspond à l'index du dernier contact ajouté dans le tableau `liste_contacts`.
     
En résumé, cette étape consiste à implémenter la fonction `ajouter_contact`, qui vérifie d'abord si le tableau de contacts est plein, puis augmente de 1 `dernier_contact` et copie les données du contact dans le tableau `liste_contacts` à l'index approprié. La fonction retourne la nouvelle valeur de `dernier_contact` pour indiquer l'index du dernier contact ajouté.


11. Testons maintenant dans le `main` dans la partie `else`,  la fonction `ajouter_contact`:
    - a. Créez une variable int appelée `dernier_contact` et initialisez-la à `-1`. Cette variable gardera la trace de l'index du dernier contact ajouté à `liste_contacts`.
    - b. Créez quelques contacts de test et utilisez la fonction `ajouter_contact` pour les ajouter à `liste_contacts`. Par exemple, créez trois contacts avec des informations différentes.
        ```c
        Contact contact1 = {"Alice", "Dupont", "0612345678", "alice.dupont@email.com"};
        Contact contact2 = {"Bob", "Martin", "0712345678", "bob.martin@email.com"};
        Contact contact3 = {"Charlie", "Petit", "0812345678", "charlie.petit@email.com"};
        ```
    - c. Appelez la fonction `ajouter_contact` pour chaque contact créé et mettez à jour la valeur de `dernier_contact` avec le résultat retourné par la fonction. Si la fonction retourne `-1`, cela signifie que l'ajout a échoué (probablement parce que le tableau est plein). Sinon, cela signifie que le contact a été ajouté avec succès et que la valeur retournée correspond à l'index du dernier contact ajouté.
       ```c
        dernier_contact = ajouter_contact(liste_contacts, contact1, dernier_contact);
        printf("Index du contact 1: %d\n", dernier_contact);

        dernier_contact = ajouter_contact(liste_contacts, contact2, dernier_contact);
        printf("Index du contact 2: %d\n", dernier_contact);

        dernier_contact = ajouter_contact(liste_contacts, contact3, dernier_contact);
        printf("Index du contact 3: %d\n", dernier_contact);
       ```
    - d. À la fin du test, la variable `dernier_contact` contiendra l'index du dernier contact ajouté avec succès. Vous pouvez utiliser cette variable pour afficher les informations du dernier contact ajouté ou pour effectuer d'autres opérations sur ce contact, comme le modifier ou le supprimer.
 

Pour afficher les informations des contacts ajoutés, vous pouvez utiliser une fonction d'affichage qui prend en paramètre la liste des contacts et l'index du dernier contact ajouté. Voici comment procéder :
    
12. Créez une fonction `afficher_contacts` qui prend en paramètre **un pointeur vers un tableau de structures Contact** et un entier représentant l'index du dernier contact ajouté :
    ```c
    void afficher_contacts(Contact *liste_contacts, int dernier_contact) {
    // Le code de la fonction sera ajouté ici
    }
    ```
  
  
13. Dans cette fonction, utilisez une boucle `for` pour parcourir le tableau `liste_contacts` jusqu'à l'index `dernier_contact` inclus :
    ```c
    void afficher_contacts(Contact *liste_contacts, int dernier_contact) {
        for (int i = 0; i <= dernier_contact; i++) {
            // Le code pour afficher les informations du contact courant sera ajouté ici
        }
    }
    ```
    
    
14. À l'intérieur de la boucle `for`, utilisez `printf()` pour afficher les informations du contact courant en accédant aux champs de la structure à l'aide de l'opérateur `.` :
    ```c
    void afficher_contacts(Contact *liste_contacts, int dernier_contact) {
        for (int i = 0; i <= dernier_contact; i++) {
            printf("Contact %d:\n", i+1);
            printf("  Nom      : %s\n", liste_contacts[i].nom);
            printf("  Prenom   : %s\n", liste_contacts[i].prenom);
            printf("  Telephone: %s\n", liste_contacts[i].telephone);
            printf("  Email    : %s\n", liste_contacts[i].email);
        }
    }
    ```


15. Pour afficher les contacts dans la fonction `main()`, appelez simplement la fonction `afficher_contacts` en passant en paramètres `liste_contacts` et `dernier_contact` après avoir ajouté tous les contacts souhaités :
    ```c
    afficher_contacts(liste_contacts, dernier_contact);
    ```
    tous les contacts ajoutés avec succès à `liste_contacts` seront affichés avec leurs informations respectives.
    


16. Écrire la fonction `comparer_contacts` qui prend en paramètres deux structures Contact et renvoie un entier. La fonction doit comparer les attributs des deux contacts pour déterminer s'ils sont identiques.
    - `int` : Il s'agit du type de valeur renvoyée par la fonction. Dans ce cas, la fonction renvoie un entier (int). Elle renverra 1 si les deux contacts sont identiques et 0 s'ils sont différents.
    - `comparer_contacts` : Il s'agit du nom de la fonction. C'est le nom que vous utiliserez pour appeler cette fonction dans votre programme.
    - `Contact contact1` : Le premier paramètre est une structure de type Contact. La fonction utilisera ce paramètre pour comparer les informations de contact1 avec celles de contact2.

    - `Contact contact2` : Le deuxième paramètre est également une structure de type Contact. La fonction utilisera ce paramètre pour comparer les informations de contact2 avec celles de contact1.



17. On utilise la fonction `strcmp` de la bibliothèque `<string.h>` pour comparer les champs `nom`, `prenom` et `telephone`, `email` des deux structures Contact. La fonction `strcmp` retourne `0` si les deux chaînes de caractères sont identiques. On vérifie donc que les trois comparaisons sont égales à `0`, ce qui signifie que les champs des deux contacts sont identiques.
    ```c
    if (strcmp(contact1.nom, contact2.nom) == 0 &&
        strcmp(contact1.prenom, contact2.prenom) == 0 &&
        strcmp(contact1.telephone, contact2.telephone) == 0) &&
        strcmp(contact1.email, contact2.email) == 0){
    ```

18. Si les champs des deux contacts sont identiques, la fonction retourne `1`.



19. Si les champs des deux contacts ne sont pas identiques, la fonction retourne 0.
    ```c
     } else {
        return 0;
    }
    ```


20. Testez dans le `main`, la fonction `comparer_contacts` en récupérant deux structures de Contact et en comparant leurs valeurs à l'aide de cette fonction. Vérifiez si la fonction renvoie les résultats attendus.
    ```c
    printf("Comparaison contact1 et contact2 : %s\n", comparer_contacts(contact1, contact2) ? "identiques" : "différents");

    ```
  
  
21. La fonction `supprimer_contact` supprimera un contact dans la liste des contacts en comparant les structures de contact plutôt que d'utiliser un indice. Voici la signature de la fonction :
    ```c
    int supprimer_contact(Contact *liste_contacts, int nombre_contacts, Contact contact_a_supprimer);
    ```
    Cette fonction prend en paramètres un pointeur sur le tableau `liste_contacts`, la taille actuelle du tableau `nombre_contacts`, et une structure `contact_a_supprimer` qui est le contact à supprimer. La fonction retourne un entier, qui sera 1 si le contact a été supprimé et 0 si le contact n'a pas été trouvé.


22. Implémentons l'intérieur de la fonction:

    - a. Parcourir la liste des contacts:
        ```c
        for (int i = 0; i < nombre_contacts; i++) {
        ```
        
    - b. Comparer le contact courant avec le contact à supprimer:
        ```c
        if (comparer_contacts(liste_contacts[i], contact_a_supprimer) == 1) {
        ```
        
    - c. Supprimer le contact en décalant tous les contacts suivants:
        ```c
        for (int j = i; j < nombre_contacts - 1; j++) {
            liste_contacts[j] = liste_contacts[j + 1];
        }
        ```
        
    - d. Retourner 1, car le contact a été supprimé:
        ```c
        return 1;
            }
        }
        ```

    - e. Si le contact n'a pas été trouvé, retourner 0:
        ```c
          return 0;
        }
        ```
    La fonction `supprimer_contact` parcourt la liste des contacts, compare chaque contact avec le contact à supprimer, et si elle trouve une correspondance, elle supprime ce contact en décalant tous les contacts suivants vers la gauche. Si le contact a été supprimé, la fonction retourne 1, sinon elle retourne 0.
    
    
23. Maintenant, testons la fonction `supprimer_contact` dans la fonction `main`:
    - a. Essayez de supprimer un contact de la liste des contacts. Par exemple, supprimez contact2 de la liste:
        ```c
        int resultat_suppression = supprimer_contact(liste_contacts, dernier_contact + 1, contact2);
        ```
        Notez que nous passons dernier_contact + 1 comme taille de la liste des contacts, car dernier_contact est l'index du dernier contact ajouté, et les indices commencent à 0.
    - b. Vérifiez si la suppression a réussi:
        ```c
        if (resultat_suppression == 1) {
            printf("Le contact a été supprimé avec succès.\n");
            dernier_contact--;
        } else {
            printf("Le contact n'a pas été trouvé.\n");
        }
        ```
        Si la suppression a réussi, décrémentez dernier_contact pour refléter la nouvelle taille de la liste des contacts.
    - c. Affichez à nouveau la liste des contacts pour vérifier que le contact a bien été supprimé:
        ```c
        afficher_contacts(liste_contacts, dernier_contact);
        ```

24. Libérer la mémoire pour les chaînes de caractères de chaque contact
    - a. Utilisez une boucle `for` pour parcourir tous les contacts du tableau `liste_contacts` jusqu'à l'indice du dernier contact **inclus** (dernier_contact).
        ```c
        for (int i = 0; i <= dernier_contact; i++) {
        ```
    - b À l'intérieur de la boucle, utilisez la fonction `free()` pour libérer la mémoire allouée aux différents champs de chaque contact. Les champs à libérer sont : `nom`, `prenom`, `telephone` et `email`. Ceci permet d'éviter les fuites de mémoire lorsqu'on travaille avec des pointeurs vers des chaînes de caractères.
        ```c
            free(liste_contacts[i].nom);
            free(liste_contacts[i].prenom);
            free(liste_contacts[i].telephone);
            free(liste_contacts[i].email);
        }
        ```

25.  Libérer la mémoire pour le tableau `liste_contacts`
    - Une fois que la mémoire allouée pour tous les champs de chaque contact a été libérée, il est temps de libérer la mémoire allouée pour le tableau liste_contacts lui-même. Utilisez la fonction `free()` pour libérer la mémoire allouée au tableau liste_contacts. Cela évite les fuites de mémoire liées à l'allocation dynamique du tableau.