#include <stdio.h>
#include <stdlib.h>
int main()
{
     float n1,n2,n3,n4;
printf("Insira o primeiro numero: ");
 scanf("%f",&n1);
printf("Insira o segundo numero: ");
 scanf("%f",&n2);
printf("Insira o terceiro numero: ");
 scanf("%f",&n3);
printf("Insira o quarto numero: ");
 scanf("%f",&n4);
    if(n3<n4)         {
   printf("Ordem decrescente: %.2f", n4);
   printf(", ");
   printf("%.2f", n3);
   printf(", ");
   printf("%.2f", n2);
   printf(", ");
   printf("%.2f", n1);
 }
    if(n2<n4 && n4<n3){
   printf("Ordem decrescente: %.2f", n3);
   printf(", ");
   printf("%.2f", n4);
   printf(", ");
   printf("%.2f", n2);
   printf(", ");
   printf("%.2f", n1);
 }
    if(n1<n4 && n4<n2){
   printf("Ordem decrescente: %.2f", n3);
   printf(", ");
   printf("%.2f", n2);
   printf(", ");
   printf("%.2f", n4);
   printf(", ");
   printf("%.2f", n1);
 }
    if(n4<n1)         {
   printf("Ordem decrescente: %.2f", n3);
   printf(", ");
   printf("%.2f", n2);
   printf(", ");
   printf("%.2f", n1);
   printf(", ");
   printf("%.2f", n4);
 }
                       return(0);
}
