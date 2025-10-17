#include <stdio.h>

int main(){
    int A = 2;
    int *B;
    int **C;
    int ***D;

    printf("Valor de A: %d\n", A);

    B = &A;
    C = &B;
    D = &C;

    printf("Valor de B: %d\n", *B * 2);
    printf("Valor de C: %d\n", **C * 3);
    printf("Valor de D: %d\n", ***D * 4);

    return 0;

}
