#include <stdio.h>
#include <string.h>
#include <math.h>

int descobrirLenNumero(int number_B){
    char numeroString[100];
    sprintf(numeroString, "%d", number_B);
    return strlen(numeroString);
}

int encaixa(int a, int b){
    int tamanho_b = descobrirLenNumero(b);
    int potencia = (int) pow(10, tamanho_b);

    if (a % potencia == b) {
        return 1;
    } else {
        return 0;
    }
}


int segmento(int a, int b){
    char  numero_A[100], numero_B[100];

    int maior = a > b ? a : b;
    int menor = a < b ? a : b;

    sprintf(numero_A, "%d",a);
    sprintf(numero_B, "%d",b);
    
    if (maior == a)
    {
        if (strstr(numero_A,numero_B)){
            return 1;
        }
        else{
            return 0;
        }
    }else if(maior == b){
        if(strstr(numero_B,numero_A)){
            return 1;
        }
        else{
            return 0;
        }
    }
    
}

