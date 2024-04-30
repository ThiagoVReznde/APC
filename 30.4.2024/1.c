#include <stdio.h>
#include <string.h>
char nome[11]; char nomeIn[11];
char BancoVogais[]={'a','e','i','o','u', 
'A', 'B', 'C', 'D', 'E'};
int vogais = 0, i, k;

int main(){
 printf("\nDigite o nome\n");
 scanf("%s", nome);
    //colocar * nas vogais
    for (i = 0; i < strlen(nome); i++)
    {
        for (k = 0; k < strlen(BancoVogais); k++)
        {
        if (nome[i] == BancoVogais[k])
        {
            nome[i]='*';
            vogais++;
        }
        }
    }

    for (i = 0; i < (strlen(nome)); i++)
    {
        nomeIn[(strlen(nome)-i-1)] = nome[i];
    }

puts(nomeIn);
printf("sao %d vogais", vogais);
return(1);
}
