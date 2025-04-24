#include <stdio.h>
int main(){
    int nota[3];
    printf("Informe suas notas\n");
    for(int i = 0; i < 3; i++) {
        printf("Nota%d: ", i+1);
        scanf("%d", &nota[i]);
    }
    printf("Suas notas são: { %d, %d, %d}\n", nota[0], nota[1], nota[2]);

    return 1;
}