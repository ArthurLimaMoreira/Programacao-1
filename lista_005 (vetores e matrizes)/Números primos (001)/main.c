#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL,"portuguese");
int v[9],i,j,aux=0;
    for(i=0;i<9;i++){
        printf("Digite um valor para o vetor na posi��o %d: ", i+1);
        scanf("%d",&v[i]);
    }

    for(i=0;i<9;i++){
            for(j=2;j<=(v[i]/2);j++){
                if(v[i]%j==0){
                    aux++;
                }
            }
        if(aux==0){
            printf("\nO n�mero %d na posi��o %d � primo",v[i],i);
        } else
            printf("\nO n�mero %d na posi��o %d n�o � primo",v[i],i);
    }
return 0;
}
