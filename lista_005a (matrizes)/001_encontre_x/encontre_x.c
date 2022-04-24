#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
setlocale(LC_ALL,"portuguese");
int i, j,mat[5][5], x, k=0;
    printf("\n\nDigite o valor de X a ser encontrado: ");
    scanf("%d", &x);
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Digite um valor para a posição linha %d e coluna %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
                if(mat[i][j]==x){
                    printf("\nX=%d encontrado na linha %d e coluna %d", x,i+1,j+1);
                    k=k+1;
                }
        }
    }
                if(k==0){
                    printf("\nX=%d não encontrado na matriz", x);
                }
return 0;
}
