#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"portuguese");
int v[10],i,achou;
achou=0;
    for(i=0;i<10;i++){
        printf("Digite um n�mero para a posi��o %d: ",i+1);
        scanf("%d",&v[i]);
    }
        for(i=0;i<10;i++){
            if(v[i]>50){
                printf("Valor maior que 50 encontrado na posi��o %d: %d",i+1,v[i]);
                achou=achou+1;
            }
        }
    if(achou==0){
        printf("\nN�o existe nenhum n�mero superior a 50 no vetor.");
    }
return 0;
}
