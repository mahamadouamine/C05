#include <stdio.h> // Inclusion de la bibliothèque standard pour printf et scanf

int main() {
    int n1, n2;
    int taille = 0;
    int t1[100], t2[100], inter[100];

    // Lecture du nombre d'éléments et des éléments de t1
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &t1[i]);
    }

    // Lecture du nombre d'éléments et des éléments de t2
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &t2[i]);
    }

    // Recherche des éléments communs sans doublons
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (t1[i] == t2[j]) {
                // Vérifie si l'élément est déjà dans le tableau inter[]
                int deja_present = 0;
                for (int k = 0; k < taille; k++) {
                    if (inter[k] == t1[i]) {
                        deja_present = 1;
                        break;
                    }
                }
                if (!deja_present) {
                    inter[taille++] = t1[i]; // Ajouter l'élément à l'intersection
                }
                break; // Pas besoin de continuer à chercher dans t2
            }
        }
    }

    // Affichage du résultat
    printf("Intersection : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", inter[i]);
    }
    printf("\n");

    return 0;
}
