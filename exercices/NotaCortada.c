#include <stdio.h>



int main(){

    int B;
    int T; 
    int altura = 70;
    int Base = 160;
    scanf("%d", &B);
    scanf("%d", &T);

    int areaRetangulo = Base * altura;  
    int metadeRetangulo = areaRetangulo / 2;
    int areaTrapezio;
    areaTrapezio = ((B + T) * altura)/2;    
    int areaDaiana = areaRetangulo - areaTrapezio;


    if(areaTrapezio > metadeRetangulo){
        printf("1\n");
    }
    else if (areaDaiana > metadeRetangulo){
        printf("2\n");
    }
    else
    {      
        printf("0\n"); 
    }




    return 0;
}