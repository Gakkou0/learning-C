/*
17. Fa�a um programa para determinar a pr�xima jogada em um Jogo da Velha. Assumir que o
tabuleiro � representado por uma matriz de 3 x 3, onde cada posi��o representa uma das casas do
tabuleiro. A matriz pode conter os seguintes valores -1, 0, 1 representando respectivamente uma
casa contendo uma pe�a minha (-1), uma casa vazia do tabuleiro (0), e uma casa contendo uma
pe�a do meu oponente (1).
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int rand(void); //Declara��o da fun��o Random 'aleat�ria'
    srand( (unsigned)time(NULL) ); //Complemento da fun��o aleat�ria
    int tabuleiro[3][3] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i, x, marcUser, colunaUser, marcPc, colunaPc, fimdejogo = 0, turnoUser, turnoPc;

    while (fimdejogo == 0) //Roda o C�digo at� algu�m vencer
    {
        turnoUser = 0; //Reset das jogadas
        turnoPc = 0;

     for (i=0; i<3; i++)
     {
         for (x=0; x<3; x++)
         {
             printf("%d ", tabuleiro[i][x]); //Looping do Tabuleiro
         }
         printf("\n");
     }
     while (turnoUser == 0) //Confirma��o de Jogada do Usuario, trava enquanto n�o fizer uma jogada valida
{
     printf("Qual sua jogada?\n");
     scanf("%d %d", &marcUser, &colunaUser);

     if (tabuleiro[marcUser-1][colunaUser-1] !=0)
    {
         printf("Posicao ja selecionada \n");
    }
     else
    {
        tabuleiro[marcUser-1][colunaUser-1] = -1;
        turnoUser = 1;
    }
}
if (tabuleiro[0][0] != 0 && tabuleiro[0][1] != 0 && tabuleiro[0][2] != 0 &&
    tabuleiro[1][0] != 0 && tabuleiro[1][1] != 0 && tabuleiro[1][2] != 0 &&
    tabuleiro[2][0] != 0 && tabuleiro[2][1] != 0 && tabuleiro[2][2] != 0)
    {
    printf("Deu velha \n");
    fimdejogo = 1;
    // Confirma��o de EMPATE e Finaliza��o do C�digo
    }

    while(turnoPc == 0) //Jogada do Computador
    {
        marcPc = rand()%3; //Setando um Numero aleatorio de 0 a 2;
        colunaPc = rand()%3;

    if (tabuleiro[marcPc][colunaPc]==0) {
        tabuleiro[marcPc][colunaPc] = 1;
        turnoPc = 1;
    }
    }
    if (tabuleiro[0][0] + tabuleiro[0][1] + tabuleiro[0][2] ==3 ||
        tabuleiro[1][0] + tabuleiro[1][1] + tabuleiro[1][2] == 3||
        tabuleiro[2][0] + tabuleiro[2][1] + tabuleiro[2][2] == 3){
            printf("Voce perdeu \n");
            //Confirmar Derrota
            fimdejogo = 1;
        }
        if (tabuleiro[0][0] + tabuleiro[1][0] + tabuleiro[2][0] ==3 ||
        tabuleiro[0][1] + tabuleiro[1][1] + tabuleiro[2][1] == 3||
        tabuleiro[0][2] + tabuleiro[1][2] + tabuleiro[2][2] == 3){
            printf("Voce perdeu \n");
            //Confirmar Derrota
            fimdejogo = 1;
        }
         if (tabuleiro[0][0] + tabuleiro[1][1] + tabuleiro[2][2] ==3 ||
        tabuleiro[2][0] + tabuleiro[1][1] + tabuleiro[0][2] == 3){
            printf("Voce perdeu \n");
            //Confirmar Derrota
            fimdejogo = 1;
        }
        if (tabuleiro[0][0] + tabuleiro[0][1] + tabuleiro[0][2] == -3 ||
        tabuleiro[1][0] + tabuleiro[1][1] + tabuleiro[1][2] == -3||
        tabuleiro[2][0] + tabuleiro[2][1] + tabuleiro[2][2] == -3){
            printf("Voce venceu \n");
            //Confirmar Vitoria
            fimdejogo = 1;
        }
        if (tabuleiro[0][0] + tabuleiro[1][0] + tabuleiro[2][0] == -3 ||
        tabuleiro[0][1] + tabuleiro[1][1] + tabuleiro[2][1] == -3||
        tabuleiro[0][2] + tabuleiro[1][2] + tabuleiro[2][2] == -3){
            printf("Voce venceu \n");
            //Confirmar Vitoria
            fimdejogo = 1;
        }
         if (tabuleiro[0][0] + tabuleiro[1][1] + tabuleiro[2][2] == -3 ||
        tabuleiro[2][0] + tabuleiro[1][1] + tabuleiro[0][2] == -3){
            printf("Voce venceu \n");
            //Confirmar Vitoria
            fimdejogo = 1;
        }
}
return 0;
}
