/*
Programa: Valor referente aos dias hospedado.
Data de cria��o: 14/04/2021.
Autora: Maria Clara Almeida Souza
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    // comando de regionaliza��o
    setlocale(LC_ALL, "");
    // declara��o de vari�veis
    int dias;
    float total;

    printf("Quantos dias ficou hospedado: ");
    scanf("%d", &dias);
    total = 0;

    if(dias == "interger") {
        for(int i = 1; i <= dias; i++)
    {
        if(i <= 5)
        {
            total += 80;
        }
        else if (i > 5 && i <=10)
        {
            total += 60;
        }
        else total += 50;
    }
    printf("Total: R$ %.2f", total);
    } else printf("Digite um valor v�lido");

}
