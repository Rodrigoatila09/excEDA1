#include <stdio.h>
#include <math.h>


int main(){
    
    long long a,b;
    scanf("%lld %lld", &a , &b);
    double exponencialLucas = pow(a,b);
    long long n;
    scanf("%lld", &n);
    
    long long acumulador = 1;

    for(int i = 1; i <= n; i++){
        acumulador *= i;
        
    }   

    if (exponencialLucas >= acumulador)
    {
        printf("Lucas");
    }else{
        printf("Pedro");
    }
    



    return 0;
}
