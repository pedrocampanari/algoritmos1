#include <stdio.h>

int main(){
    int dia, mes, ano;
    printf("Informe sua data de nascimento\n");
    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mes: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);

    int anoAtual = 2025;
    int mesAtual = 4;
    int diaAtual = 18;

    int anos = anoAtual - ano;
    int meses = mesAtual - mes;
    int dias = diaAtual - dia;

    if (dias < 0) {
        dias += 30; 
        meses -= 1;
    }

    if (meses < 0) {
        meses += 12;
        anos -= 1;
    }

    printf("Voce tem %d anos, %d meses, %d dias\n", anos, meses, dias);
    return 1; 
}