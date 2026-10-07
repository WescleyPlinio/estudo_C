#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Definições
    float matriz[12][12];
    int coluna_matriz;
    char operacao;

    // Scans
    scanf(" %d", &coluna_matriz);
    scanf(" %c", &operacao);

    // Verificações
    if (coluna_matriz < 0 || coluna_matriz > 11)
    {
        exit(1);
    }
    else if (operacao != 'S' && operacao != 'M')
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

    float resultado = 0;

    if (operacao == 'S')
    {
        for (int i = 0; i < 12; i++)
        {
            resultado += matriz[i][coluna_matriz];
        }
    }
    else
    {
        for (int i = 0; i < 12; i++)
        {
            resultado += matriz[i][coluna_matriz];
        }
        resultado = resultado / 12;
    }

    printf("%.1f\n", resultado);

    return 0;
}