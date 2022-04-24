#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario,horas,horasval,extras, extrasval,bruto,bonus,total;

    printf("salario: ");
    scanf("%f",&salario);
    printf("horas: ");
    scanf("%f",&horas);
    printf("extras: ");
    scanf("%f",&extras);

    horasval = salario/8;
    extrasval =salario/4;
    bruto = horas*horasval;
    bonus = extrasval*extras;

    total = bruto + bonus;

    printf("Salario total: %.2f", total);
}
