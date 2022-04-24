#include <stdio.h>
#include <stdlib.h>

/*
O preco, ao consumidor, de um carro é a soma do custo de fabrica com a porcentagem do sistribuidor e com impostos, ambos
aplicados ao custo de fabrica. As porcentagens encontram-se na tabela abaixo. Faca um programa que receba o custo de
fabrica de um carro e mostre o preco ao consumidor.

Até 20 mil:        5% distribuidor / / isento imposto
Entre 20 e 35 mil: 10%             / / 15%
Acima de 35 mil:   15%             / / 20%
*/

int main()
{
float p_fab,l_dist,imp,p_cons;
        printf("Custo de fabrica: ");
            scanf("%f", &p_fab);
    if (p_fab<20){
                l_dist=p_fab*0.05*1000;
                imp=0;
    }
    if (p_fab>=20 && p_fab<=35){
                l_dist=p_fab*0.1*1000;
                imp=p_fab*0.15*1000;
    }
    if (p_fab>35){
                l_dist=p_fab*0.15*1000;
                imp=p_fab*0.20*1000;
    }
        p_cons=(p_fab*1000)+l_dist+imp;
            printf("Valor ao consumidor: %.2f", p_cons);

return 0;
}
