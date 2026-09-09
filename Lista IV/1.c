#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int count = 1;
    for (int i = 1; i <= num; i++)
    {
        printf("%d %d %d PUM\n", count, count + 1, count + 2);
        count+=4;
    }

    return 0;
}