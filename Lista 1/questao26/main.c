/*
26. Leia um valor de �rea em metros quadrados m2 e apresente-o convertido em hectares.
A f�rmula de convers�o �: H = M * 0.0001, sendo M a �rea em metros quadrados e H a �rea em hectares.

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m2, resultado;

    printf("Insira o volume em Metros quadrados\n");
    scanf("%f",&m2);
    resultado = m2 * 0.0001;
    printf("Em Metros Quadrados: %.2f \nEm Hectares: %.2f\n", m2, resultado);

    return 0;
}
