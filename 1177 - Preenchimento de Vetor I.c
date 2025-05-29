#include <stdio.h>

int main() {
   int T, N[1000], valor;
   scanf ("%d", &T);
   valor = 0;
  for (int i = 0; i < 1000; i++) {
    N[i] = valor;
    printf("N[%d] = %d\n", i, N[i]);
    valor++;
     if (valor == T) {
        valor = 0;
    }

  }
    return 0;
}
