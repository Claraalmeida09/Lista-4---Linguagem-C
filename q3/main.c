/*
Programa: Dias de vida.
Data de criação: 13/04/2021.
Autora: Maria Clara Almeida Souza
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
    // comando de regionalização
    setlocale(LC_ALL, "");
    //variáveis
    int anoNascimento, dias = 365;
    //recuperar o ano atual
    SYSTEMTIME str_t;
    GetSystemTime(&str_t);
    int anoAtual = str_t.wYear;

    printf("Qual ano você nasceu:");
    scanf("%d", &anoNascimento);

    if(anoAtual < anoNascimento)
    {
        printf("Data de nascimento inválida");
    }
    else
    {
        int count = 0;
        for(int i = anoNascimento + 1; i <= anoAtual; i++)
        {

            if((i % 4 == 0) && (i % 100 != 0))
            {
                count += dias + 1;
            }
            else count += dias;
        }
        printf("Você viveu: %d dias\n", count);

    }


    return 0;
}
