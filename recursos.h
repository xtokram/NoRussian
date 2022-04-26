#ifndef RECURSOS_H_INCLUDED
#define RECURSOS_H_INCLUDED

typedef struct
{

    char nome[15];
    int pontuacao;


} jogador;

jogador jogadores[10];

void iniciarJogo()
{

    printf("Em construção");

}

void recebeJogadores(int x)
{
    for(int i = 0; i < x; i++)
    {

        printf("Digite o nome %dº do jogador: \n",i+1);
        scanf("%s", jogadores[i].nome);
        getchar();

        printf("Digite a pontuação do jogador: \n");
        scanf("%d", &jogadores[i].pontuacao);
        getchar();
        system("clear");

        delay(1); //Delay para "ambientar" programa simulando jogos antigos

    }
}

void ordenaJogadores(int x)
{
    int i,j;
    jogador aux;
    for(i=0; i < x -1; i++)
    {
        for(j = 0; j < x -1; j++)
        {
            if(jogadores[j].pontuacao < jogadores[j+1].pontuacao)
            {
                aux = jogadores[j];
                jogadores[j] = jogadores[j + 1];
                jogadores[j+1] = aux;
            }

        }

    }

}

imprimeJogadores(int x)
{
    printf("\n\t      ----- [+] RANKING NO RUSSIAN BRASIL [+] -----\n\n");
    printf("\t\t[RANKING] \t [PLAYER] \t\t [PONTUAÇÃO] \n");
    for(int i = 0; i < x; i++)
    {
        printf("\t\t %d \t\t  %s \t\t \t     %d \n",i+1,
               jogadores[i].nome,
               jogadores[i].pontuacao);

    }

    delay(3);

}

void ShowMenu()  // funçao que imprime o menu com o banner
{

    system("clear");
    printf("\n"
           "                                      dS$$S$S$S$S$S$S$$Sb\n"
           "                                     :$$S^S$S$S$S$S$S^S$$;\n"
           "                                     SSP   `^$S$S$^    TSS\n"
           "                                     $$       `*         $$\n"
           "                                    _SS ,-           -  SS_\n"
           "                                   :-.|  _     - .-   _ |.-;\n"
           "       NO RUSSIAN                  :\(; '   -._.'._.- ` |)/;\n"
           "    Escolha uma opção:              \`|  , o       o . |'/\n"
           "     01 --> INICIAR <--               :     -'   '-     ;\n"
           "     02 --> JOGADOR <--                ;.              :\n"
           "     03 --> RANKING <--                : `    ._.    ' ;\n"
           "     04 --> CRÉDITOS <--             .sSb   ._____.   dSs.\n"
           "     05 --> SAIR <--              _.d8dSSb.   ._.   .SSbT8b._\n"
           "                               _oOPd88SSSS T.     .P SSSS888OOo.\n"
           "                          _.mMMOOPd888SSSSb TSqqqSP dSSSS88OMOOOMm._\n"
           "                         oOMMMOMOOM8O8OSSSSSb TSSSP dSSSSS8OOMMOOMMOOOo._\n"
           "                       .OOMMOOOMMOOMOOOO   ^SSSTSSP dSSS^ OOOOMMOOMMMOOMMMb.\n"
           "                      dOOOMMMOMMOOOMOOOO       ^SSSS^    :OOO8MMMOOMMOOMMOMMb\n"
           "                     :MMMOOMMOMMOOMMO8OS         `P      8O8OPdMMOOMMOMMOMMMM;\n"
           "                     MMMMOOMMMMMOOMbTO8S;               :8888MMMMMOMMOMMOMMMMM\n"
           "                     OMMMMOOMMMMOOOMMOOOS  SUPER PUTIN :O8OPdMOMMMOMOMMOOMMMMO\n"
           "                    :OMMMMOOMMOMMOOMbTObTb.           .PdOPdMOOMMMMMOMMOMMMMMO;\n"
           "                    MOOMMMMOMMOMMOOMMMOObTSSg._.SSS._.PdOPdMOOMMMMOMMMMOMMMMOOM\n"
           "                    MMOMMMMOMMMOMMOOMMbT8bTSSSSSSSSSPd8OPdOOOMMMMOOMMMMOMMMOOMM\n"
           "                    MMOMMMOMMMMMOMMOOMMMbT8bTSSSSSPd88PdOOOOMMMMOOMMMMMMMMOOMMM\n");



}

void delay(int number_of_seconds)    //Cria função de delay com parametro inteiro em segundos
{
    int milli_seconds = 1000000 * number_of_seconds; // Cria variavel millisegundos que recebe 1000 * segundos
    clock_t start_time = clock(); // Cria variavel tempo_de_começo que recebe o retorno da funçao clock da biblioteca time.h
    while (clock() < start_time + milli_seconds); //Looping que espera do começo até o tempo estipulado
}





#endif // RECURSOS_H_INCLUDED
