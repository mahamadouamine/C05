#include <stdio.h>

int deja_la(int tab[], int taille, int val) {
    for (int i = 0; i < taille; i++) {
        if (tab[i] == val) return 1;
    }
    return 0;
}

int main() {
    int n1, n2, t1[100], t2[100], inter[100], taille = 0;

    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) scanf("%d", &t1[i]);

    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) scanf("%d", &t2[i]);

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (t1[i] == t2[j] && !deja_la(inter, taille, t1[i])) {
                inter[taille++] = t1[i];
            }
        }
    }

    printf("Intersection : ");
    for (int i = 0; i < taille; i++) printf("%d ", inter[i]);
    printf("\n");

    return 0;
}
