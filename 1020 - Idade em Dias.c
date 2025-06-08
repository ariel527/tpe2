#include <stdio.h>

int main() {
    int a;
    int ano = 0, meses = 0, dias = 0;

    scanf("%d", &a);

    ano = a / 365;
    a = a % 365;

    meses = a / 30;
    dias = a % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, meses, dias);

    return 0;
}

}
