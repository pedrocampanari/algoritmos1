/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 24/04/2025

    Explicação: "Este código utiliza uma biblioteca essencial (stdio),
        sendo stdio.h utilizada para coletar e mostrar resultados ao cliente.
        Ao decorrer do código, foram declaradas as variáveis (eixo_x, eixo_y, eixo_z).
        No próximo passo, são utilizadas as funções (printf e scanf) para coleta 
        dos valores inseridos pelo usuário.

        É exibida uma mensagem inicial com instruções, seguida pela coleta de três valores 
        referentes às dimensões (x, y e z), todas do tipo float. Estes valores são armazenados 
        nas variáveis declaradas anteriormente. Em seguida, é utilizado a função printf para 
        mostrar ao usuário as dimensões fornecidas, confirmando os dados inseridos. 
        O programa retorna o valor 1 ao final da execução."
*/


#include <stdio.h>

int main () {
    float eixo_x, eixo_y, eixo_z;
    printf("Informe as dimensoes(x, y, z) em metros.\n");
    printf("Eixo X: ");
    scanf("%f", &eixo_x);
    printf("Eixo Y: ");
    scanf("%f", &eixo_y);
    printf("Eixo Z: ");
    scanf("%f", &eixo_z);

    printf("Suas dimensoes sao x:%f, y:%f, z:%f\n\n", eixo_x, eixo_y, eixo_z);
    return 1;
}