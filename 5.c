#include <stdio.h>

int MaiorCalc(int a, int b, int c)
{
    if (a < b && a < c)
    {
        return(a);
    }
    if (b < c)
    {
        return(b);
    }
    else
    {
        return(c);
    }
}

int main(){
    int maior;
    int x, y, z;

    printf("De valor de X\n");
    scanf("%d", &x);
    printf("De valor de Y\n");
    scanf("%d", &y);
    printf("De valor de Z\n");
    scanf("%d", &z);

    maior = MaiorCalc(x, y, z);
    printf("\nO menor valor eh %d\n", maior);
    return(1);
}