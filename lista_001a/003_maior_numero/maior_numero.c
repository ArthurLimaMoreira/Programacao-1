#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2;

    printf("Insira o primeiro numero: ");
    scanf("%f",&n1);
    printf("Insira o segundo numero: ");
    scanf("%f",&n2);

    if (n1>n2){
        printf("Maior numero: %.2f", n1);
 }
    else {
        printf("Maior numero: %.2f", n2);
 }

}
