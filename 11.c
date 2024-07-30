#include <stdio.h>

int Razao(int a, int b)
{
    if (b != 0)
    {
        return(1);
    }
    else return(0);
}

int main(){
    int a, b;
    float numero;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("\nretornando %d", Razao(a,b));
}