#include <stdio.h>
float S, Sx, SM, P, Fx;
int n, F;

int main(){
    for(n=0; n<3; ++n) {

        printf("\nSalario %d: ", (n+1));
        scanf("%f", &S);
        printf("Filhos %d: ", (n+1));
        scanf("%d", &F);
    
        if(S<=150)
        ++P;
        if(S>SM)
        SM=S;
        Sx+=S;
        Fx+=F;
    }
Sx=(Sx/n);
Fx=(Fx/n);
P=(P/n);
printf("\nMedia Salario: R$%.2f;\nMedia Filhos: %.1f;\nMaior Salario: %.2f por cento;\nPercentil Pobres: %.2f\n", Sx, Fx, SM, (P*100));
return(1);
}
