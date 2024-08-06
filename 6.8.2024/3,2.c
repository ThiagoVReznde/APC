/*
2. Fazer uma função que calcula o fatorial de um número. 
Implementar uma versão recursiva e uma versão com laço.
*/
#include <stdio.h>

int Fatorial(int x){
    int i, resultado=1;
    for (i = 0; i < x; i++)
    {
        resultado = (x-i)*resultado;
    }
    return(resultado);
}

int main(){
    int x;
    scanf("%d", &x);
    printf("%d! = %d\n", x, Fatorial(x));
    return(0);
}