/*
Programa: Parcelas.
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
    float preco;
    int parcelas;
    float valorASerPago;


    printf("Digite o pre�o do produto: ");
    scanf("%f", &preco);
    printf("Digite quantas parcelas deseja pagar: ");
    scanf("%d", &parcelas);

    valorASerPago = (preco/parcelas);

    for(int i = 1; i <= parcelas; i++)
    {
        printf("Parcela %d - R$ %.2f \n", i, valorASerPago);
        valorASerPago += (preco/parcelas)*0.02;
    }
    return 0;
}
