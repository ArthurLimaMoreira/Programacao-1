#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL,"portuguese");
int v[9],i,j,aux=0;
    for(i=0;i<9;i++){
        printf("Digite um valor para o vetor na posição %d: ", i+1);
        scanf("%d",&v[i]);
    }

    for(i=0;i<9;i++){
            for(j=2;j<=(v[i]/2);j++){
                if(v[i]%j==0){
                    aux++;
                }
            }
        if(aux==0){
            printf("\nO número %d na posição %d é primo",v[i],i);
        } else
            printf("\nO número %d na posição %d não é primo",v[i],i);
    }
return 0;
}
