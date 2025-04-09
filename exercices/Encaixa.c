#include <math.h>
#include <string.h>

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
