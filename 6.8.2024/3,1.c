/*1. Fazer uma função que cacula a enésima potência
 de uma variável real x: f(x, n) = xn
*/
#include <stdio.h>

long double Pow(long double n, int i){
    int cont;
    int mult;
    
    if (i == 0)
    {
        return(1);
    }

    mult = n;

    if (i < 0)
    {
    for (cont = 0; cont > i+1; cont--)
    {
        n=(n*mult);
    }
    n=(1/n);
    return(n);
    }
    
    
    for (cont = 0; cont < i-1; cont++)
    {
        n=(n*mult);
    }
    return(n);

}

int main(){
    float x=2;
    int n=5;
        
    printf("2^%d = %Lf\n", n, Pow(x, n));
    
    return(0);
}