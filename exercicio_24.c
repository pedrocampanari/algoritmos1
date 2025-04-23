#include <stdio.h>

int main() {
    int idade, sexo, def;
    char nacionalidade[10];

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if ((idade >= 18)){
        printf("Informe seu sexo: \n1 - Masculino\n2 - Feminino\nDigite aqui ... ");
        scanf("%d", &sexo);
        if ((sexo == 1)){
            printf("Informe sua nacionalidade (Para brasileiros digite 1): ");
            scanf("%s", &nacionalidade);
            if ((nacionalidade[0] == '1')){
                printf("Alistamento obrigatorio para homem brasileiros!");
            } else {
                printf("Alistamento nao obrigatorio para homens %s!", nacionalidade);
            }
        }
        if ((sexo == 2)){
            printf("O alistamento nao eh obrigatorio para mulheres!");
        }
        if (((sexo != 1) && (sexo !=2))){
            printf("Voce digitou um numero invalido");
        }

    } else {
        printf("Voce não está apto ao alistamento militar obrigatorio");    
    }

    printf("\n\n\n");
    return 1;
}