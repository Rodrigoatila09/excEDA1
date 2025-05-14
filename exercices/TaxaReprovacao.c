#include <stdio.h>
#include <stdlib.h>

int main() {
    int D;
    scanf("%d", &D);

    int ano, semestre, m;
    while (scanf("%d %d %d", &ano, &semestre, &m) != EOF) {
        int *codigos = malloc(m * sizeof(int));
        int *reprovacoes = malloc(m * sizeof(int));
        int max_reprov = -1;

        for (int i = 0; i < m; i++) {
            int c, matriculados, aprovados;
            scanf("%d %d %d", &c, &matriculados, &aprovados);
            codigos[i] = c;
            reprovacoes[i] = matriculados - aprovados;
            if (reprovacoes[i] > max_reprov) {
                max_reprov = reprovacoes[i];
            }
        }

        printf("%d/%d\n", ano, semestre);
        int first = 1;
        for (int i = 0; i < D; i++) {
            for (int j = 0; j < m; j++) {
                if (codigos[j] == i && reprovacoes[j] == max_reprov) {
                    if (!first) {
                        printf(" ");
                    }
                    printf("%d", codigos[j]);
                    first = 0;
                }
            }
        }
        printf(" \n\n");

        free(codigos);
        free(reprovacoes);
    }

    return 0;
}