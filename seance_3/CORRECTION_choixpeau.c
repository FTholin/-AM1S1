#include <stdio.h>

int main() {
    // Étape 3 : Initialisation des variables
    int gryffondor = 0, poufsouffle = 0, serdaigle = 0, serpentard = 0;
    int reponse1 = 0, reponse2 = 0, reponse3 = 0, reponse4 = 0;

    // Étape 5 : Affichage de bienvenue
    printf("Commençons l'épreuve du Choixpeau magique !\n");

    // Question 1
    printf("Q1) Quand je serai mort, je veux que les gens se souviennent de moi comme :\n");
    printf("1) Le bon\n");
    printf("2) Le grand\n");
    printf("3) Le sage\n");
    printf("4) L'audacieux\n");
    scanf("%d", &reponse1);
    switch(reponse1) {
        case 1: poufsouffle++; break;
        case 2: serpentard++; break;
        case 3: serdaigle++; break;
        case 4: gryffondor++; break;
        default: printf("Je n'ai pas compris votre choix jeune sorcier !\n"); break;
    }

    // Question 2
    printf("Q2) Aurore ou crépuscule ?\n");
    printf("1) Aurore\n");
    printf("2) Crépuscule\n");
    scanf("%d", &reponse2);
    if(reponse2 == 1) {
        gryffondor++;
        serdaigle++;
    } else if(reponse2 == 2) {
        poufsouffle++;
        serpentard++;
    } else {
        printf("Je n'ai pas compris votre choix jeune sorcier !\n");
    }

    // Question 3
    printf("Q3) Quel est l'instrument de musique qui vous plait le plus ?\n");
    printf("1) Le violon\n");
    printf("2) La trompette\n");
    printf("3) Le piano\n");
    printf("4) Le tambour\n");
    scanf("%d", &reponse3);
    switch(reponse3) {
        case 1: serpentard++; break;
        case 2: poufsouffle++; break;
        case 3: serdaigle++; break;
        case 4: gryffondor++; break;
        default: printf("Je n'ai pas compris votre choix jeune sorcier !\n"); break;
    }

    // Question 4
    printf("Q4) Quelle route vous tente le plus ?\n");
    printf("1) La large allée herbeuse et ensoleillée\n");
    printf("2) La ruelle étroite, sombre, éclairée par une lanterne\n");
    printf("3) Le chemin sinueux, parsemé de feuilles, à travers les bois\n");
    printf("4) La rue pavée bordée de bâtiments anciens\n");
    scanf("%d", &reponse4);
    switch(reponse4) {
        case 1: poufsouffle++; break;
        case 2: serpentard++; break;
        case 3: gryffondor++; break;
        case 4: serdaigle++; break;
        default: printf("Je n'ai pas compris votre choix jeune sorcier !\n"); break;
    }

    // La réponse finale
    int max = 0;
    char maison_choisie[100];

    if(gryffondor > max) {
        max = gryffondor;
        printf("Maison choisie : Gryffondor\n");
    }
    if(poufsouffle > max) {
        max = poufsouffle;
        printf("Maison choisie : Poufsouffle\n");
    }
    if(serdaigle > max) {
        max = serdaigle;
        printf("Maison choisie : Serdaigle\n");
    }
    if(serpentard > max) {
        max = serpentard;
        printf("Maison choisie : Serpentard\n");
    }

    return 0;
}
