#include <stdio.h>

double calculaVelocidadeMedia(int tA,int tB, double distancia){
    double converter_Segundos_Horas = (tB-tA) / 3600.0;
    double kmPorHoras = (distancia) / (converter_Segundos_Horas);
    return kmPorHoras;
}

int main()
{
    
    printf("%f", calculaVelocidadeMedia(61200,63000,60.0));    


    return 0;
}
