#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define NUMVOO 10
//constante global

typedef struct
{
    int numeroVoo;
    char cidadeOrigem [20];
    char cidadeDestino[20];
    int ** mapaAssentos;
}reserva;




int cabecalho ()
{
    int escolha;
    printf("Bem vindo Cia Aerea APC B\n");
    printf("----------------------------\n\n");
    printf("1\t- Nova Reserva\n");
    printf("0\t- Sair\n");
    printf("Escolha (1 ou 0): ");
    scanf("%d",&escolha);

    return escolha;
}

int valida_numero_voo (reserva CA[], int tam, int numVoo)
{
    int i;
    for (i=0; i<tam; i++)
    {
      if (numVoo == CA[i].numeroVoo)
      {
        return i;
      }
    }
    return -1; //Tentou todas as posicoes do vetor
}

int escolhe_voo (reserva CA[],int tam)
{
    int numero_voo, validaVoo;
    int i;

    printf("Escolha o NUMERO DO VOO\n");
    printf("Numero do voo\tOrigem\tDestino");
    printf("----------------------------\n\n");

    for (i=0; i<tam; i++)
    {
      printf("%d\t%s\t%s\n",CA[i].numeroVoo,CA[i].cidadeOrigem,CA[i].cidadeDestino);
    }
    printf("\n----------------------------\n");
    printf(">>>> Escolha o Numero do VOO:");
    scanf("%d", &numero_voo);
     
    validaVoo = valida_numero_voo (CA, tam, numero_voo);

    return 0;
}



int main()
{
    int escMenu;
    reserva ciaAerea [NUMVOO] = {   { 2334, "Campinas" ,"Brasilia" , NULL}, {3456,"Brasilia", "Campinas", NULL},
                                    {3354, "Campinas" , "Salvador", NULL},{4534, "Salvador", "Joinville", NULL},
                                    {4567, "Joinville", "Campinas", NULL},{4655, "Brasilia", "Porto Alegre", NULL},
                                    {5422, "Campinas" , "Rio de Janeiro", NULL},{5624, "Campinas","Recife", NULL},
                                    {5802, "Recife" , "Campinas", NULL}, {7022,"Campinas","Belo Horizonte", NULL}
                                };
    int posicao_tabela;
    char letra;
    int fileira;
    int teste;

    escMenu = cabecalho ();
    //Separador

    teste = escolhe_voo (ciaAerea,NUMVOO);

    return 0;
}