#include <stdio.h>

int main(){

    int num;

    printf("Digite o número:\n");
    scanf("%d", &num);

    (num < 0) ? printf("O módulo do número é: %d", num * (-1)): printf("O módulo do número é: %d", num);

    return 0;

}