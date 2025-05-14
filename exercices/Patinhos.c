#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define INF 1000000000

int main(){
    int P;
    if (scanf("%d\n", &P) != 1) return 0;

    char **map = NULL, line[1005];
    int rows = 0, cols = 0;
    while (fgets(line, sizeof(line), stdin)) {
        int len = strcspn(line, "\n");
        if (len == 0) continue;
        line[len] = 0;
        if (rows == 0) cols = len;
        map = realloc(map, (rows + 1) * sizeof(char *));
        map[rows] = malloc(cols + 1);
        strcpy(map[rows], line);
        rows++;
    }

    int N = rows * cols;
    int *dist = malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) dist[i] = INF;
    int *dq = malloc(N * sizeof(int)), head = 0, tail = 0;

    int sx = 0, sy = 0, ex = 0, ey = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            if (map[i][j] == 'S') { sx = i; sy = j; }
            if (map[i][j] == 'E') { ex = i; ey = j; }
        }

    int start = sx * cols + sy;
    dist[start] = 0;
    dq[tail++] = start;

    int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};
    while (head < tail) {
        int u = dq[head++];
        int ux = u / cols, uy = u % cols, du = dist[u];
        for (int k = 0; k < 4; k++) {
            int vx = ux + dx[k], vy = uy + dy[k];
            if (vx < 0 || vx >= rows || vy < 0 || vy >= cols) continue;
            char c = map[vx][vy];
            if (c == '#') continue;
            int w = (c == 'o');
            int v = vx * cols + vy;
            if (du + w < dist[v]) {
                dist[v] = du + w;
                if (w == 0) dq[--head] = v;
                else        dq[tail++] = v;
            }
        }
    }

    int holes = dist[ex * cols + ey];
    int surv = P > holes ? P - holes : 0;
    if (surv == 0)           printf("Todos morreram :)\n");
    else if (surv == P)      printf("Nenhum morreu :(\n");
    else                     printf("%d encontraram o vovo\n", surv);

    for (int i = 0; i < rows; i++) free(map[i]);
    free(map);
    free(dist);
    free(dq);
    return 0;
}
