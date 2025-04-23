#include <stdio.h>
#include <stdlib.h>


int main() {
    int numeros[6], numero_sorteado;
    float num_rand = rand();

    printf("Escolha 6 numeros (0-25)\n");
    for (int i = 0; i < 6; i++)
    {
        do {
            printf("%d: ", i+1);
            scanf("%d", &numeros[i]);
            if (((numeros[i] < 0) || (numeros[i] > 25))){
                printf("Digito invalido!\n");
            }
        }while (!((numeros[i]>= 0) && (numeros[i]<=25)));

        numero_sorteado = rand() % 25;
        if ((numeros[i] == numero_sorteado)){
            printf("Parabens o numero %d foi sorteado!\n", numero_sorteado);
            return 1;
        }
    }

    printf("Que azar! Voce nao foi sorteado.\n");
    return 1;
}