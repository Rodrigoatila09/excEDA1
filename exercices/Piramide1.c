#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero_linhas;
    scanf("%d", &numero_linhas);

    int elementos_linha;
    int elementos_linha2;


    for(int i = 1; i <= numero_linhas; i++){
        elementos_linha = i;
        for (int j = 0; j < elementos_linha; j++){
            int repetir = elementos_linha * 1;
            printf("%02d ", repetir);            
        }
        printf("\n");
    }
    //? Piramide que fica em baixo: 
    printf("\n");
    for(int i = 1; i <= numero_linhas; i++){
        for (int j = 1; j <= i ; j++)
        {
            elementos_linha2 = j;
            printf("%02d ", elementos_linha2);
        }
        printf("\n");
    }  

    return 0;
}