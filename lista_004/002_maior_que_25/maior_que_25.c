#include <stdio.h>
#include <stdlib.h>

int main()
{
int m[10],i,qte_m=0;
    for(i=0;i<10;i++){
        printf("Escreva n: ");
        scanf("%d",&m[i]);
            if(m[i]>25){
                qte_m++;
                printf("\nPosicao %d", i);
            }
    }
    printf("Quantidade: %d\n", qte_m);
return 0;
}
