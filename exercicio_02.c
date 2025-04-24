/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 23/04/2025

    Explicação: "Este código utiliza uma biblioteca essencial(stdio), 
        Sendo stdio.h utilizada para coletar e mostrar resultados ao cliente. Ao 
        decorrer do código, foram declaradas as variáveis(altura, genero). No próximo passo, 
        é utilizado as funções(printf e scanf) para coleta da altura(cm) e a escolha do cliente
        referente ao menu de gênero. Após, é verificado o gênero. Com isso, testa se a pessoa é
        maior que a média nacional ou não, retornando os respectivos resultados. OBS: se a opção
        de gênero for inválida, encerrará o programa.
*/


#include <stdio.h>
int main() {
    int altura, genero;
    printf("Informe sua altura(cm): ");
    scanf("%d", &altura);
    printf("Escolha a opção referente ao seu genero. \n1 - Masculino\n2 - Feminino\nDigite aqui ... ");
    scanf("%d", &genero);

    if (genero == 1) {
        if (altura > 175) {
            printf("\nA sua altura eh %d, entao voce esta acima da media nacional de 175cm\n", altura);
        }
        else{
            printf("\nA sua altura eh %d, entao voce nao esta acima da media nacional de 175cm\n", altura);
        }
    }
    else if (genero == 2) {
        if (altura > 162) {
            printf("\nA sua altura eh %d, entao voce esta acima da media nacional de 162cm\n", altura);
        }
        else {
            printf("\nA sua altura eh %d, entao voce nao esta acima da media nacional de 162cm\n", altura);
        }
    }else {
        printf("Opção inválida. Execute o programa novamente!\n\n");
        return 0;
    }
     
    return 1;
}