#include <stdio.h>

int main(){

    float valor_inicial, valor_final;

    printf("Digite o valor da conta:\n");
    scanf("%f", &valor_inicial);

    valor_final = valor_inicial * 1.10;

    printf("O valor final à ser pago é de: R$ %.2f", valor_final);

    return 0;
};