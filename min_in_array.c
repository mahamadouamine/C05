#include <stdio.h>

int main() {
    int taille;

    // Lire la taille du tableau
    scanf("%d", &taille);

    // Déclaration du tableau avec une taille suffisante
    int tableau[100];

    // Lire les éléments du tableau
    for (int i = 0; i < taille; i++) {
        scanf("%d", &tableau[i]);
    }

    // Initialisation du minimum avec le premier élément
    int min = tableau[0];

    // Parcours du tableau pour trouver le plus petit élément
    for (int i = 1; i < taille; i++) {
        if (tableau[i] < min) {
            min = tableau[i];
        }
    }

    // Affiche le minimum trouvé
    printf("Le minimum est : %d\n", min);

    return 0;
}
