#include <stdio.h>

int main()
{
    int maior_num;
    int posicao;

    for(int i = 1; i <= 100; i++)
    {
        int num;
        scanf("%d", &num);

        if(num > maior_num)
        {
            maior_num = num;
            posicao = i;
        }
    }

    printf("%d\n%d\n", maior_num, posicao);

    return 0;
}