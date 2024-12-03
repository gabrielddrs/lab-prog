#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2;
    float distancia;

    printf("Digite as coordenadas do primeiro ponto x1:\n");
    scanf("%f", &x1);

    printf("Digite as coordenadas do primeiro ponto y1:\n");
    scanf("%f", &y1);

    printf("Digite as coordenadas do segundo ponto x2:\n");
    scanf("%f", &x2);

    printf("Digite as coordenadas do segundo ponto y2:\n");
    scanf("%f", &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distância entre os pontos é: %.2f\n", distancia);

    return 0;
}