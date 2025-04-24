/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 24/04/2025

    Explicação: "Este código utiliza a biblioteca essencial (stdio), 
        sendo stdio.h utilizada para coletar e mostrar resultados ao cliente. 
        Foram declaradas as variáveis (num1 e num2). O programa solicita que o usuário 
        insira dois números inteiros, que são armazenados nas variáveis num1 e num2.

        Em seguida, é realizada a soma dos dois números e uma verificação é feita para 
        checar se o resultado é maior ou igual a 10. Caso seja, o programa retorna uma mensagem 
        informando que a soma é maior ou igual a 10. Caso contrário, informa que a soma é 
        menor que 10."
*/

#include <stdio.h>

int main(){
    int num1, num2;
    printf("Informe o numero A: ");
    scanf("%d", &num1);
    printf("Informe o numero B: ");
    scanf("%d", &num2);

    if (((num1 + num2) >= 10)){
        printf("A soma %d + %d = %d, ou seja eh maior ou igual a 10.", num1, num2, num1+num2);
    } else {
        printf("A soma %d + %d = %d, ou seja nao eh maior ou igual a 10.", num1, num2, num1+num2);
    }

    printf("\n\n\n");
    return 1;
}