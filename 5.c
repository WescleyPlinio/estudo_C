#include <stdio.h>

int main (){

    int x;

    scanf("%d", &x);

    if(x >= 1 && x <= 1000 ){
        for(int i = 0; i <= x; i++){
            if(i % 2 != 0) {
                printf("%d\n", i);
            }
        }
    } else {
        printf("Digite um valor válido!");
    }

    return 0;
}