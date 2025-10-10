#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int numero_inteiro = 10;
    float numero_real = 11.1;
    char caractere = 's';

    int *ptr_inteiro;
    float *ptr_real;
    char *ptr_caractere;

    ptr_inteiro = &numero_inteiro;
    ptr_real = &numero_real;
    ptr_caractere = &caractere;

    printf("numero inteiro: %d\n", numero_inteiro);
    printf("numero real: %.2f\n", numero_real);
    printf("caractere char: %c\n", caractere);
    printf("====== valores antes de modificar ======\n");
    printf("numero inteiro: %d\n", *ptr_inteiro);
    printf("numero real: %.2f\n", *ptr_real);
    printf("caractere char: %c\n", *ptr_caractere);
    printf("====== endereco do ponteiro ======\n");
    printf("numero inteiro: %p\n", ptr_inteiro);
    printf("numero real: %p\n", ptr_real);
    printf("caractere char: %p\n", ptr_caractere);
    printf("====== endereco da variavel ======\n");
    printf("numero inteiro: %p\n", &numero_inteiro);
    printf("numero real: %p\n", &numero_real);
    printf("caractere char: %p\n", caractere);

    *ptr_inteiro = 12;
    *ptr_real = 9.9;
    *ptr_caractere = 'A';

    printf("====== valores depois de modificar utilizando ponteiro ======\n");
    printf("numero inteiro: %d\n", *ptr_inteiro);
    printf("numero real: %.2f\n", *ptr_real);
    printf("caractere char: %c\n", *ptr_caractere);

}
