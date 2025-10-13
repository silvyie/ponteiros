#include <stdio.h>

void soma(int *a, int *b){
    *a = *a + *b;
}

int main(){
    int numero_a, numero_b;

    printf("digte o primeiro numero\n");
    scanf("%d", &numero_a);
    printf("digite o segundo primeiro\n");
    scanf("%d", &numero_b);

    printf("primeiro numero: %d\n", numero_a);
    printf("segundo numero: %d\n", numero_b);

    soma(&numero_a, &numero_b);

    printf("primeiro numero: %d\n", numero_a);
    printf("segundo numero: %d\n", numero_b);

}
