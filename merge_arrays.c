#include <stdio.h>

int main() {
    int taille1, taille2;

    // Demander à l'utilisateur combien de nombres il veut mettre dans le premier tableau
    
    scanf("%d", &taille1);

    // Créer le premier tableau
    int tableau1[taille1];

    // Remplir le premier tableau avec les nombres entrés par l'utilisateur
    
    for (int i = 0; i < taille1; i++) {
        scanf("%d", &tableau1[i]);
    }

    // Demander à l'utilisateur combien de nombres il veut mettre dans le deuxième tableau
    
    scanf("%d", &taille2);

    // Créer le deuxième tableau
    int tableau2[taille2];

    // Remplir le deuxième tableau avec les nombres entrés par l'utilisateur
    
    for (int i = 0; i < taille2; i++) {
        scanf("%d", &tableau2[i]);
    }

    // Créer un troisième tableau pour contenir les deux tableaux ensemble
    int resultat[taille1 + taille2];

    // Copier les éléments du premier tableau dans le tableau fusionné
    for (int i = 0; i < taille1; i++) {
        resultat[i] = tableau1[i];
    }

    // Copier les éléments du deuxième tableau dans la suite du tableau fusionné
    for (int i = 0; i < taille2; i++) {
        resultat[taille1 + i] = tableau2[i];
    }

    // Afficher tous les éléments du tableau fusionné
    printf("Tableau fusionné : ");
    for (int i = 0; i < taille1 + taille2; i++) {
        printf("%d ", resultat[i]);
    }
    printf("\n");

    return 0;
}
