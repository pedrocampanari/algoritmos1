#include <stdio.h>
int main(){
    int num = 195, escolha, tentativas = 0;
    printf("Adivinhe o numero:\n");
    do{
        printf("T: ");
        scanf("%d", &escolha);
        
        if(escolha < num){
            printf("Maior\n");
        }
        if(escolha > num){
            printf("Menor\n");
        }

        tentativas++;
    }while(escolha!=num);

    printf("Acertou! %d Tentativas\n", tentativas);
    return 1;
}