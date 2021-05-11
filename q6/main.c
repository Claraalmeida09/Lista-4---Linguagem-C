/*
Programa: Informar a média salarial de 10 funcionários e quantos recebem acima de 3 mil.
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
    int count;
    float salarioFuncionario, aux;

    aux = 0;
    count = 0;
    for(int i = 0; i < 10; i++)
    {
        printf("Digite seu salário:");
        scanf("%f", &salarioFuncionario);
        aux += salarioFuncionario;
        if(salarioFuncionario > 3000.00)
        {
            count++;
        }
    }
    printf("Média: R$ %.2f \n", aux/10);
    printf("Pessoas com salário acima de 3 mil: %d", count);
    return 0;
}
