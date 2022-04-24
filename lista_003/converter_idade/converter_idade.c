#include <stdio.h>
#include <stdlib.h>

/*
Faca um programa que o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
        a. A idade desta pessoa em anos;
        b. A idade desta pessoa em meses;
        c. A idade desta pessoas em dias;
*/
int main()
{
int nasc,atual,a,m,d;
        printf("Insira o ano atual: ");
            scanf("%d", &atual);
        printf("Insira seu ano de nascimento: ");
            scanf("%d", &nasc);
    a=atual-nasc;  //Idade em anos
    m=a*12;        //Idade em meses
    d=a*365;       //Idade em dias
        printf("Idade em anos: %d\n", a);
        printf("Idade em meses: %d\n", m);
        printf("Idade em dias: %d\n", d);
return 0;
}
