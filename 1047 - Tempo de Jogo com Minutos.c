
#include <stdio.h>

int main() {
    int h_inicio, m_inicio, h_fim, m_fim;
    int inicio, fim, duracao_total, horas, minutos;

    scanf("%d %d %d %d", &h_inicio, &m_inicio, &h_fim, &m_fim);

    inicio = h_inicio * 60 + m_inicio;
    fim = h_fim * 60 + m_fim;

    if (fim <= inicio) {
        fim += 24 * 60; 
    }

    duracao_total = fim - inicio;

    horas = duracao_total / 60;
    minutos = duracao_total % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}
