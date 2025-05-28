
#include <stdio.h>   // Inclusion de la bibliothèque standard d'entrée/sortie

int main()
{
    int n;  // Déclaration d'une variable pour stocker la taille du tableau
    scanf("%d", &n);  // Lecture de la taille du tableau depuis l'utilisateur

    int tab[n];  // Déclaration du tableau avec taille dynamique (valable en C99)

    // Lecture des éléments du tableau
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);  // Remplir le tableau avec les valeurs saisies
    }

    // ----------- Rotation à gauche d'un cran -----------

    int temp = tab[0]; // Sauvegarder le premier élément (il sera déplacé à la fin)

    for(int i = 0; i < n - 1; i++)  // Boucle de décalage vers la gauche
    {
        tab[i] = tab[i + 1];  // Chaque élément prend la valeur de son successeur
    }

    tab[n - 1] = temp; // Mettre le premier élément (sauvegardé) à la fin du tableau

    // ----------- Affichage du tableau après rotation -----------

    printf("Tableau après rotation : ");  // Message d'affichage

    for(int i = 0; i < n; i++)  // Parcourir le tableau
    {
        printf("%d ", tab[i]);  // Afficher chaque élément suivi d'un espace
    }

    return 0; // Fin du programme
}
