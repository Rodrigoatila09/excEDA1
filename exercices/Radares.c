#include <stdio.h>

double calculaVelocidadeMedia(int tA,int tB, double distancia){
    double converter_Segundos_Horas = (tB-tA) / 3600.0;
    double kmPorHoras = (distancia) / (converter_Segundos_Horas);
    return kmPorHoras;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){
    if (calculaVelocidadeMedia(tA,tB,distancia) > velocidadeMaxima)
    {
        return 1;
    }else{
        return 0;
    }
}


