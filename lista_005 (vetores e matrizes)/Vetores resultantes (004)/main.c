#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"portuguese");
int v[8],positivo[8],negativo[8],i,j;
    for(i=0;i<8;i++){
        printf("Digite um valor para o vetor na posição %d: ",i+1);
        scanf("%d",&v[i]);
    }
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(v[i]>=0){
                v[i]=positivo[j];
            } else{
                v[i]=negativo[j];
            }
        printf("\nValores positivos: %d",positivo[j]);
        printf("\nValores negativos: %d",negativo[j]);
        }
    }

return 0;
}
