#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float numero, quadrado, cubo, raiz,raizcubica;

    printf("Digite o numero: ");
    scanf("%f",&numero);
    quadrado = (pow(numero, 2));
    cubo = (pow(numero, 3));
    raiz =(sqrt(numero));
    raizcubica = (cbrt(numero));

    if(numero>0) {
        printf("Quadrado: %.2f\n", quadrado);
        printf("Cubo: %.2f\n", cubo);
        printf("Raiz quadrada: %.2f\n", raiz);
        printf("Raiz cubica: %.2f", raizcubica);

            }
}
