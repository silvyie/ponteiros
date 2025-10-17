#include <stdio.h>

void funcao(int *vetor, int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("Valores do vetor: %d\n", *(vetor + i));
    }
}

int main(){
    int vet[10];

    printf("Digite 10 numeros: \n");
    for(int i = 0; i < 10; i++){
        scanf("%d", (vet + i));
    }

    funcao(vet, 10);

    return 0;
}
