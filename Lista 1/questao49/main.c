/*
49. Tr�s amigos jogaram na loteria. Caso eles ganhem, o pr�mio deve ser repartido
proporcionalmente ao valor que cada deu para a realiza��o da aposta. Fa�a um programa que leia
quanto cada apostador investiu, o valor do pr�mio, e imprima quanto cada um ganharia do pr�mio
com base no valor investido.
*/

#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

int main () {

float amigo1, amigo2, amigo3,fim1,fim2, fim3, premio,soma;

printf("Valor do premio: R$ \n");
scanf("%f",&premio);

printf("1. Quantia que o Amigo 1 deu: R$ \n");
scanf("%f",&amigo1);

printf("2. Quantia que o Amigo 2 deu: R$ \n");
scanf("%f",&amigo2);

printf("3. Quantia que o Amigo 3 deu: R$ \n");
scanf("%f",&amigo3);

soma = (amigo1+amigo2+amigo3);
fim1 = (premio/soma)* amigo1;
fim2 = (premio/soma)* amigo2;
fim3 = (premio/soma)* amigo3;

printf("O valor do amigo 1  e de : R$ %3.2f \n",fim1);
printf("O valor do amigo 2  e de : e de : R$ %3.2f \n",fim2);
printf("O valor do amigo 3  e de : e de : R$ %3.2f \n",fim3);

return 0;

}
