#include <stdio.h>
int main(){
    int nota[3], id;
    printf("Informe seu ID de estudante: ");
    scanf("%d", &id);

    printf("Informe suas notas\n");
    for(int i = 0; i < 3; i++) {
        printf("Nota%d: ", i+1);
        scanf("%d", &nota[i]);
    }
    printf("Seu id eh %d, as notas são: { %d, %d, %d}\n", id, nota[0], nota[1], nota[2]);

    return 1;
}