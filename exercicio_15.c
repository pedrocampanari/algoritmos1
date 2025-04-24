/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 23/04/2025

    Explicação: "Este código utiliza uma biblioteca essencial(stdio), 
        Sendo stdio.h utilizada para coletar e mostrar resultados ao cliente. Ao 
        decorrer do código, foram declaradas as variáveis(num_digitado, status_num, media, x e i). 
        No próximo passo, é utilizado as funções(printf e scanf) para coleta dos numeros. Tendo em
        vista o uso de um loop para inserção de vários números, a variável de controle é o status_num,
        pois ele recebe o retorno da função scanf, se o valor inserido não for inteiro, quebra o loop e
        retorna o resultado da média. 
        
        A cada loop é contado +1 na variável i, que será utilizado para contar o número de elementos 
        envolvidos, assim sendo possível produzir a média a partir da somatória de todos os números 
        na variável x e dividido por i. Em seguida, retorna os meses ao usuário. "
*/


#include <stdio.h>

int main () {
    int num_digitado, status_num, media, x = 0, i = 0;

    printf(" Digite alguns numeros.\n");
    do {
        printf(" Num%d: ", i+1);
        status_num = scanf("%d", &num_digitado);

        if(status_num){
            x = num_digitado + x;
            i++;
        }
    
    } while (status_num);

    media = x/i;
    printf(" Resultado da media é %d\n", media);

    return 1;
}