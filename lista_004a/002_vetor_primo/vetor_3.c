#include <stdio.h>
#include <stdlib.h>

int main()
{
int n[9],i,qte=0;
    for(i=0;i<9;i++){
        printf("Digite um numero: ");
        scanf("%d",&n[i]);
    }
            for(i=0;i<9;i++){
                if(n[i]%2==0 && n[i]!=2 ||n[i]==1){
                    printf("\nO numero %d na posicao %d nao e primo", n[i],i+1);
                    }   else if(n[i]==2){
                            printf("\nO numero %d na posicao %d e primo", n[i],i+1);
                            qte++;
                        }   else{
                                printf("\nO numero %d na posicao %d e primo", n[i],i+1);
                                qte++;
                            }
            }
        printf("\nO vetor possui %d numeros primos", qte);
return 0;
}
