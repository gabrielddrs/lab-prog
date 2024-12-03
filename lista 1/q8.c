#include <stdio.h>

int main(){

    int num;

    printf("Digite um valor inteiro:\n");
    scanf("%d", &num);

    printf("\nO antecessor é: %d", num-1);
    printf("\nO sucessor é: %d", num+1);

    return 0;
};