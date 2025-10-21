#include <stdio.h>

void ler_notas(float *nota1, float *nota2) {
    
    printf("Digite a primeira nota: \n");
    scanf("%f", nota1);
    
    while(*nota1 < 0.0 || *nota1 > 10.0) {
        printf("Nota invalida! Digite novamente: ");
        scanf("%f", nota1);
    }

    printf("Digite a segunda nota: \n");
    scanf("%f", nota2);
    
    while(*nota2 < 0.0 || *nota2 > 10.0) {
        printf("Nota invalida! Digite novamente: ");
        scanf("%f", nota2);
    }

}

void media(float nota1, float nota2, float *media_simples, float *media_ponderada){
    *media_simples = (nota1 + nota2) / 2;
    *media_ponderada = (nota1 + nota2 * 2) / 3;

}

int main(){
    float nota_um;
    float nota_dois;
    float media_um, media_dois;

    ler_notas(&nota_um, &nota_dois);

    printf("Notas lidas: %.2f e %.2f\n", nota_um, nota_dois);

    media(nota_um, nota_dois, &media_um, &media_dois);

    printf("Media simples: %.2f, Media ponderada: %.2f\n", media_um, media_dois);

    return 0;

}
