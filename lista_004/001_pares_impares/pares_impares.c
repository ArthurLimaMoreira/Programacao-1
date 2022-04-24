#include <stdio.h>
#include <stdlib.h>

int main()
{
int m[10],i,q_par,q_impar;
q_par=0;
q_impar=0;

 for(i=0;i<=9;i++){
    printf("Escreva n: ");
    scanf("%d",&m[i]);
    if(m[i]%2==0)
        q_par++;
        else
            q_impar++;
 }
        printf("\n%d numeros pares",q_par);
        printf("\n%d numeros impares",q_impar);
return 0;
}
