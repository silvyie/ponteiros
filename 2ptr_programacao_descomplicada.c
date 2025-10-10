#include <stdio.h>

int main(){
    int numero_um, numero_dois;

    printf("digite o primeiro numero: \n");
    scanf("%d", &numero_um);
    printf("digite o numero dis: \n");
    scanf("\n%d", &numero_dois);

    int *ptr_um = &numero_um;
    int *ptr_dois = &numero_dois;

    printf("endereco do primeiro ponteiro: %p\n", ptr_um);
    printf("endereco do segundo ponteiro: %p\n", ptr_dois);

    if(ptr_um > ptr_dois){
        printf("endereco do primeiro numero eh maior: %p\n", ptr_um);
    }else{
        printf("endereco do segundo numero eh maior: %p\n", ptr_dois);
    }
    
}
