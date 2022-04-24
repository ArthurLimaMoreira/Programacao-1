#include <stdio.h>
#include <stdlib.h>

/*
Faca um programa que receba o valor do salario minimo, o numero de horas trabalhadas, o numero de dependentes dos funcionarios
e a quantidade de horas extras trabalhadas. Calcule e mostre o salario a receber do funcionario de acordo com as regras a seguir.

        a. O valor da hora trabalhada e 1/19 do salario minimo;
        b. Osalario do mes e igual ao numero de horas trabalhadas multiplicadas pelo valor da hora;
        c. Para cada dependente acrescentar R$45,00;
        d. Para cada hora extra, calcular o valor da hora trabalhada acrescida de 45%;
        e. O salario bruto e igual ao salario do mes mais o valor dos dependentes mais o valor das horas extras;
        f. Calcular o valor do imposto de renda retido na fonte de acordo com a tabela:
                <2000         / / isento
                >2000 e <3000 / / 15%
                >3000         / / 25%
        g. O salario liquido e igual ao salario bruto menos o IPRF
        h. A gratificacao de acordo com
                ate 2500 / / 150,00
                >2500   / / 55,00
*/
int main()
{
float sal_min,h_trab,val_trab,h_ext,val_ext,dep_func,val_dep,sal_mes,sal_bruto,sal_liq,grat,irrf,sal_rec;
        printf("Salario minimo atual: ");
            scanf("%f", &sal_min);
        printf("Horas trabalhadas: ");
            scanf("%f", &h_trab);
        printf("Horas extras trabalhadas: ");
            scanf("%f",&h_ext);
        printf("Numero de dependentes: ");
            scanf("%f", &dep_func);
                val_trab=sal_min/19;
                val_dep=dep_func*45;
                val_ext=(val_trab*0.45)+val_trab;
                sal_mes=val_trab*h_trab;
                sal_bruto=sal_mes+val_dep+val_ext;
    if(sal_bruto<2000){
        irrf=0;
        }
    if(sal_bruto>=2000 && sal_bruto<=3000){
        irrf=sal_bruto*0.15;
        }
    if(sal_bruto>3000){
        irrf=sal_bruto*0.25;
        }
                sal_liq=sal_bruto-irrf;
    if(sal_liq<2500){
        grat=150;
    } else{
        grat=55;
        }
                sal_rec=sal_liq+grat;
            printf("Salario do funcionario: %.2f", sal_rec);
return 0;
}
