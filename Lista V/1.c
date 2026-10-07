#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Definições
    float matriz[12][12];
    int linha_matriz;
    char operacao;

    // Scans
    scanf(" %d", &linha_matriz);
    scanf(" %c", &operacao);

    // Verificações
    if (linha_matriz < 0 || linha_matriz > 11)
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
        for (int j = 0; j < 12; j++)
        {
            resultado += matriz[linha_matriz][j];
        }
    }
    else
    {
        for (int j = 0; j < 12; j++)
        {
            resultado += matriz[linha_matriz][j];
        }
        resultado = resultado / 12;
    }

    printf("%.1f\n", resultado);

    return 0;
}