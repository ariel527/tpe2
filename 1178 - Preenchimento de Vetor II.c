#include <stdio.h>

int main() {
  double x;
  double n[100];
  scanf("%lf", &x);
  n[0] = x;
  printf ("N[0] = %.4lf\n", x);
  int i = 1;
  while ( i < 100) {
      n[i] = n[i-1]/2;
      printf ("N[%d] = %.4lf\n", i, n[i]);
      i++;
  }
  
    return 0;
}
