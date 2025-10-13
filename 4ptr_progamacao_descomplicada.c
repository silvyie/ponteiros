#include <stdio.h>

int troca(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

}

int main(){
    int numero_um;
    int numero_dois;

    printf("digite o primeiro numero: \n");
    scanf("%d", &numero_um);
    printf("digite o segundo numero: \n");
    scanf("\n%d", &numero_dois);

    printf("primeiro numero: %d\n", numero_um);
    printf("segundo numero: %d\n", numero_dois);

    if(numero_dois > numero_um){
        troca(&numero_um, &numero_dois);
        printf("primeiro numero trocado: %d\n", numero_um);
        printf("segundo numero trocado: %d\n", numero_dois);
    }else{
        printf("primeiro numero normal: %d\n", numero_um);
        printf("segundo numero normal: %d\n", numero_dois);
    }

    return 0;

}
