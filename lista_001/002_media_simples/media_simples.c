#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,media;
    printf("Digite o primeira nota: ");
    scanf("%f",&n1);
    printf("Digite o segunda nota: ");
    scanf("%f",&n2);
    printf("Digite o terceira nota: ");
    scanf("%f",&n3);

    media = (n1+n2+n3)/3;

    printf("Media final: %.2f", media);
}
