#include <stdio.h>

int main() {

    int positivos  = 0;
    double soma = 0;

    for(int i = 0; i < 6; i++){
        float num;
        scanf("%f", &num);
        if(num > 0){
            positivos++;
            soma = soma + num;
        }
    }

    double media = soma / positivos; 

    printf("%d valores positivos\n", positivos);
    printf("%.1lf\n", media);

    return 0;
}