#include <stdio.h>

int main(){
    
    float valor_em_real, cotacao_dolar, valor_em_dolar;

    printf("Digite o valor em Real(R$):\n");
    scanf("%f", &valor_em_real);

    printf("Digite o valor da cotação atual do Dólar:\n");
    scanf("%f", &cotacao_dolar);

    valor_em_dolar = valor_em_real / cotacao_dolar;

    printf("O valor em Dólar será de: $%.2f", valor_em_dolar) ;   

    return 0;
}