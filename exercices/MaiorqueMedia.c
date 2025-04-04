#include <stdio.h>

int main() {   
    int tamanhoArray;
    scanf("%d", &tamanhoArray);
    int arrayNumeros[tamanhoArray];
    long long soma = 0;
    
    for(int i = 0; i < tamanhoArray; i++){ 
        scanf("%d", &arrayNumeros[i]);
        soma += arrayNumeros[i];
    }
    
    int media = (int)(soma / tamanhoArray);
    int primeiro = 1;  

    for (int j = 0; j < tamanhoArray; j++) {
        if(arrayNumeros[j] > media) {
            if(!primeiro) printf(" "); 
            printf("%d", arrayNumeros[j]);
            primeiro = 0;
        }
    }

    if(primeiro) {  
        printf("0");
    }
    
    printf("\n");  
    return 0;
}