#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    scanf("%d", &n);

    int valores;
    int **matriz;
    
    matriz = malloc(n * sizeof(int*));
    for (int i = 0;  i < n ; i++){
        matriz[i] = malloc(n * sizeof(int));
    }    

    for (int camada = 0; camada < (n + 1) / 2; camada++) {
        for (int i = camada; i < n - camada; i++) {
            for (int j = camada; j < n - camada; j++) {
                matriz[i][j] = camada + 1;
            }
        }
    }


    for(int i = 0; i<n; i++){
        for(int j = 0;j<n; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
        }
 





    return 0;

}

