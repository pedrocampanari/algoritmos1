/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 23/04/2025

    Explicação: "Este código utiliza três bibliotecas (stdio/tgmath/math), 
        Sendo stdio.h utilizada para coletar e mostrar resultados ao cliente. Ao 
        decorrer do código, foram declaradas as variáveis(a, b, c, delta, x1 e x2). 
        No próximo passo, é utilizado as funções(printf e scanf) para coleta de 
        a, b e c(x² + 3x - 20). Testa a condição de existência de uma equação de 2º grau. 
        Após, iniciam-se os calculos, as potências necessitam do uso da função pow(base, expoente),
        e se o delta gerado for > 0, calcula as raízes(uso da função sqrt(n)) e retorna apenas os valores"
*/

#include <stdio.h>
#include <tgmath.h>
#include <math.h>


int main() {

    float a, b, c;
    float delta, x1, x2;

    printf("\nInforme os valores a, b e c para formula de Bhaskara." );
    printf("\nA: ");
    scanf("%f", &a);
    printf("B: ");
    scanf("%f", &b);
    printf("C: ");
    scanf("%f", &c); 

    if ((a != 0)) {
        delta = (pow(b, 2)) - (4*a*c);
        if (delta >= 0) {
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            printf("Os valores de x1 e x2 sao respectivamente: { %f, %f }", x1, x2);
        } else {
            printf("Nao existem raizes reais");
        }

    } else {
        printf("Impossivel calcular a formula com A == 0. Execute novamente!\n");
        return 0;
    }
    
    return 1;
}