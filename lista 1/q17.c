#include <stdio.h>

int main(){

    float raio;
    const float pi = 3.14159;

    printf("Digite o raio do círculo:\n");
    scanf("%f", &raio);

    printf("\nDiâmetro: %f\n", 2 * raio);
    printf("\nCircunferência: %f\n", 2 * pi * raio);
    printf("\nÁrea: %f\n", pi * raio * raio);

    return 0;
}