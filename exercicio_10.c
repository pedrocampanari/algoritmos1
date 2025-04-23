#include <stdio.h>

int main() {
    int entrada, bebida, opcao;
    do {
        printf("\n\n\n\n*********************************************\n*\n*\n*\n");
        printf("*            LIVIA's Restaurant             *");
        printf("\n*            Entrada:                       *");
        printf("\n*               1 - Fritas                  *");
        printf("\n*               2 - Calabresa               *");
        printf("\n*               3 - Torresmo                *");
        printf("\n*               4 - Prato do Chef           *");
        printf("\n*            Bebidas:                       *");
        printf("\n*               1 - Whisky                  *");
        printf("\n*               2 - Vodka                   *");
        printf("\n*               3 - Campari                 *");
        printf("\n*               4 - Gin                     *");
        printf("\n*\n*\n*\n*********************************************\n\n\n\n");

        printf(" Faça seu pedido!\n");
        printf(" Entrada: ");
        scanf("%d", &entrada);
        printf(" Bebida: ");
        scanf("%d", &bebida);

        if (!((entrada > 0) && (entrada < 5)) && !((bebida > 0) && (bebida < 5))) {
            printf("\n\n Pedido inválido! Execute novamente o sistema!\n\n");
            return 0;
        }

        if (!((entrada > 0) && (entrada < 5))) {
            printf("\n Nao possuimos essa entrada!\n Deseja prosseguir sem entrada? \n 1 - Sim\n 2 - Não\n Digite aqui ... ");
            scanf("%d", &opcao);

            if (opcao != 1){
                do {
                    printf("\n\n\n\n*********************************************\n*\n*\n*\n");
                    printf("\n*            Entrada:                       *");
                    printf("\n*               1 - Fritas                  *");
                    printf("\n*               2 - Calabresa               *");
                    printf("\n*               3 - Torresmo                *");
                    printf("\n*               4 - Prato do Chef           *");
                    printf("\n*\n*\n*\n*********************************************\n\n\n\n");

                    printf(" Entrada: ");
                    scanf("%d", &entrada);
                } while (!((entrada > 0) && (entrada < 5)));
            }
            break;
        }

        if (!((bebida > 0) && (bebida < 5))) {
            printf("\n Nao possuimos essa bebida!\n Deseja prosseguir sem bebida? \n 1 - Sim\n 2 - Não\n Digite aqui ... ");
            scanf("%d", &opcao);

            if (opcao != 1){
                do {
                    printf("\n\n\n\n*********************************************\n*\n*\n*\n");
                    printf("\n*            Bebidas:                       *");
                    printf("\n*               1 - Whisky                  *");
                    printf("\n*               2 - Vodka                   *");
                    printf("\n*               3 - Campari                 *");
                    printf("\n*               4 - Gin                     *");
                    printf("\n*\n*\n*\n*********************************************\n\n\n\n");

                    printf(" Bebida: ");
                    scanf("%d", &bebida);
                } while (!((bebida > 0) && (bebida < 5)));
            }
            break;
        }
    } while (!((entrada > 0) && (entrada < 5)) || !((bebida > 0) && (bebida < 5)));

    printf("\n\n Seu pedido foi enviado!\n Voce escolheu ");

    switch (entrada) {
        case 1: 
            printf("fritas +");
            break;

        case 2: 
            printf("calabresa +");
            break;

        case 3: 
            printf("torresmo +");
            break;

        case 4: 
            printf("Prato do chef +");
            break;
    }

    switch (bebida) {
        case 1: 
            printf(" Whisky");
            break;

        case 2: 
            printf(" Vodka");
            break;

        case 3: 
            printf(" Campari");
            break;

        case 4: 
            printf(" Gin");
            break;
    }
    printf("\n\n\n\n");
    return 1;
}