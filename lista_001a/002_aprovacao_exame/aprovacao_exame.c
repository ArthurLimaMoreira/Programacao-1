#include <stdio.h>
#include <stdlib.h>

int main()
{
float n1,n2,n3, media, nex;

    printf("Insira a nota da primeira prova: ");
    scanf("%f",&n1);
    printf("Insira a nota da segunda prova: ");
    scanf("%f",&n2);
    printf("Insira a nota da terceira prova: ");
    scanf("%f",&n3);

    media = (n1+n2+n3)/3;

 if (media>=0 && media<3){
    printf("Status: Reprovado\n");
 }

 if (media>=3 && media<7){
    printf("Status: Exame\n");
    nex = 12-media;
    printf("Nota para aprovacao no exame: %.2f", nex);
 }

 if (media>=7 && media<10){
    printf("Status: Aprovado\n");
 }
}
