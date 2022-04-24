#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{
setlocale(LC_ALL,"portuguese");
int i,maior1,maior2,posmaior1,posmaior2;
char mes[12];
char mes["Janeiro";"Fevereiro";"Março";"Abril";"Maio";"Junho";"Julho";"Agosto";"Setembro";"Outubro";"Novembro";"Dezembro"];
float temp_mes[12];

    for(i=0;i<12;i++){
        printf("Digite a temperatura média do mês de %s: ",mes[i]);
        scanf("%f",&temp_mes[i]);
    }

    maior1=temp_mes[0];
    posmaior1= 0;

    for(i=1;i<12;i++){
        if(temp_mes[i]>maior1){
            maior2=maior1;
            posmaior2=posmaior1;
            maior1=temp_mes[i];
            posmaior1=i;
        }
    }
    printf("Maior temperatura média: %d",maior1);
return 0;
}
