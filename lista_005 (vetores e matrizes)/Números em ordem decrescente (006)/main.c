#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL,"portuguese");
int v[10],i,j,aux;
    for(i=0;i<10;i++){
        printf("Digite um valor para o vetor na posição %d: ", i+1);
        scanf("%d", &v[i]);
    }
        for(i=0;i<10;i++){
            for(j=0;j<9;j++){
                if(v[j]<v[j+1]){
                    aux=v[j];
                    v[j]=v[j+1];
                    v[j+1]=aux;
                }
            }
        }
     printf("\nVetor decrescente: [");
    for(i=0;i<10;i++){
        if(i<9){
            printf("%d ", v[i]);
        }else{
            printf("%d",v[i]);
        }
    }printf("]");
return 0;
}
