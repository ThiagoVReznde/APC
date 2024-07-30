#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int Rodagem()
{   
    return((rand() % 6) + 1);
}

int main(){
    int dado, i;
    int Um = 0, Dois = 0, Tres = 0, Quatro = 0, Cinco = 0, Seis = 0;
    int const QntTestes = 1000000;
    srand(time(NULL));

    for (i = 0; i < QntTestes+1; i++)
    {
        switch (Rodagem())
        {
        case (1):
            Um++;
            break;
        case (2):
            Dois++;
            break;
        case (3):
            Tres++;
            break;
        case (4):
            Quatro++;
            break;
        case (5):
            Cinco++;
            break;
        default:
            Seis++;
            break;
        }
    }
    
    

    printf("\n-----------------\n");
    printf("\nUm: %d\nDois: %d\nTres: %d\nQuatro: %d\nCinco: %d\nSeis: %d\n", Um, Dois, Tres, Quatro, Cinco, Seis);
    return(1);
}