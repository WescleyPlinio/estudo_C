#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Definições
    float matriz[12][12];
    char operacao;
    float resultado = 0;
    int elementos = 0;


    // Scans
    scanf(" %c", &operacao);

    // Verificações
    if (operacao != 'S' && operacao != 'M')
    {
        exit(1);
    }

    // Atribuição de valores da matriz

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &matriz[i][j]);
        }
    }

    if (operacao == 'S')
    {
        for (int i = 0; i < 12; i++)
        {
            for (int j = 0; j < 12; j++)
            {
                if (j > i)
                {
                    resultado += matriz[i][j];
                }
                
            }
        }
    }
    else
    {
        for (int i = 0; i < 12; i++)
        {
            for (int j = 0; j < 12; j++)
            {
                if (j > i)
                {
                    resultado += matriz[i][j];
                    elementos += 1;
                }
                
            }
        }

        resultado = resultado / elementos;
    }

    printf("%.1f\n", resultado);

    return 0;
}