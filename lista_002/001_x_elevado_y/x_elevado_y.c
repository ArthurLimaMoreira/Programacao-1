#include <stdio.h>
#include <stdlib.h>

/*
Fa�a um programa que, daods dois n�meros, calcule a pot�ncia do primeiro valor
elevado ao segundo valor.
*/

int main()
{
float base, exp, res, i;
    printf("Digite o valor da base: ");
        scanf("%f", &base);
    printf("Digite o valor do expoente: ");
        scanf("%f", &exp);
res = 1;
    for(i=0;i<exp;i++){
            res = base*res;
            }
    printf("Resultado: %.2f", res);
return 0;
}
