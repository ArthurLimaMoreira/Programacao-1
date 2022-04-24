#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal,salreceber,grat,imp;
    printf("Escreva salario: R$");
    scanf("%f",&sal);

    grat = sal*5/100;
    imp = sal*7/100;
    salreceber = sal+grat-imp;

    printf("Salario a receber: %.2f", salreceber);

}
