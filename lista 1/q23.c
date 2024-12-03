#include <stdio.h>

int main() {

    int x, n, resultado, potencia_de_dois;

    printf("Digite o valor de x:\n");
    scanf("%d", &x);
    
    printf("Digite o valor de n:\n");
    scanf("%d", &n);

    potencia_de_dois = 1 << n;

    resultado = x * potencia_de_dois;

    printf("O resultado de %d multiplicado por 2 elevado a %d é: %d\n", x, n, resultado);

    return 0;

}