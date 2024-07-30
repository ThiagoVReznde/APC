#include <stdio.h>
int a, b;


int MaiorCalc(int a, int b){
    if (a > b)  return(a);
    else  return(b);
}

int main(){
    int maior;
    printf("De o valor de a\n");
    scanf("%d", &a);
    printf("De o valor de b\n");
    scanf("%d", &b);

    maior = MaiorCalc(a,b);

    printf("O valor de maior eh: %d\n", maior);
    return(1);
}