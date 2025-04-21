#include <stdio.h>

int main() {
    int PecaMes[3][3];  //[lARGURA][ALTURA]
    int GranaPeca[3][2];
    int GranaMes[3][2];

    printf("\nPecaMes\n");
    for (int i = 0; i < 3; i++) {
        switch(i) {
            case 0:    printf("-JAN-");   break;
            case 1:    printf("-FEV-");   break;
            case 2:    printf("-MAR-");   break;
        }
        printf("\n");
        for (int j = 0; j < 3; j++) {
            switch(j) {
                case 0:    printf("P1: ");   break;
                case 1:    printf("P2: ");   break;
                case 2:    printf("P3: ");   break;
            }
            scanf("%d", &PecaMes[i][j]);
        }
    }

    printf("\nGranaPeca\n");
    for (int j = 0; j < 3; j++) {
        switch(j) {
            case 0:    printf("---P1---");   break;
            case 1:    printf("---P2---");   break;
            case 2:    printf("---P3---");   break;
        }
        printf("\n");
        printf("CUSTO: ");
        scanf("%d", &GranaPeca[j][0]);
        printf("LUCRO: ");
        scanf("%d", &GranaPeca[j][1]);
    }

    for (int i = 0; i < 3; i++) {
        GranaMes[i][0] = 0; // zera os valores se nao buga tudo
        GranaMes[i][1] = 0; // zera os valores se nao buga tudo
        for (int j = 0; j < 3; j++) {
            GranaMes[i][0] += PecaMes[i][j] * GranaPeca[j][0];
            GranaMes[i][1] += PecaMes[i][j] * GranaPeca[j][1];
        }
    }

    printf("\nGranaMes\n");
    printf("    | CUSTO | LUCRO |\n");
    for (int i = 0; i < 3; i++) {
        switch(i) {
            case 0:    printf("JAN |");   break;
            case 1:    printf("FEV |");   break;
            case 2:    printf("MAR |");   break;
        }
        printf("%5d  |%5d  |\n",GranaMes[i][0], GranaMes[i][1]);
    }
    return 0;
}