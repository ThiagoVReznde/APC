//Declare um vetor de 10 posições 
//e o preencha com os 10 primeiros números
//impares e o escreva.

#include <stdio.h>
#include <string.h>
int matriz[10], i=0, numero=0;

int main(){
    while(i<10)
    {
        numero++;
        if (((numero+1)%2)==0)
        {
            matriz[i]=numero;
            i++;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", matriz[i]);
    }
    return(1);
}
