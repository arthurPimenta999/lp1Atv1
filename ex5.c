#include <stdio.h>

int main() {
    int vetor[10];
    int i, j, temp, trocas = 0;
    int ordenado = 1;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++)    { scanf("%d", &vetor[i]); }
    for (i = 0; i < 9; i++)     { if (vetor[i] > vetor[i + 1]) { ordenado = 0; break; } }

    if (ordenado) {
        printf("Vetor ja ordenado");
    } else {
		for (i = 0; i < 9; i++) {
            for (j = 0; j < 9 - i; j++) {
                if (vetor[j] > vetor[j + 1]) {
                    temp = vetor[j];
                    vetor[j] = vetor[j + 1];
                    vetor[j + 1] = temp;
                    trocas++;
                }
            }
        }
        printf("\n");
        for (i = 0; i < 10; i++) { printf("%d ", vetor[i]); }
        printf("\n\n%d trocas foram necessarias", trocas);
    }
    return 0;
}