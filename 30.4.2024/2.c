//Construa um programa que leia dois 
//nomes de pessoas e imprima em ordem alfabética.

#include <stdio.h>
#include <string.h>

char nome1[10], nome2[10];

int main(){
    printf("Digite 2 nomes\n");
    scanf("%s", nome1);
    scanf("%s", nome2);

    if (nome1[0] <= nome2[0])
        printf("Nomes em ordem:\n%s\n%s\n", nome1, nome2);
    else 
        printf("Nomes em ordem:\n%s\n%s\n", nome2, nome1);
    
    return(0);
}
