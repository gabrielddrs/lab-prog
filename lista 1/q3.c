#include <stdio.h>

int main(){
    
    int x;

    printf("Digite um número inteiro:\n");
    scanf("%d", &x);

    printf("\nO triplo: %d", x*3);
    printf("\nO quadrado: %d", x*x);
    printf("\nA metade: %d", x/2);
    
    return 0;
}