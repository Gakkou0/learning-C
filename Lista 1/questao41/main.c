/*41. Receba o sal�rio-base de um funcion�rio.
Calcule e imprima o sal�rio a receber, sabendo-se que esse
funcion�rio tem uma gratifica��o de 5% sobre o sal�rio-base.
Al�m disso, ele paga 7% de imposto sobre o sal�rio-base.
*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salariobase, gratificacao, retificacao;

    printf("Digite seu Salario Base\n");
    scanf("%f",&salariobase);
    gratificacao = salariobase * 0.05;
    retificacao = salariobase * 0.07;
    salariobase = (salariobase + gratificacao) - retificacao;
    printf("Seu Salario Base e:R$%.2f\n", salariobase);

    return 0;
}
