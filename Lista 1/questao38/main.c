/* 38. A import�ncia de R$ 780.000,00 ser� dividida entre tr�s ganhadores de um concurso.
Sendo que da quantia total:
a. O primeiro ganhador receber� 46%;
b. O segundo receber� 32%;
c. O terceiro receber� o restante; (22%)
Calcule e imprima a quantia ganha por cada um dos ganhadores.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ganhador1, ganhador2, ganhador3, premio;
    premio = 780.000;
    ganhador1 = premio * 0.46;
    ganhador2 = premio * 0.32;
    ganhador3 = premio * 0.22;

    printf("O Pr�mio � de R$%.3f,000\n\n", premio);
    printf("O Primeiro ganhador ficou com R$%.3f,000\n", ganhador1);
    printf("O Segundo ganhador ficou com R$%.3f,000\n", ganhador2);
    printf("O Terceiro ganhador ficou com R$%.3f,000\n", ganhador3);


    return 0;
}
