#include <stdio.h>

int main(){

    int x, y;

    printf("Digite o primeiro número:\n");
    scanf("%d", &x);

    printf("Digite o segundo número:\n");
    scanf("%d", &y);

    printf("\nA soma entre os números é: %d", x+y);
    printf("\nO produto entre os números é: %d", x*y);
    printf("\nA diferença entre os números é: %d", x-y);
    printf("\nO quociente entre os números é: %d", x/y);
    printf("\nO resto entre os números é: %d", x%y);

    return 0;
}