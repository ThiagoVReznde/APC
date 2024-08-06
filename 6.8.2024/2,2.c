/*Fazer um programa que imprime a tabela ASCII (código decimal, 
código hexa, caracter) para os códigos de 0 a 127.*/
#include <stdio.h>

int main(){
    int i;
    for (i = 0; i < 128; i++)
    {
        printf("%c", i);
    }
    return(0);
}