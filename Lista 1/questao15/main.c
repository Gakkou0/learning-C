/*15. Leia um �ngulo em radianos e apresente-o convertido em graus. A f�rmula de convers�o �: G = R
* 180 / PI, sendo G o �ngulo em graus e R em radianos e PI = 3.14.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    const double pi = 3.14;
    float radianos, grau;

    printf("Digite um angulo em radianos\n");
    scanf("%f",&radianos);
    grau = radianos * 180/pi;
    printf("Em Radianos e: %.3f \nEm Graus e: %.3f\n", radianos, grau);
    return 0;
}
