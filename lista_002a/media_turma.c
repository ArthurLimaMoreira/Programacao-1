#include <stdio.h>
#include <stdlib.h>

int main()
{
float i,n1,n2,n_aluno,m_aluno,n_class,m_class,n_ap = 0,n_ex = 0,n_rep = 0;

   printf("Numero de alunos da turma: ");
      scanf("%f", &n_aluno);

//Notas de cada aluno
    for (i=1;i<=n_aluno;i++){
        printf("\nAluno %.0f\n", i);
            printf("Digite a primeira nota: ");
                scanf("%f", &n1);
            printf("Digite a segunda nota: ");
                scanf("%f", &n2);

//Situacao de cada aluno
                    m_aluno= (n1+n2)/2;
                printf("Media: %.2f\n", m_aluno);
        if(m_aluno>=7){
            printf("Situacao: Aprovado\n\n");
                n_ap=n_ap+1;
        }
        if(m_aluno<7 && m_aluno>=4){
            printf("Situacao: Exame\n\n");
                n_ex=n_ex+1;
        }
        if(m_aluno<4){
            printf("Situacao: Reprovado\n\n");
                n_rep=n_rep+1;
        }
//Media da classe
            n_class=m_aluno+n_class; //Calcula nota ttal da turma
            m_class=n_class/n_aluno; //Calcula media da turma
    }
                //Resultados
                    printf("\nAlunos aprovados: %.0f\n", n_ap);
                    printf("Alunos de exame: %.0f\n", n_ex);
                    printf("Alunos reprovados: %.0f\n", n_rep);
                    printf("Media da classe: %.2f\n", m_class);

return 0;
}
