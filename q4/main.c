/*
Programa: Informar o maior n�mero.
Data de cria��o: 14/04/2021.
Autora: Maria Clara Almeida Souza
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // comando de regionaliza��o
    setlocale(LC_ALL, "");
    // declara��o de vari�veis
    int number;
    //vari�vel auxiliar
    int aux = 0;

    for(int i = 0; i < 10; i++)
    {
        printf("Digite um n�mero: ");
        scanf("%d", &number);
        if(number > aux) {
            aux = number;
        }

    }
    printf("o maior valor �: %d", aux);

    return 0;
}
