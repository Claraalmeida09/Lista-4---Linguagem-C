/*
Programa: Exibir os número ímpares.
Data de criação: 13/04/2021.
Autora: Maria Clara Almeida Souza
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    // comando de regionalização
    setlocale(LC_ALL, "");
    int number;

    printf("Digite um número: ");
    scanf("%d", &number);

    for(int i = 0; i <= number; i++)
    {
        if (i%2==1)
            printf("%d\n",i);
    }
    return 0;
}
