#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p_fab,perc_d,perc_i,vlr_d,vlr_i,p_final;
    printf("Preco de fabrica: ");
    scanf("%f",&p_fab);
    printf("Lucro distribuidor: ");
    scanf("%f",&perc_d);
    printf("Imposto: ");
    scanf("%f",&perc_i);

    vlr_d = p_fab*perc_d/100;
    vlr_i = p_fab*perc_i/100;
    p_final = p_fab+vlr_d+vlr_i;

    printf("Lucro do distribuidor: %.2f\n", vlr_d);
    printf("Valor do imposto: %.2f\n", vlr_i);
    printf("Valor final: %.2f\n", p_final);
}
