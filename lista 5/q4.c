#include <stdio.h>

int main() {
    int i, n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int intVetor[n];
    float floatVetor[n];
    char charVetor[n];

    printf("\nDigite os valores para o vetor de inteiros:\n");
    for(i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &intVetor[i]);
    }

    printf("\nDigite os valores para o vetor de ponto flutuante:\n");
    for(i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &floatVetor[i]);
    }

    printf("\nDigite os valores para o vetor de caracteres:\n");
    for(i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf(" %c", &charVetor[i]);  
    }

    printf("\nValores e endereços do vetor de inteiros:\n");
    for(i = 0; i < n; i++) {
        printf("Valor: %d, Endereço: %p\n", intVetor[i], (void*)&intVetor[i]);
    }

    printf("\nValores e endereços do vetor de ponto flutuante:\n");
    for(i = 0; i < n; i++) {
        printf("Valor: %.2f, Endereço: %p\n", floatVetor[i], (void*)&floatVetor[i]);
    }

    printf("\nValores e endereços do vetor de caracteres:\n");
    for(i = 0; i < n; i++) {
        printf("Valor: %c, Endereço: %p\n", charVetor[i], (void*)&charVetor[i]);
    }

    return 0;
}