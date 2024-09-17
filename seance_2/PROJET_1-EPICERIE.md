# L'épicerie

Les épiceries ont beaucoup d'informations à gérer : stocks, clients, prix, ventes, employés, expédition, réception, et ainsi de suite. Nous allons commencer à en construire une petite partie ici.

Pour l'instant, nous allons nous concentrer sur un produit spécifique d'une épicerie : les pommes. Nous allons rassembler des informations de base à leur sujet et les afficher à la fin. Vous utiliserez les connaissances que vous avez acquises sur les variables en C pour effectuer ce travail.

## Création des variables

1. Tout d'abord, créons nos variables dans lesquelles nous allons stocker toutes nos informations pendant notre programme.

    - Nous voulons connaître le nombre de pommes en stock, appelons cela `quantite_pommes`.
    <details>
        <summary>Indice. ⬇️</summary>
    <p>La première variable appelée <b>quantite_pommes</b> doit être un <b>int</b> pour stocker la quantité de pommes.</p>
     </details>


2. Ensuite, ajoutez le prix actuel des pommes, que vous appellerez `prix_pommes`. Gardez à l'esprit que nous stockons une valeur monétaire dans cette variable ; doit-elle être un `flottant` ou un `double` ?
<details>
        <summary>Indice. ⬇️</summary>
    <p>Puisque <b>prix_pommes</b> stocke des informations financières, il doit être de type <b>double</b>.</p>
</details>


3. Nous voulons également stocker l'avis moyen des utilisateurs, appelons-le `avis_pommes`. Puisque cette variable stocke les avis des clients sous forme de décimale (`0.52`), doit-elle être un `flottant` ou un `double` ?
<details>
        <summary>Indice. ⬇️</summary>
    <p>La variable <b>avis_pommes</b> peut être un <b>double</b> ou un <b>float</b> car les évaluations des utilisateurs n'ont pas besoin d'un haut niveau de précision.</p>
</details>


4. Créez un `int` pour stocker le score des évaluations que nous voulons afficher aux utilisateurs, appelez-le `affichage_avis_pommes`.
<details>
    <summary>Indice. ⬇️</summary>
    <p> <b>affichage_avis_pommes</b> est de type <b>int</b>.</p>
</details>


5. Enfin, nous devons savoir où trouver les pommes dans le magasin. Appelez cette variable `position_pommes`. Nous voudrons être en mesure de stocker une seule lettre ou un seul chiffre dans ce champ, quel doit être son type ?
<details>
    <summary>Indice. ⬇️</summary>
    <p>Puisque <b>position_pommes</b> stockera une lettre ou un chiffre, elle doit être déclarée comme un <b>char</b>.
</p>
</details>


## Affectation des valeurs

6. Maintenant que nous avons créé nos variables, il est temps de leur attribuer des valeurs.
    - Lorsque vous créez vos variables pour la première fois, nous connaissons déjà le prix des pommes et l'endroit où elles seront conservées. Lors de la déclaration, définissez le prix des pommes à `1.49` et la position des pommes à `F`.

7. Après la déclaration, votre programme obtiendra les informations concernant la quantité de pommes et l'évaluation de l'utilisateur moyen.
    - Sous la déclaration de votre variable, la quantité de pommes est de `23` et l'évaluation moyenne des pommes est de `82.5`, ce qui est respectable.

## Constantes

8. Nous voulons nous assurer que les clients peuvent toujours trouver des pommes, donc assurez-vous que la variable `position_pommes` ne peut pas être modifiée par rapport à ce qui a été défini lors de la déclaration.
<details>
    <summary>Indice. ⬇️</summary>
    <p>Dans votre déclaration pour la variable <b>position_pommes</b>, ajoutez la balise <b>const</b> devant celle-ci pour vous assurer que la valeur ne peut pas être modifiée en la définissant comme une constante.</p>
</details>


9. Pour l'affichage, nous n'avons pas besoin de la précision d'un double, nous allons utiliser la variable que vous avez créée à cet effet. Transformez <b>avis_pommes</b> en la variable <b>affichage_avis_pommes</b> (faites-le après avoir défini la valeur de <b>avis_pommes</b>), n'hésitez pas à utiliser la transformation implicite ou explicite dans ce cas.

10. Vous avez maintenant terminé toutes les tâches pour ce projet ! Exécutez-le maintenant pour vous assurer que tout fonctionne comme prévu, et nous vous verrons dans la prochaine leçon pour approfondir vos connaissances du C.


```c
#include <stdio.h>

int main() {


    // Mettez tout votre code au-dessus de ceci et si vous déclarez vos variables en utilisant les noms et types donnés, il n'y a pas besoin de modifier le code ci-dessous.
    printf("Une pomme coûte : $%.2f, il y a %d en inventaire trouvé dans la section : %c et vos clients lui ont donné une critique moyenne de %d%% !", prix_pommes, quantite_pommes, position_pommes, affichage_avis_pommes) ;

}
```
