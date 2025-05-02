#include <stdio.h>
int main(){
    int tipo;
    float media, numeros[3], pesos[3];

    do{
        printf("Escolha uma tipo de media para calcular\n0 - Sair\n1 - Simples\n2 - Ponderada\nDigite: ");
        scanf("%d", &tipo);
    }while(((tipo != 1) && (tipo != 2)) && (tipo !=0 ));

    if (tipo == 1){
        for(int i = 0; i < 3; i++){
            printf("Informe o numero %d: ", (i+1));
            scanf("%f", &numeros[i]);
        }

        media = (numeros[0] + numeros[1] + numeros[2])/3;
    }

    if (tipo == 2){
        for(int i = 0; i < 3; i++){
            printf("Informe o numero %d: ", (i+1));
            scanf("%f", &numeros[i]);
            printf("Informe o respectivo peso: ");
            scanf("%f", &pesos[i]);
        }
        media = ((numeros[0]* pesos[0]) + (numeros[1]* pesos[1]) + (numeros[2]* pesos[2])) / (pesos[0] + pesos[1] + pesos[2]);
    }


    if (tipo != 0){
        printf("Media: %.3f\n", media);
    }
    return 1; 
}