/*12. Leia uma dist�ncia em milhas e apresente-a convertida em quil�metros. A f�rmula de convers�o
�: K = 1.61 * M, sendo K a dist�ncia em quil�metros e M em milhas.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float milhas, resultado;
    printf("Digite suas milhas\n");
    scanf("%f", &milhas);
    resultado = 1.61 * milhas;
    printf("Em milhas e: %.2f \nEm Quilometros e: %.2f\n", milhas, resultado);

    return 0;
}
