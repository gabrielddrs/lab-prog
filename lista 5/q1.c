#include <stdio.h>

int main(){
    int x, y, r;

    int *px, *py, *pr;

    px = &x; 
    py = &y;
    pr = &r;

    puts("Digite o primeiro valor: ");
    scanf("%d",px);

    puts("Digite o segundo valor: ");
    scanf("%d",py);


    *pr = *px + *py;

    printf("[%p] %d + [%p] %d = [%p] %d\n\n",px, *px, py, *py, pr, *pr );


    return 0;
}