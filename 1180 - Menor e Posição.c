#include <stdio.h>

int main() {
 int N, i = 0;
 scanf ("%d", &N);
 int x[N];
 for (int i = 0; i < N; i++) {
     scanf ("%d", &x[i]);
 }
 int menor = x[0];
 int posicao;
  for (int i = 0; i < N; i++) {
      if (x[i] < menor) {
          menor = x[i];
          posicao = i;
      }
  }
  printf ("Menor valor: %d\n", menor);
  printf ("Posicao: %d\n", posicao);
    return 0;
}
