#include <stdio.h>

int main(){
    int vetor[5];

    printf("Digite 5 valores: \n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 5; i++){
        if(vetor[i] % 2 == 0){
            printf("valores pares que foram digitados: %d\n", vetor[i]);
            printf("enderecos dos valores digitados que sao pares: %p\n", &vetor[i]);
        }else{
            printf("esse valor era impar: %d\n", vetor[i]);
        }
    }

    return 0;
}
