#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < n; i++) {
        if (vetor[i] == 0) {
            printf("NULL\n");
        } else {
            if (vetor[i] % 2 == 0) {
                printf("EVEN ");
            } else {
                printf("ODD ");
            }

            if (vetor[i] > 0) {
                printf("POSITIVE\n");
            } else {
                printf("NEGATIVE\n");
            }
        }
    }

    return 0;
}
