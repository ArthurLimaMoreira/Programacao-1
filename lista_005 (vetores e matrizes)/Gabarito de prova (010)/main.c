#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"portuguese");
char gab[10], resposta[10];
int aluno, pontos, total_ap=0, perc_ap, i, j;
    for(i=0;i<9;i++){
        printf("Gabarito da quest�o %d", i+1);
        scanf(" %c", &gab[i]);
    }
        for(i=0;i<14;i++){
            printf("Digite o n�mero do aluno",i+1,"� aluno": );
            scanf("%d",&aluno);
            for(j=0;j<9;j++){
                printf("Resposta do aluno para quest�o %d",j+1);
                scanf(" %c",&resposta[j]);
                    if(resposta[j]==gab[j]){
                        pontos=pontos+1;
                    }
            }
            printf("A nota do aluno %d foi %d",aluno,pontos);
                if(pontos>=6){
                    total_ap=total_ap+1;
                }
        }
    perc_ap=total_ap*(100/15);
    printf("O percentual de aprova��o foi de %d",perc_ap,"%");
return 0;
}
