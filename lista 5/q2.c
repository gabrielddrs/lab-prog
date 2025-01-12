#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2, temp;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    printf("\nAntes da troca:\n");
    printf("Número 1: %d\n", *ptr1);
    printf("Número 2: %d\n", *ptr2);

    temp = *ptr1;  
    *ptr1 = *ptr2; 
    *ptr2 = temp;  

    printf("\nApós a troca:\n");
    printf("Número 1: %d\n", *ptr1);
    printf("Número 2: %d\n", *ptr2);

    return 0;
}
