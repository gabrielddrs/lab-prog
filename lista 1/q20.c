#include <stdio.h>

int main(){

    int num1, num2;

    printf("Digite o primeiro número:\n");
    scanf("%d", &num1);

    printf("Digite o segundo número:\n");
    scanf("%d", &num2);

    (num1 % num2 == 0) ? printf("O primeiro é múltiplo do segundo"): printf("O primeiro não é múltiplo do segundo");

}