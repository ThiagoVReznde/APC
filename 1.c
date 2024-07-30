#include <stdio.h>
int a, b, c;

int CalcDelta(int a,int b,int c){
    return((b*b)-4*a*c);
}

int main(){
    float delta;

    printf("De valor do coeficiente a\n");
    scanf("%d", &a);
    printf("De valor do coeficiente b\n");
    scanf("%d", &b);
    printf("De valor do coeficiente c\n");
    scanf("%d", &c);
    

    delta=CalcDelta(a, b, c);

    printf("\nO valor de delta eh: %d\n", delta);
    return(1);
}