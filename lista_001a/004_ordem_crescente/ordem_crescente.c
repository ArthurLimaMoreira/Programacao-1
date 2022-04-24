#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3;

    printf("Insira o primeiro numero: ");
    scanf("%f",&n1);
    printf("Insira o segundo numero: ");
    scanf("%f",&n2);
    printf("Insira o terceiro numero: ");
    scanf("%f",&n3);

 if(n1<n2 && n1<n3){
   printf("Ordem crescente: %.2f", n1);
   printf(", ");
    if(n2<n3){
      printf("%.2f", n2);
      printf(", ");
      printf("%.2f", n3);
       } else {
             printf("%.2f", n3);
             printf(", ");
             printf("%.2f", n2);
         }
 }
 if(n2<n1 && n2<n3){
   printf("Ordem crescente: %.2f", n2);
   printf(", ");
    if(n1<n3){
      printf("%.2f", n1);
      printf(", ");
      printf("%.2f", n3);
       } else {
             printf("%.2f", n3);
             printf(", ");
             printf("%.2f", n1);
         }
 }
 if(n3<n2 && n3<n1){
   printf("Ordem crescente: %.2f", n3);
   printf(", ");
    if(n2<n1){
      printf("%.2f", n2);
      printf(", ");
      printf("%.2f", n1);
       } else {
             printf("%.2f", n1);
             printf(", ");
             printf("%.2f", n2);
         }
 }
}
