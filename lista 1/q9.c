#include <stdio.h>

int main(){
    float volume, comprimento, largura, altura;

    printf("Digite o comprimento do retângulo:\n");
    scanf("%f", &comprimento);

    printf("Digite o largura do retângulo:\n");
    scanf("%f", &largura);

    printf("Digite o altura do retângulo:\n");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    printf("O volume do retângulo é: %.2f", volume);

    return 0;
}