#include <stdio.h>

int main() {
    int L;
    char T;
    float M[12][12];
    float soma = 0.0;

    scanf("%d", &L);
    scanf(" %c", &T); 

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &M[i][j]);
        }
    }

    for (int i = 0; i < 12; i++) {
        soma += M[i][L];
    }

    if (T == 'S') {
        printf("%.1f\n", soma);
    } else if (T == 'M') {
        printf("%.1f\n", soma / 12.0);
    }

    return 0;
}
