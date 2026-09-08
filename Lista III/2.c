#include <stdio.h>

int main() {

    int positivos  = 0;

    for(int i = 0; i < 6; i++){
        float num;
        scanf("%f", &num);
        if(num > 0){
            positivos++;
        }
    }

    printf("%d valores positivos\n", positivos);

    return 0;
}