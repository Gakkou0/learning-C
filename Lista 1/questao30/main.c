
//30. Leia um valor em real e a cota��o do d�lar. Em seguida, imprima o valor correspondente em d�lares.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float real, dolar, resultado;
    printf("Valor em Real\n");
    scanf("%f", &real);
    printf("Cotacao do Dolar\n");
    scanf("%f", &dolar);

    resultado = real / dolar;

    printf("A conversao fica R$%.2f\n", resultado);

    return 0;
}
