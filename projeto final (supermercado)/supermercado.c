/*
    PROJETO FINAL DE PROGRAMAÇÃO I

    AUTOR:  ARTHUR LIMA MOREIRA

    OBJETIVO - DESENVOLVER UM PROGRAMA PARA ATUAR COMO BANCO DE DADOS DE UM SUPERMERCADO, NO QUAL SEJA POSSÍVEL:
        1.  CADASTRAR NOVOS CLIENTES;
        2.  BUSCAR CLIENTE POR ID;
        3.  LISTAR TODOS OS CLIENTES CADASTRADOS
            TODOS OS DADOS + FATURA MENSAL;

        4.  CADASTRAR PRODUTOS;
        5.  ATUALIZAR ESTOQUE;
        6.  CADASTRAR VENDAS REALIZADAS (ASSOCIADAS A CADA CLIENTE)
            FORMA DE PAGAMENTO (A VISTA/CRÉDITO)
            GERAR FATURA
            CALCULAR FATURAMENTO DA EMPRESA;

        7.  REALIZAR CONSULTA AO FATURAMENTO;
*/

//  BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//  VARIÁVEIS GLOBAIS
#define ALL 30 // DEFINE O NÚMERO MÁXIMO DE LINHAS DA TABELA COMO 30

char nome_c[ALL][20];
int codigo_c[ALL];
float fatura_c[ALL];
int venda_c[ALL];

char nome_p[ALL][20];
int codigo_p[ALL];
float valor_p[ALL];
int estoque_p[ALL];

int escolha, i;
float arrecadado;

//  FUNÇÕES
void cadastro();
void busca();
void lista_clientes();
void vendas();
void lucro();

void cadastrar_produto();
void listar_estoque();
void atualizar_estoque();

// LOOP
int main()
{
    setlocale(LC_ALL, "portuguese");
    do
    {
        system("cls");
        printf("Bem-vindo, escolha uma das opções!");
        printf("\n[1] - Cadastrar novo cliente");
        printf("\n[2] - Buscar cliente");
        printf("\n[3] - Listar todos os clientes");
        printf("\n[4] - Cadastrar produto");
        printf("\n[5] - Atualizar estoque");
        printf("\n[6] - Listar estoque");
        printf("\n[7] - Iniciar venda");
        printf("\n[8] - Valor Arrecadado");
        printf("\n[9] - Sair");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            cadastro();
            break;
        case 2:
            busca();
            break;
        case 3:
            lista_clientes();
            break;
        case 4:
            cadastrar_produto();
            break;
        case 5:
            atualizar_estoque();
            break;
        case 6:
            listar_estoque();
            break;
        case 7:
            vendas();
            break;
        case 8:
            lucro();
            break;
        case 9:
            system("exit");
            break;
        }

    } while (escolha != 9);
    return 0;
}

void lucro()
{
    setlocale(LC_ALL, "portuguese");
    float arrecadado;

    for (i = 0; i < ALL; i++)
    {

        if (fatura_c[i] > 0)
        {
            arrecadado = arrecadado + fatura_c[i];
            printf("\nValor arrecadado: R$ %.2f", arrecadado);
        }
    }

    getchar();
    getchar();
}

void vendas()
{
    setlocale(LC_ALL, "portuguese");
    int op, qte, codigo_busca, codigo_p1;
    float venda;
    do
    {
        printf("Digite o código do cliente: ");
        scanf("%d", &codigo_busca);

        for (i = 0; i < ALL; i++)
        {

            if (codigo_c[i] == codigo_busca)
            {

                printf("\nNome do cliente: %s", nome_c[i]);
                venda_c[i]++;
                printf("\nCódigo do produto que deseja comprar: ");
                scanf("%d", &codigo_p1);

                if (codigo_p[i] == codigo_p1)
                {

                    printf("Produto: %s", nome_p[i]);
                    printf("\nUnidades a comprar: ");
                    scanf("%d", &qte);
                    venda = valor_p[i] * qte;
                    estoque_p[i] = estoque_p[i] - qte;
                    printf("\nForma de pagamento");
                    printf("\n[1]-A vista\n[2]-Crédito");
                    scanf("%d", &op);

                    switch (op)
                    {
                    case 1:
                        printf("Total a pagar: R$ %.2f", venda);
                        break;
                    case 2:
                        fatura_c[i] = fatura_c[i] + venda;
                        printf("Valor adicionado à fatura");
                        break;
                    }
                }
            }
        }
        printf("\n[0]-Continuar?");
        scanf("%d", &escolha);
    } while (escolha == 0);
}

void lista_clientes()
{
    setlocale(LC_ALL, "portuguese");
    for (i = 0; i < ALL; i++)
    {
        if (codigo_c[i] > 0)
        {
            printf("\n \nNome: %s\nCódigo: %d\nFatura do mês: %.2f", nome_c[i], codigo_c[i], fatura_c[i]);
        }
    }
    getchar();
    getchar();
}

void cadastro()
{
    setlocale(LC_ALL, "portuguese");
    static int cliente;
    do
    {
        printf("\nDigite o nome do cliente: ");
        scanf("%s", &nome_c[cliente]);
        codigo_c[cliente] = rand() % 99999;
        printf("Código do cliente: %d", codigo_c[cliente]);
        printf("\n[0]-Continuar?");
        scanf("%d", &escolha);
        cliente++;
    } while (escolha == 0);
}

void busca()
{
    setlocale(LC_ALL, "portuguese");
    int codigo_busca;
    do
    {
        printf("Digite o código do cliente: ");
        scanf("%d", &codigo_busca);

        for (i = 0; i < ALL; i++)
        {
            if (codigo_c[i] == codigo_busca)
            {
                printf("\nNome do cliente: %s", nome_c[i]);
                printf("\nFatura do mês: %.2f", fatura_c[i]);
                printf("Total de compras do cliente: %d", venda_c[i]);
            }
        }

        printf("\n[0]-Continuar?");
        scanf("%d", &escolha);
    } while (escolha == 0);
}

void cadastrar_produto()
{
    setlocale(LC_ALL, "portuguese");
    static int produto;
    do
    {
        printf("\nDigite o nome do produto: ");
        scanf("%s", nome_p[produto]);
        codigo_p[produto] = (produto * produto) + 11;
        printf("Código do produto: %d", codigo_p[produto]);
        printf("\nValor do produto: R$ ");
        scanf("%f", &valor_p[produto]);
        printf("\nEstoque: ");
        scanf("%d", &estoque_p[produto]);
        printf("\n[0]-Continuar?");
        scanf("%d", &escolha);
        produto++;
    } while (escolha == 0);
}

void listar_estoque()
{
    setlocale(LC_ALL, "portuguese");

    for (i = 0; i < ALL; i++)
    {
        if (codigo_p[i] > 0)
        {
            printf("\n\nNome: %s\nEstoque: %d\nValor: %.2f\nCódigo: %d", nome_p[i], estoque_p[i], valor_p[i], codigo_p[i]);
        }
    }

    getchar();
    getchar();
}

void atualizar_estoque()
{
    setlocale(LC_ALL, "portuguese");
    int estoque_atual, codigo_estoque;
    do
    {
        printf("\nCódigo do produto: ");
        scanf("%d", &codigo_estoque);

        for (i = 0; i < ALL; i++)
        {
            if (codigo_p[i] == codigo_estoque)
            {
                printf("\nEstoque atual: %d", estoque_p[i]);
                printf("\nAcrescentar quantas unidades: ");
                scanf("%d", &estoque_atual);
                estoque_p[i] = estoque_p[i] + estoque_atual;
            }
        }

        printf("\n[0]-Continuar?");
        scanf("%d", &escolha);
    } while (escolha == 0);
}
