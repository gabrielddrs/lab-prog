#include <stdio.h>

int main(){
    
    float altura, peso_ideal;
    int sexo;

    printf("Digite sua altura:\n");
    scanf("%f", &altura);

    printf("Digite qual seu sexo{1 - Masculino; 2 - Feminino}\n");
    scanf("%d", &sexo);

    if(sexo == 1){
        peso_ideal = 72.7 * altura - 58;

        printf("O seu peso ideal é: %.2fkg", peso_ideal);
    }

    else if(sexo == 2){
        peso_ideal = 62.1 * altura - 44.7;

        printf("O seu peso ideal é: %.2fkg", peso_ideal);
    }
    
    else{
        printf("O Sexo que você inseriu é inválido, tente novamente");
    }

    return 0;
}