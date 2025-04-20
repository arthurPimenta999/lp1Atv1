#include <stdio.h>
#include <math.h>

int main(void)
{
    struct ponto
    {
        float x;
        float y;
    };

    struct ponto ponto1;
    struct ponto ponto2;

    float resultado;

    printf("Insira o primeiro par de coordenadas:");
    printf("\nX1: ");
    scanf("%f", &ponto1.x);
    printf("\nY1: ");
    scanf("%f", &ponto1.y);

    printf("Insira o segundo par de coordenadas:");
    printf("\nX2: ");
    scanf("%f", &ponto2.x);
    printf("\nY2: ");
    scanf("%f", &ponto2.y);

    float distancia = sqrt(
        pow(ponto2.x - ponto1.x, 2) +
        pow(ponto2.y - ponto1.y, 2));

    printf("A distancia entre os pontos é: %f", distancia);

    return 0;
}