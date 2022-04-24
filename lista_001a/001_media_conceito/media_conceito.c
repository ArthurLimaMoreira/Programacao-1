#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3, p1,p2,p3, media;
    p1 = 2;
    p2 = 3;
    p3 = 5;

    printf("Insira a nota de laboratorio:");
    scanf("%f",&n1);
    printf("Insira a nota semestral:");
    scanf("%f",&n2);
    printf("Insira a nota do exame final:");
    scanf("%f",&n3);

    media = ((n1*p1)+(n2*p2)+(n3*p3))/10;

 if(media>=8 && media<=10){
        printf("Conceito: A");
    }
 if(media>=7 && media<8){
        printf("Conceito: B");
    }
 if(media>=6 && media<7){
        printf("Conceito: C");
    }
 if(media>=5 && media<6){
        printf("Conceito: D");
    }
 if(media>=0 && media<5){
        printf("Conceito: E");
    }
}
