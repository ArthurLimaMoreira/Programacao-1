#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nasc,atual,idadefutura,idadeatual;

    printf("Seu ano de nascimento: ");
    scanf("%d",&nasc);
    printf("Ano atual: ");
    scanf("%d",&atual);

    idadeatual = atual-nasc;
    idadefutura = 2050-nasc;

    printf("Idade atual: %d\n", idadeatual);
    printf("Idade em 2050: %d\n", idadefutura);
}
