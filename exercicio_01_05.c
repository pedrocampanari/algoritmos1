#include <stdio.h>
int main(){
    int anos, meses, dias, total;

    printf("Informe a quantidade(ANOS): ");
    scanf("%d", &anos);
    printf("Informe a quantidade(MESES): ");
    scanf("%d", &meses);
    printf("Informe a quantidade(DIAS): ");
    scanf("%d", &dias);

    total = (anos*365) + (meses*30) + (dias);
    printf("Valor aproximado em dias: %d\n", total);
    return 1;
}