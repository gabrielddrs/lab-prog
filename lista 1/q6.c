#include <stdio.h>

int main(){

    int horas, minutos, segundos, total_segundos;

    printf("Digite a quantidade de horas:\n");
    scanf("%d", &horas);

    printf("Digite a quantidade de minutos:\n");
    scanf("%d", &minutos);

    printf("Digite a quantidade de segundos:\n");
    scanf("%d", &segundos);

    total_segundos = (horas * 3600) + (minutos * 60) + segundos;

    printf("\nO total de segundos é:%ds", total_segundos);

    return 0;

}