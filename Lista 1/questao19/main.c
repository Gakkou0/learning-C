/*
19. Leia um valor de volume em litros e apresente-o convertido em metros c�bicos m3.
A f�rmula de convers�o �: M = L / 1000 , sendo L o volume em litros e M o volume em metros c�bicos.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float litros, resultado;

    printf("Insira o volume em Litros\n");
    scanf("%f",&litros);
    resultado = litros / 1000;
    printf("Em litros: %.3f \nEm metros cubicos: %.3f\n", litros, resultado);


    return 0;
}
