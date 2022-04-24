#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saldo,deposito,cheque1,cheque2,saque1,saque2;

    printf("Valor do deposito: ");
    scanf("%f",&deposito);

    printf("Valor do cheque 1:");
    scanf("%f",&cheque1);
    saque1 = cheque1+(cheque1*38/1000);

    printf("Valor do cheque 2:");
    scanf("%f",&cheque2);
    saque2 = cheque2+(cheque2*38/1000);

    saldo = deposito-saque1-saque2;

    printf("Saldo final: %.2f", saldo);

}
