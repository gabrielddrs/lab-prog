#include <stdio.h>

int main() {
    int x;

    printf("Entre com o valor:\n");
    scanf("%d", &x);

    printf("\nO valor em hexadecimal é: %X\n", x); 
    printf("\nO valor em octal é: %o\n", x);

    return 0;
}