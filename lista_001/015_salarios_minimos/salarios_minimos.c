#include <stdio.h>
#include <stdlib.h>

int main()
{
 float salario, salmin,qte;

 printf("Valor do salario minimo: ");
 scanf("%f", &salmin);
 printf("Valor do salario: ");
 scanf("%f", &salario);

 qte = salario/salmin;

 printf("Quantidade de salarios: %.2f",qte);
}
