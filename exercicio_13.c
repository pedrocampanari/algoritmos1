/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 23/04/2025

    Explicação: "Este código utiliza uma biblioteca essencial(stdio), 
        Sendo stdio.h utilizada para coletar e mostrar resultados ao cliente. Ao 
        decorrer do código, foram declaradas as variáveis(dia, mes e ano, meses, ano_atual 
        e mes_atual). No próximo passo, é utilizado as funções(printf e scanf) para 
        coleta do dia, mes e ano. Após, é atribuído o mês e o ano atual. Posteriormente, é 
        feito um cálculo, (ano_atual - ano) * 12 + (mes_atual - mes), que irá retornar quantidade
        de meses genéricos, para depois analisar se você já fez aniversário ou não. Se não, subtrai
        12 meses. Em seguida, retorna os meses ao usuário. "
*/


#include <stdio.h>

int main(){
    int dia, mes, ano;
    int meses;

    int mes_atual = 4;
    int ano_atual = 2025;

    printf("Informe sua data de nascimento (DD MM AAAA): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    meses = (ano_atual - ano) * 12 + (mes_atual - mes);

    if (mes > mes_atual) {
        meses -= 12;
    }

    printf("Sua idade em meses eh %d meses\n\n", meses);
    return 1;
}