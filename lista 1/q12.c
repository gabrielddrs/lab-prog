#include <stdio.h>

int main(){

    int A, B, temp;

    printf("Digite o valor de A:\n");
    scanf("%d", &A);

    printf("Digite o valor de B:\n");
    scanf("%d", &B);

    temp = A;
    A = B;
    B = temp;

    printf("\nO valor de A agora é: %d", A);
    printf("\nO valor de B agora é: %d", B);

    return 0;
}