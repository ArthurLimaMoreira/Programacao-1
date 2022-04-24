#include <stdio.h>
#include <stdlib.h>

int main()
{
   float pe,pol,jarda,mile;

   printf("Medida em pes:  ");
   scanf("%f",&pe);

   pol = pe/12;
   jarda = 3*pe;
   mile = 5280*pe;

   printf("Medida em polegadas: %.2f\n", pol);
   printf("Medida em jardas: %.2f\n", jarda);
   printf("Medida em milhas: %.2f", mile);

}
