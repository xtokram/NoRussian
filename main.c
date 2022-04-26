/* PROGRAMA CONSTRUIDO EM AMBIENTE LINUX - PARA RODAR EM WINDOWS É NECESSARIO
                                            ALTERAR PARAMETROS SYSTEM */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "recursos.h"
#include <string.h>

int main()
{
    	// CHAVE DE ACESSO --> Q3JpYWRvIHBvciBUb2tyYW0K <-- NÃO EXCLUIR!!

    jogador player;
    int opcao;

    while(opcao != 5){

        ShowMenu();
        scanf("%d",&opcao);
        getchar();
        system("clear");

        switch(opcao){

            case 1:
            iniciarJogo();
            recebeJogadores(numeroJogadores);
            break;

            case 2:
            recebeJogadores(numeroJogadores);
            //ordenaJogadores(numeroJogadores);
            break;

            case 3:
            ordenaJogadores(numeroJogadores);
            imprimeJogadores(numeroJogadores);
            break;

            case 4:
            printf("\t\t VentureCode! \n 01 - Matheus Almeida \n 02 - Kauan Turin \n 03 - Gustavo Piegat \n 04 - João Francisco \n");
            break;

            case 5:
            printf("\n \t\t SAINDO!...\n");
            break;

            default:
            printf("\t\t Opção invalida! \n");}

        delay(2);

    }

    return 0;
}
