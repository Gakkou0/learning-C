
/*34. Leia o valor do raio de um c�rculo e calcule e imprima a �rea do c�rculo correspondente. A �rea
do c�rculo � pi * raio2, considere = 3.14.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{   const double pi = 3.14;
    float raio, resultado;
    printf("Digite o Raio do Circulo\n");
    scanf("%f",&raio);
    resultado = pi * (raio * raio);
    printf("A area do circulo e: %.3f", resultado);
    return 0;
}
