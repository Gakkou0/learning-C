/*
43. Receba a altura do degrau de uma escada e a altura que o usu�rio deseja alcan�ar subindo a
escada. Calcule e mostre quantos degraus o usu�rio dever� subir para atingir seu objetivo.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int degrau, altura ,alturacm;
    float quantidadededegraus;

    printf("Informe a altura do degrau em centimetros\n");
    scanf("%d",&degrau);
    printf("Informe a altura que deseja alcancar em metros\n");
    scanf("%d",&altura);
    alturacm = altura * 100;
    quantidadededegraus = alturacm / degrau;
    printf("A quantidade de degraus a subir para alcancar a altura desejada e: %.2f\n",quantidadededegraus);

    return 0;
}
