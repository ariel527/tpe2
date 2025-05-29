#include <stdio.h>
#define num 20

int main () {
  int N[20];

  for(int i = 0; i < num; i++) {
      scanf("%d", &N[i]);
  }

  for(int i = 0; i < num; i++) {
      printf("N[%d] = %d\n", i, N[num - 1 - i]);
  }

  return 0;
}
