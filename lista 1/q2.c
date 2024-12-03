#include <stdio.h>

int main(){
    float num;
    
    printf("Digite um número do tipo float:\n");
    scanf("%f", &num);

    printf("E o seu número com 1 ponto flutuante é: %.1f", num);

    return 0;
}