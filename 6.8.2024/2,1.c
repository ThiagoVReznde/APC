/*
1. Faça um programa em "C" que lê dois valores e imprime:
- se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
- se o primeiro valor for menor que o segundo a lista de valores do segundo até o primeiro em ordem decrescente;
- se ambos forem iguais a mensagem "valores iguais".
*/

#include <stdio.h>

int main(){
    int A = 1, B = 2;
    if (A > B)
    {
        return(printf("\n%d %d\n", A, B));
    }
    if (B > A)
    {
        return(printf("\n%d %d\n", B, A));
    }
    return(printf("\nos valores sao iguais\n"));
}