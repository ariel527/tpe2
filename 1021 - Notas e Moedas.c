#include <stdio.h>

int main() {
    double valor;
    int notas, moedas;
    int centavos;

    scanf("%lf", &valor);

    int reais = (int)valor;              
    centavos = (int)((valor - reais) * 100 + 0.5); 

    printf("NOTAS:\n");

    int notas_valores[] = {100, 50, 20, 10, 5, 2};

    for (int i = 0; i < 6; i++) {
        notas = reais / notas_valores[i];
        reais = reais % notas_valores[i];
        printf("%d nota(s) de R$ %d.00\n", notas, notas_valores[i]);
    }

    moedas = reais;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moedas);

    int moedas_valores[] = {50, 25, 10, 5, 1};
    for (int i = 0; i < 5; i++) {
        moedas = centavos / moedas_valores[i];
        centavos = centavos % moedas_valores[i];

        printf("%d moeda(s) de R$ %.2f\n", moedas, moedas_valores[i] / 100.0);
    }

    return 0;
}
