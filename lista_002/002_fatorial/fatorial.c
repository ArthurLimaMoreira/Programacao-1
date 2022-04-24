#include <stdio.h>
#include <stdlib.h>

int main()
{
float n1, res, i;
    printf("Digite n1: ");
        scanf("%f", &n1);
res = 1;
    for(i=1;i<=n1;i++){
            res= res*i;
            }
        printf("Resultado: %.2f", res);
return 0;
}
