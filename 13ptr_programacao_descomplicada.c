#include <stdio.h>
#include <string.h>

char *substring(char p[], char s[]){
    char *aux_principal = p; // aqui o ponteiro aux_principal esta recebendo o endereço para o primeiro caractere de p[]
    char *aux_substring = s; // aqui o ponteiro está recebendo o endereço para o primeiro caractere de s[]
    char *inicio_match; // esse ponteiro serve para registrar quando o primeiro caractere da substring aparece na string principal, ou seja, quando s começa a aparecer em p

    while(*aux_principal != '\0'){ // enquando o vetor de caracteres principal [aux_princpal] for diferente de \0
        if(*aux_principal == *aux_substring){ // se o caractere atual de aux_principal for igual ao caractere atual de s (substring)
            inicio_match = aux_principal; // o inicio_match recebe o endereço do caractere da string principal que é igual ao primeiro caractere da substring

            while(*aux_principal == *aux_substring && *aux_substring != '\0'){
            aux_principal++; // o auxiliar da string principal avança para o próximo endereço
            aux_substring++; // o auxiliar da substring avança para o próximo endereço
            }
            
            if(*aux_substring == '\0'){ // se a substring chegou ao fim...
                return inicio_match; // a subpalvra que aparece em ambas as strings é retornada
            }

            aux_substring = s; // reinicia busca se o ultimo while falhar

        }else{
            aux_principal++; // se não o primeiro caractere da substring não for igual ao caractere atual da string principal, a string principal apenas avança
        }
    }

    return NULL;
}

int main(){
    char principal[] = "abcdabbcd", sub[] = "abb";

    printf("Principal: %s\n Substring: %s\n", principal, sub);

     char *palavra = substring(principal, sub);

    printf("Substring achada: ");
    for(int i = 0; i < strlen(sub); i++){
        putchar(palavra[i]);
    }

    return 0;
}
