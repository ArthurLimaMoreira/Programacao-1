#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"portuguese");

int pecas[10],i;
float preco[10],total[10];

    for(i=0;i<10;i++){
        printf("Digite a quantidade de peças vendidas: ");
        scanf("%d",&pecas[i]);
        printf("Digite o preço da peça vendida: ");
        scanf("%f",&preco[i]);
    }

    for(i=0;i<10;i++){
        total[i]=preco[i]*pecas[i];
        printf("Vendedor %d\n",i);
        printf("Peças vendidas: %d",pecas[i]);
        printf("\nValor de cada peça: %.2f",preco[i]);
        printf("\nValor total de vendas: %.2f",total[i]);
    }

return 0;
}
