#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dep,taxa,rendim,total;
    printf("Deposito: ");
    scanf("%f", &dep);
    printf("Taxa: ");
    scanf("%f", &taxa);

    rendim = dep*taxa/100;
    total = dep+rendim;

    printf("Rendimento: %.2f\n", rendim);
    printf("Valor total: %.2f",total);
}
