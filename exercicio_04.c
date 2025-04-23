#include <stdio.h>

int main(){
    int ano_inicial, ano_final;
    printf("Informe o ano incial: ");
    scanf("%d", &ano_inicial);
    printf("Informe o ano final: ");
    scanf("%d", &ano_final);
  
    for (int i = ano_inicial; i <= ano_final; i++) {
        if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0)) {
            printf("\n%d eh um ano bissexto!", i);
        }
    }
    printf("\n\n");
    return 1;
}