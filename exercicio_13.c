#include <stdio.h>

int main(){
    int dia, mes, ano;
    int meses;

    int mes_atual = 4;
    int ano_atual = 2025;

    printf("Informe sua data de nascimento (DD MM AAAA): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    meses = (ano_atual - ano) * 12 + (mes_atual - mes);

    if (mes > mes_atual) {
        meses -= 12;
    }

    printf("Sua idade em meses eh %d meses\n\n", meses);
    return 1;
}