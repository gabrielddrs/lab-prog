#include <stdio.h>

int main() {
    int total_segundos;
    int horas, minutos, segundos;

    printf("Digite o tempo em segundos:\n");
    scanf("%d", &total_segundos);

    horas = total_segundos / 3600;
    minutos = (total_segundos % 3600) / 60;
    segundos = total_segundos % 60;

    printf("%d horas.\n", horas);
    printf("%d minutos.\n", minutos);
    printf("%d segundos.\n", segundos);

    return 0;
}