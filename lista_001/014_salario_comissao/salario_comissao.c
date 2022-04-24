#include <stdio.h>
#include <stdlib.h>

int main()
{
   float salario,vendas,comissao,salariofinal;

   printf("Valor do salario: ");
   scanf("%f", &salario);
   printf("Valor das vendas: ");
   scanf("%f", &vendas);

   comissao = (vendas*4)/100;
   salariofinal = salario+comissao;

   printf("Valor da comissao: %.2f\n", comissao);
   printf("Valor do salario: %.2f", salariofinal);
}
