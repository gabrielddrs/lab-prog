#include <stdio.h>

int main(){

    int num, unidade, dezena, centena, novo_num;

    printf("Digite o número de 3 digitos abaixo:\n");
    scanf("%d", &num);

    centena = num / 100;
    dezena = (num / 10) % 10;
    unidade = num % 10;

    novo_num = (unidade*100) + (dezena * 10) + centena;

    printf("O número invertido é: %d", novo_num);

}