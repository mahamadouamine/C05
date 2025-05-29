#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie pour utiliser printf et scanf

int main() { // Déclaration de la fonction principale, point d'entrée du programme
    int taille = 0;
    int n1, n2;
    int t1[100], t2[100], inter[100]; // Utiliser une taille fixe ici

    scanf("%d", &n1); // Lecture du nombre d'éléments dans le tableau t1
    for (int i = 0; i < n1; i++) scanf("%d", &t1[i]); 
    // Lecture des n1 éléments dans le tableau t1

    scanf("%d", &n2); // Lecture du nombre d'éléments dans le tableau t2
    for (int i = 0; i < n2; i++) scanf("%d", &t2[i]); 
    // Lecture des n2 éléments dans le tableau t2

    for (int i = 0; i < n1; i++) { // Parcours de tous les éléments de t1
        for (int j = 0; j < n2; j++) { // Parcours de tous les éléments de t2
            if (t1[i] == t2[j]) { // Si un élément de t1 est égal à un élément de t2
                inter[taille++] = t1[i]; // Ajouter l'élément à l'intersection et incrémenter taille
               
            }
        }
    }
    printf("Intersection : "); // Affiche le texte "Intersection : "
    for (int i = 0; i < taille; i++) printf("%d ", inter[i]); 
    // Affiche chaque élément du tableau inter (séparé par un espace)
    printf("\n"); // Saut de ligne après l'affichage

    return 0; // Fin du programme avec un code de retour 0 (succès)
}

