#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a = 0, b = 1;

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("0");
        } else if (i == 1) {
            printf(" 1");
        } else {
            int c = a + b;
            printf(" %d", c);
            a = b;
            b = c;
        }
    }

    printf("\n");
    return 0;
}
