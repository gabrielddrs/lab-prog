#include <stdio.h>

int main(){

    int hr_aula_mes;
    float valor_hr_aula, percentual_inss, total_desconto, salario_bruto, salario_liquido;

    printf("Digite a quantidade de horas de aula no mês:\n");
    scanf("%d", &hr_aula_mes);

    printf("Digite o valor de uma hora de aula:\n");
    scanf("%f", &valor_hr_aula);

    printf("Digite o percentual de desconto do INSS:\n");
    scanf("%f", &percentual_inss);

    salario_bruto = hr_aula_mes * valor_hr_aula;
    total_desconto = salario_bruto * (percentual_inss / 100);
    salario_liquido = salario_bruto - total_desconto;

    printf("\nO seu salário bruto esse mês foi de: R$%.2f", salario_bruto);
    printf("\nO seu salário liquido esse mês foi de: R$%.2f", salario_liquido);

}