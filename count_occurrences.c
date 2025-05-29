#include <stdio.h> // Inclusion de la bibliothèque standard pour les entrées/sorties

int main() {
    int n, element, count = 0; // Déclaration des variables :
                               // n = taille du tableau
                               // element = élément à rechercher
                               // count = compteur d'occurrences

    scanf("%d", &n); // Lecture de la taille du tableau entrée par l'utilisateur

    int tab[n]; // Déclaration du tableau avec une taille dynamique (valeur entrée par l'utilisateur)

    // Boucle pour remplir le tableau avec les éléments saisis
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]); // Lecture de chaque élément du tableau
    }

    scanf("%d", &element); // Lecture de l'élément à rechercher dans le tableau

    // Boucle pour compter combien de fois l'élément apparaît
    for (int i = 0; i < n; i++) {
        if (tab[i] == element) { // Si l'élément courant est égal à celui recherché
            count++;             // Incrémenter le compteur
        }
    }

    // Affichage du résultat
    printf("L'élément %d apparaît %d fois.\n", element, count);

    return 0; // Fin du programme
}
