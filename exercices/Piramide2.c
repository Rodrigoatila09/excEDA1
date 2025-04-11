#include <stdio.h>

int main(){

    int n_linhas;
    scanf("%d", &n_linhas);

    // char asterisco = "*";
    for(int i = 1; i <= n_linhas; i++){ //* UM FOR PARA MEU NÚMERO DE LINHAS
          
        for (int j = 0; j < n_linhas - i ; j++){  //* OUTRO FOR PARA O ESPAÇAMENTO
            printf(" ");      
        }         
        for (int k = 0; k< (i*2) - 1; k++){ //* E POR ÚLTIMO UM PARA ME DIZER QUANTOS ASTERISCOS TENHO POR LINHA
            printf("*");
        }
        printf("\n");
    }  return 0;
}