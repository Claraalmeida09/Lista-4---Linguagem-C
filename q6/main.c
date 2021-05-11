/*
Programa: Informar a m�dia salarial de 10 funcion�rios e quantos recebem acima de 3 mil.
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
    int count;
    float salarioFuncionario, aux;

    aux = 0;
    count = 0;
    for(int i = 0; i < 10; i++)
    {
        printf("Digite seu sal�rio:");
        scanf("%f", &salarioFuncionario);
        aux += salarioFuncionario;
        if(salarioFuncionario > 3000.00)
        {
            count++;
        }
    }
    printf("M�dia: R$ %.2f \n", aux/10);
    printf("Pessoas com sal�rio acima de 3 mil: %d", count);
    return 0;
}
