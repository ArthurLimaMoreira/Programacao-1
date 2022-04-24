#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salmin,kw,kwval,kwtotal, kwtotaldesc;
    printf("Digite o salário minimo: ");
    scanf("%f", &salmin);
    printf("kW consumidos: ");
    scanf("%f", &kw);

    kwval = salmin/5;
    kwtotal = kwval*kw;
    kwtotaldesc = kwtotal*0.15;

    printf("Valor de cada kW: %.2f\n", kwval);
    printf("Valor da conta: %.2f\n", kwtotal);
    printf("Valor de conta com desconto de 15/100: %.2f\n", kwtotaldesc);

}
