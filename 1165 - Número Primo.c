#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool eh_primo(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int N;
    scanf ("%d", &N);
    int x[N];
    for (int i =0; i<N;i++) {
        scanf ("%d", &x[i]);
    }
        for (int i =0; i<N;i++) {
if (eh_primo(x[i])) {
    printf ("%d eh primo\n", x[i]);
}
else {
    printf ("%d nao eh primo\n", x[i]);
}
}


    return 0;
}
