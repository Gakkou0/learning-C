/*
25. Leia um valor de �rea em acres e apresente-o convertido em metros quadrados m2.
A f�rmula de convers�o �: M = A * 4048.58, sendo M a �rea em metros quadrados e A a �rea em acres.

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float acres, resultado;

    printf("Insira o volume em Acres\n");
    scanf("%f",&acres);
    resultado = acres * 4048.58;
    printf("Em Acres: %.2f \nEm Metros Quadrados: %f\n", acres, resultado);


    return 0;
}
