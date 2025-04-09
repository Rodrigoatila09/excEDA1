#include <stdio.h>
#include <string.h>

void converterRomanos(int n, char *resultado) {  
    int valoresEquivalentes[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *valoresRomanos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    resultado[0] = '\0';  

    for(int i = 0; i < 13; i++) {
        while(n >= valoresEquivalentes[i]) {
            strcat(resultado, valoresRomanos[i]);
            n -= valoresEquivalentes[i];
        }
    }
}

int main() {
    int valoresEnviados;
    scanf("%d", &valoresEnviados);
    int arrayDosvalores[valoresEnviados];
    
    for(int i = 0; i < valoresEnviados; i++) {
        scanf("%d", &arrayDosvalores[i]);
    }

    for(int j = 0; j < valoresEnviados; j++) {
        char romano[20] = "";
        converterRomanos(arrayDosvalores[j], romano); 
        printf("%s\n", romano);
    }
    
    return 0;
}