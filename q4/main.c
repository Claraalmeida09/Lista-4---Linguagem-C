/*
Programa: Informar o maior número.
Data de criação: 14/04/2021.
Autora: Maria Clara Almeida Souza
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // comando de regionalização
    setlocale(LC_ALL, "");
    // declaração de variáveis
    int number;
    //variável auxiliar
    int aux = 0;

    for(int i = 0; i < 10; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &number);
        if(number > aux) {
            aux = number;
        }

    }
    printf("o maior valor é: %d", aux);

    return 0;
}
