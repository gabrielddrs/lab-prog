#include <stdio.h>

int main() {
    int num1, num2, soma;
    int *ptr1, *ptr2, *ptrSoma;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;
    ptrSoma = &soma;

    *ptrSoma = *ptr1 + *ptr2;

    printf("A soma é: %d\n", *ptrSoma);
    printf("O endereço de memória da soma é: %p\n", (void*)ptrSoma);

    return 0;
}
