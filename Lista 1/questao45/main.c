/*
45. Fa�a um programa que leia um n�mero inteiro positivo de tr�s d�gitos (de 100 a 999).
Gere outro n�mero formado pelos d�gitos invertidos do n�mero lido. Exemplo:
N�meroLido = 123
N�meroGerado = 321.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
      int n0, n1, n2, n3;
   printf("Digite um numero de 3 digitos positivo\n");
   scanf("%d", &n0);
   if (n0 > 10) {
        n1 = n0 % 10;
        n0 = n0 / 10;
        n2 = n0 % 10;
        n0 = n0 / 10;
        n3 = n0 % 10;
        n0 = n0 / 10;
   }

   printf("%d%d%d\n", n1, n2, n3);

    return 0;
}
