#include <stdio.h>
int main(){
    float numero, inicio_intervalo, fim_intervalo;
    printf("Informe o numero: ");
    scanf("%d", &numero);

    printf("Informe o inicio do intervalo: ");
    scanf("%d", &inicio_intervalo);

    printf("Informe o fim do intervalo: ");
    scanf("%d", &fim_intervalo);

    if (inicio_intervalo > fim_intervalo){
        int cambio = fim_intervalo;
        fim_intervalo = inicio_intervalo;
        inicio_intervalo = cambio;
    }

    if ((numero > inicio_intervalo) && (numero < fim_intervalo)){
        printf("Dentro\n");
    } else {
        printf("Fora\n");
    }

    return 1;
}