#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"portuguese");
int v[10],i,achou;
achou=0;
    for(i=0;i<10;i++){
        printf("Digite um número para a posição %d: ",i+1);
        scanf("%d",&v[i]);
    }
        for(i=0;i<10;i++){
            if(v[i]>50){
                printf("Valor maior que 50 encontrado na posição %d: %d",i+1,v[i]);
                achou=achou+1;
            }
        }
    if(achou==0){
        printf("\nNão existe nenhum número superior a 50 no vetor.");
    }
return 0;
}
