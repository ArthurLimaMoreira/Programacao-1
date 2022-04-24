#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
setlocale(LC_ALL,"portuguese");
int i, j,mat[5][5], k=0,w=0,z=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Digite um valor para a posição linha %d e coluna %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
                w=w+mat[i][j];
                if(mat[i][j]%2!=0){
                    k=k+mat[i][j];
                }
        }
    }
    for(j=0;j<5;j++){
        for(i=0;i<5;i++){
        }
    z=z+mat[i][j];
    }
    printf("\nSoma das linhas: %d", w);
    printf("\nSoma das colunas: %d", z);
    printf("\nSoma dos impares: %d", k);
return 0;
}
