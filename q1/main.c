/*
Programa: Exibir os n�mero �mpares.
Data de cria��o: 13/04/2021.
Autora: Maria Clara Almeida Souza
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    // comando de regionaliza��o
    setlocale(LC_ALL, "");
    int number;

    printf("Digite um n�mero: ");
    scanf("%d", &number);

    for(int i = 0; i <= number; i++)
    {
        if (i%2==1)
            printf("%d\n",i);
    }
    return 0;
}
