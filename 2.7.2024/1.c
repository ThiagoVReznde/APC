#include <stdio.h>
#include <string.h>
int matriz[12], x, y, i;

int main(){
    for (i = 0; i < 12; i++)
    {
        printf("Valor %d: ", i+1);
        scanf("%d", &matriz[i]);
    }
    printf("De a posicao X e Y");
    scanf("%d %d", &x, &y);
    while (x>12 || y>12 || x < 0 || y < 0)
    {
        printf("Favor de posicoes validas\n");
        scanf("%d %d", &x, &y);
    }
    
    printf("Os numeros sao: %d %d", matriz[x], matriz[y]);
    return(1);
}
