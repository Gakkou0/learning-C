/*
18. Leia um valor de volume em metros c�bicos m3 e apresente-o
convertido em litros. A f�rmula de convers�o �: L = 1000 * M, sendo L o volume em litros
e M o volume em metros c�bicos.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m3, resultado;

    printf("Insira o volume em metros cubicos\n");
    scanf("%f",&m3);
    resultado = m3 * 1000;
    printf("Em metros cubicos: %.3f \nEm Litros e: %.3f\n", m3, resultado);


    return 0;
}
