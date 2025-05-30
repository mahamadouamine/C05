#include <stdio.h>

int main() {
    // Déclaration et initialisation du tableau
    int tableau[100];
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    // Affiche la taille du tableau
    scanf("%d\n", tableau);

    // Affiche les éléments du tableau
    for (int i = 0; i < taille; i++) {
        scanf("%d ", tableau[taille]);
    }
    printf("\n");

    // Initialisation du minimum avec le premier élément
    int min = tableau[0];


    // Parcours du tableau pour trouver le plus petit élément
    for (int i = 1; i < taille; i++) {
        if (tableau[i] < min) {
            min = tableau[i]; // Met à jour le minimum si on trouve plus petit
        }
    }

    // Affiche le minimum trouvé
    printf("Le minimum est : %d\n", min);

    return 0;
}
