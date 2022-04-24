#include <stdio.h>
#include <stdlib.h>

int main()
{
 int nasc, atual, anos, meses, semanas, dias;

 printf("Ano do nascimento: ");
 scanf("%d", &nasc);
 printf("Ano atual: ");
 scanf("%d", &atual);

 anos = atual-nasc;
 meses = anos*12;
 semanas = anos*52;
 dias = anos*365;

 printf("Idade em anos: %d\n", anos);
 printf("Idade em meses: %d\n", meses);
 printf("Idade em semanas: %d\n", semanas);
 printf("Idade em dias: %d\n", dias);

}
