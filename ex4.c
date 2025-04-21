#include <stdio.h>

struct Ponto { float x; float y; };

int main() {
    int N;
    printf("Digita primeiro o numero de iteracoes. Segundo, digite 6 numeros inteiros, onde os 4 primeiros sao coordenadas das vetices de um retangulo e os dois ultimos sao as coordenadas de um ponto qualquer:\n");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        float x0, y0, x1, y1, x, y;
        scanf("%f %f %f %f %f %f", &x0, &y0, &x1, &y1, &x, &y);

        struct Ponto ponto = {x, y};

        printf(ponto.x >= x0 && ponto.x <= x1 && ponto.y >= y0 && ponto.y <= y1 ? "Contido" : "Nao-contido");
        }
    return 0;
}