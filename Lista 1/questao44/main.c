/*
44. Fa�a um programa para converter uma letra mai�scula em letra min�scula.
Use a tabela ASCII para resolver o problema.
*/


#include <stdio.h>
#include <stdlib.h>

int main()

{
   char carc;
   printf("Digite uma letra.\n");
   scanf("%c", &carc);
   int maiusculo = 'A';
   int minusculo = 'a';

   int diff = minusculo - maiusculo;
   printf("%c", carc + diff);
   return 0;

}

