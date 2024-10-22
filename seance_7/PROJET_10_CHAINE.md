# Copieur de chaînes de caractères

Dans la leçon sur les chaînes de caractères, vous avez appris l'existence de la fonction `strcpy()`, qui permet de copier une chaîne de caractères dans une autre. Rappelez-vous que strcpy() nécessite deux chaînes : une chaîne source et une chaîne de destination. Elle copiera le contenu de la chaîne source dans la chaîne de destination.

Dans ce projet, vous allez améliorer votre compréhension de cette fonction en mettant en œuvre ses fonctionnalités. Vous verrez comment `strcpy()` fonctionne "sous le capot".

Dans votre code, vous mettrez en œuvre la fonctionnalité `strcpy()` à l'intérieur de la fonction `copy(). Pour ce faire, vous utiliserez vos connaissances sur les pointeurs.

Rappelez-vous qu'une chaîne de caractères est un tableau de type `char`. Rappelez-vous également qu'un tableau peut être parcouru à l'aide d'un pointeur. Un pointeur sur un tableau (ou une chaîne) pointe initialement sur le premier élément (ou caractère) du tableau (ou de la chaîne).

> Le concept de fonction sera abordé dans une leçon ultérieure, aussi ne vous préoccupez pas trop des détails du fonctionnement d'une fonction. Pour l'instant, considérez une fonction comme un moyen d'organiser votre code.

Dans la fonction `copy()`, le pointeur char src pointe sur l'adresse du premier caractère de la chaîne source, et le pointeur dst sur le premier caractère de la chaîne de destination.


## À vous de jouer ! 🤠

### Copier la chaîne

1. Partir d'un projet vierge et copiez-collez le code ci-dessous:
	```c
	#include<stdio.h>
	#include<string.h>
	 
	void copy(char* dst, char* src){
	  // Code pour copier une chaîne
	}
	 
	int main(){
	  char chaineSource[] = "Ne pas chercher midi à quatorze heures";
	 
	}
	```
	
2. Dans le corps de la boucle, écrivez du code qui copiera le caractère pointé par `src`dans l'adresse stockée dans `dst`.



3. Incrémentez le pointeur `src` d'une unité afin qu'il pointe sur le caractère suivant de la chaîne source.


4. Incrémentez le pointeur `dst` de manière à ce qu'il pointe sur le prochain espace disponible dans la chaîne de destination.



5. Remplir la condition de boucle de manière à ce que la boucle s'arrête lorsque le caractère pointé par `src` est le caractère de terminaison nul (`'\0'`).


6. Puisque la boucle s'est arrêtée lorsque `src` pointait vers le caractère de fin, ce caractère n'a pas été copié dans la chaîne `dst` !

	`dst` pointe déjà sur ce qui devrait être le dernier caractère. Définissez ce caractère comme étant le caractère de fin nul.


### Tester la fonction 


7. Testons votre nouvelle fonction de copie !

Dans `main()`, sous la chaîne `chaineSource, créez une nouvelle chaîne appelée chaineDest qui sera aussi longue que chaineSource. N'oubliez pas de prendre en compte le caractère de fin de chaîne 


8. Utilisez votre fonction `copy()` pour copier `chaineSource` dans `chaineDest`.


9. Prouvons que votre fonction `copy()` fonctionne ! Affichez la chaîne `chaineDest`.