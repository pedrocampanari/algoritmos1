/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 23/04/2025

    Explicação: "Este código utiliza duas bibliotecas essenciais(stdio/stdlib), 
        Sendo stdio.h utilizada para coletar e mostrar resultados ao cliente e
        stdlib.h para tratar os dados para análise booleana. Ao decorrer do código,
        foram declaradas as variáveis(a, b, c), que são representações dos possíveis
        lados do triângulo. No próximo passo, é utilizado as funções(printf e scanf) 
        para o preenchimento das variáveis com os respectivos valores. Após, é verificado
        se existe um triângulo(|b-c|<a), testando todas possibilidades. Se validado como 
        triângulo, testa a categoria(equilátero, isóceles e escaleno). Senão, retorna ao 
        cliente que o triângulo é inválido."
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;

    printf("\nInsira os lados do triangulo! ");
    printf("\nLado A: ");
    scanf("%d", &a);
    printf("Lado B: ");
    scanf("%d", &b);
    printf("Lado C: ");
    scanf("%d", &c);

    if (((((abs(b - c) < a) && (b + c > a)) && ((abs(a - c) < b) && (a + c > b))) && ((abs(a - b) < c) && (a + b > c)))){
        
        if (((a == b) && (b == c))) {
            printf("eh equilatero\n");
            return 1;
        }

        if (((((a == b) && (b != c)) || ((a == c) && (c != b))) || ((b == c) && (c != a)))) {  
            printf("eh isoceles\n");
            return 1;
        }

        if ((((a != b) && (a != c)) && (b != c))) {
            printf("eh escaleno\n");
            return 1;
        }

    } else {
        printf("Nao eh um triangulo\n");
        return 0;
    }
}