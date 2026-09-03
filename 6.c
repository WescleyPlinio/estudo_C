#include <stdio.h>

int main()
{

    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);

    int soma = 0;

    for (b = b + 1 ; b < a; b++)
    {
        if (b % 2 != 0)
        {
            soma = soma + b;
        }
    }

    printf("%d\n", soma);

    return 0;
}