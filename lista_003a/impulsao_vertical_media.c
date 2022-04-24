#include <stdio.h>
#include <stdlib.h>

int main()
{
float tempo1,tempo2,altura1,altura2,salto1,salto2;
float s[2]={(salto1,salto2)};
int i;

    for(i=1;i<=100;i++){
        printf("t1: ");
            scanf("%f",&tempo1);
        printf("t2: ");
            scanf("%f",&tempo2);
    salto1=altura1=tempo1*(9.8/4);
    salto2=altura2=tempo2*(9.8/4);
            printf("Numero da cobaia: %d",i);
            printf("\nResultados: %.2f;", s[0]);
                        printf("%.2f", s[2]);
    printf("\n");
    }
return 0;
}
