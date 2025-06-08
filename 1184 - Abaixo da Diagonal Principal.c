#include <stdio.h>

int main() {
    char T;
    float M[12][12];
    float soma = 0.0;
    int count = 0;
    int j = 0;

    scanf(" %c", &T); 

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &M[i][j]);
        }
    }

    for (int i = j + 1; i < 12; i++) {
            for (int j = 0; j< i; j++) {
            soma += M[i][j];
            count++;
        }
    }

    if (T == 'S') {
        printf("%.1f\n", soma);
    } else if (T == 'M') {
        printf("%.1f\n", soma / count);
    }

    return 0;
}
