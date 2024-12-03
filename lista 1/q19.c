#include <stdio.h>

int main(){

    int num;

    printf("Digite o número:\n");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("O número %d é par", num): printf("O número %d é impar", num);

    return 0;

}