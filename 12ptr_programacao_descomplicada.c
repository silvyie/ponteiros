#include <stdio.h>

int ordenado(int *a, int *b, int *c){
    int temp;

    if(*a > *b){
        temp = *a;
        *a = *b;
        *b = temp;    
    }
    
    if(*b > *c){
        temp = *b;
        *b = *c;
        *c = temp;
    }

    if(*a > *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if(*a == *b && *b == *c){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int valor_um = 50, valor_dois = 10, valor_tres = 5;

    printf("Valor A: %d\n B: %d\n C: %d\n", valor_um, valor_dois, valor_tres);

    ordenado(&valor_um, &valor_dois, &valor_tres);

    printf("Valor A: %d\n B: %d\n C: %d\n", valor_um, valor_dois, valor_tres);

    return 0;

}
