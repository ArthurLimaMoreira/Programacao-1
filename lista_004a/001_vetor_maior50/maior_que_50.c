#include <stdio.h>
#include <stdlib.h>

int main()
{
int n[10],i,qte=0;
    for(i=0;i<10;i++){
        printf("Digite um numero: ");
        scanf("%d",&n[i]);
    }
            for(i=0;i<10;i++){
                if(n[i]>50){
                    printf("\nA posicao %d vale %d", i+1, n[i]);
                    qte++;
                }
            }
            if(qte!=1)
                printf("\nO vetor possui %d posicoes maiores que 50", qte);
                else
                    printf("\nO vetor possui apenas 1 posicao maior que 50");
return 0;
}
