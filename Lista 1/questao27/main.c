/*
27. Leia um valor de �rea em hectares e apresente-o convertido em metros quadrados m2.
A f�rmula de convers�o �: M = H * 10000, sendo M a �rea em metros quadrados e H a �rea em hectares
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hec, resultado;

    printf("Insira o volume em Hectares\n");
    scanf("%f",&hec);
    resultado = hec * 10000;
    printf("Em Hectares: %.2f \nEm Metros Quadrados: %.3f\n", hec, resultado);

    return 0;
}
