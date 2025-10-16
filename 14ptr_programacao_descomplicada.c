#include <stdio.h>

void preencher(int *vetor, int tamanho, int elementos){
    for(int i = 0; i < tamanho; i++){
        *(vetor + i) = elementos;
    }
}

int main(){
    int vetor[10];
    preencher(vetor, 10, 5);

    for(int i = 0; i < 10; i++){
        printf("vetor: %d\n", *(vetor + i));
    }

    return 0;
}
