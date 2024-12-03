#include <stdio.h>

int main(){

    int dias_trabalhados;
    const float valor_diario = 50.25;
    float valor_liquido;

    printf("Digite a quantidade de dias trabalhados:\n");
    scanf("%d", &dias_trabalhados);

    if (dias_trabalhados <= 10)
    {
        valor_liquido = (valor_diario * dias_trabalhados) * 0.9;
        printf("O valor liquido para receber é de: R$%.2f", valor_liquido);

    }

    else if (dias_trabalhados <= 20)
    {
        valor_liquido = ((valor_diario * dias_trabalhados)*1.2) * 0.9;
        printf("O valor liquido para receber é de: R$%.2f", valor_liquido);

    }

   else 
    { 
        valor_liquido = ((valor_diario * dias_trabalhados)*1.3) * 0.9;
        printf("O valor liquido para receber é de: R$%.2f", valor_liquido);
    }

}