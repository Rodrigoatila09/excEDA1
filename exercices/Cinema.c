#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int F, L;
    scanf("%d %d", &F, &L);
    
    char sala[20][25][3];
    for (int i = 0; i < F; i++) {
        for (int j = 0; j < L; j++) {
            strcpy(sala[i][j], "--");
        }
    }
    
    char lugar[4];
    while (scanf("%s", lugar) != EOF) {
        char fileira = toupper(lugar[0]);
        int num_lugar;
        sscanf(lugar + 1, "%d", &num_lugar);
        
        int i = 'A' + F - 1 - fileira; 
        int j = num_lugar - 1;
        
        if (i >= 0 && i < F && j >= 0 && j < L) {
            strcpy(sala[i][j], "XX");
        }
    }
    
    printf("  ");
    for (int j = 0; j < L; j++) {
        printf("%02d ", j + 1);
    }
    printf("\n");
    
    for (int i = 0; i < F; i++) {
        printf("%c ", 'A' + F - 1 - i);
        for (int j = 0; j < L; j++) {
            printf("%s ", sala[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}