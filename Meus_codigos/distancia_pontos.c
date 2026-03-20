#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    double x1,x2,y1,y2;
    double distancia1, distancia2, distancia_final, distancia_x, distancia_y;

    printf("Digite o valor da coordenada X do ponto (P): ");
    scanf("%lf",&x1);
    printf("\n Digite o valor da coordenada Y do ponto (P): ");
    scanf("%lf",&y1);
    printf("\n Digite o valor da coordenada X do ponto (Q): ");
    scanf("%lf",&x2);
    printf("\n Digite o valor da coordenada Y do ponto (Q): ");
    scanf("%lf",&y2);

    distancia_x = x2 - x1;
    distancia_y = y2 - y1;

    distancia1 = distancia_x * distancia_x;
    distancia2 = distancia_y * distancia_y;


    distancia_final = sqrt (distancia1 + distancia2);

    printf ("\n\n A distancia entre esses dois pontos é: %lf\n\n\n", distancia_final);

    return 0;
}