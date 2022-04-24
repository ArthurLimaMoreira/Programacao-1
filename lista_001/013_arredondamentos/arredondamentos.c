#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n,inteiro,frac, arredond;

    printf("Digite o numero: ");
    scanf("%f",&n);
    inteiro = floor(n);
    printf("Inteiro: %.2f\n", inteiro);
    frac = n-inteiro;
    printf("Decimal: %.2f\n", frac);
    arredond = round(n);
    printf("Arredondamento: %.2f", arredond);

    return 0;
}
