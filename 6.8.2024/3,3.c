/*
Dado que podemos calcular ex por:
ex = 1 + x + x2/2! + x3/3! + ...
Fazer um trecho de programa em "C" que lê um valor 
para x e calcula o valor de ex. O valor deve ser 
calculado enquanto o termo calculado for maior que 10E-6.
*/

#include <stdio.h>

float Fatorial(int x);
double EN(int n);
long double Pow(long double n, int i);

int main(){
    int n;
    float en;

    for (n = -10; EN(n) < 1000000; n++)
    {
        printf("e^%d = %f\n", n, EN(n));
    }
    
    return(0);
}




double EN(int n){
    int i;
    double resultado = 1;

    for (i = 1; i < n+1; i++)
    {
        resultado = (Pow(n, i)/Fatorial(i))+resultado;
    }   
    return(resultado);
}
    

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

float Fatorial(int x){
    int i, resultado=1;
    for (i = 0; i < x; i++)
    {
        resultado = (x-i)*resultado;
    }
    return(resultado);
}