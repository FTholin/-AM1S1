#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    // Demande du nom et de la question
    char nom[50];
    printf("Quel est votre nom? ");
    scanf("%49s", nom);

    printf("%s, posez votre question (terminez avec un '?'): ", nom);
    char question[256];
    scanf(" %[^\n]", question); // Pour lire jusqu'à la fin de ligne après un espace

    // Sélection aléatoire d'une réponse
    int reponse = rand() % 9;

    printf("%s demande : %s\n", nom, question);

    // Affichage de la réponse en fonction du nombre aléatoire
    switch(reponse) {
        case 0: printf("Réponse de la boule magique : Oui - définitivement.\n"); break;
        case 1: printf("Réponse de la boule magique : C'est décidément le cas.\n"); break;
        case 2: printf("Réponse de la boule magique : Sans aucun doute.\n"); break;
        case 3: printf("Réponse de la boule magique : Réponse floue, essayez à nouveau.\n"); break;
        case 4: printf("Réponse de la boule magique : Redemandez plus tard.\n"); break;
        case 5: printf("Réponse de la boule magique : Mieux vaut ne pas vous le dire maintenant.\n"); break;
        case 6: printf("Réponse de la boule magique : Mes sources disent que non.\n"); break;
        case 7: printf("Réponse de la boule magique : Perspectives pas si bonnes.\n"); break;
        case 8: printf("Réponse de la boule magique : Très douteux.\n"); break;
    }

    return 0;
}
