#include <stdio.h>

int main(){
    
    float temp_celcius, temp_fahrenheit;

    printf("Digite a temperatura em Celcius:\n");
    scanf("%f", &temp_celcius);

    temp_fahrenheit = (9 * temp_celcius + 160) / 5;

    printf("\nA temperatura em Fahrenheit é: %.1fºF", temp_fahrenheit);
    
    return 0;
}