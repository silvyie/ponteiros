#include <stdio.h>

void frac(float num, int* inteiro, float* frac){
    *inteiro = (int)num;
    *frac = num - *inteiro;
}

int main(){
    float fracao = 3.09, fracionaria;
    int inteira;

    printf("numero antes: %.2f\n", fracao);

    frac(fracao, &inteira, &fracionaria);

    printf("numero depois (parte fracionaria): %.2f\n", fracionaria);
    printf("numero depois (parte inteira): %d\n", inteira);


    return 0;
}
