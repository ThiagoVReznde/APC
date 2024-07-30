#include <stdio.h>
int a, b;


int MenorCalc(int a, int b){
    if (a < b)  return(a);
    else  return(b);
}

int main(){
    int menor;
    printf("De o valor de a\n");
    scanf("%d", &a);
    printf("De o valor de b\n");
    scanf("%d", &b);

    menor = MenorCalc(a,b);

    printf("O valor de menor eh: %d\n", menor);
    return(1);
}