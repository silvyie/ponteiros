#include <stdio.h>

int dobro(int *a, int *b){
    *a = *a * 2;
    *b = *b * 2;

    return *a + *b;
}

int main(){
    int numero_a, numero_b, soma;

    printf("digte o primeiro numero\n");
    scanf("%d", &numero_a);
    printf("digite o segundo primeiro\n");
    scanf("%d", &numero_b);

    printf("primeiro numero: %d\n", numero_a);
    printf("segundo numero: %d\n", numero_b);

    soma = dobro(&numero_a, &numero_b);

    printf("primeiro numero: %d\n", numero_a);
    printf("segundo numero: %d\n", numero_b);
    printf("soma dos numeros dobrados: %d\n", soma);


}
