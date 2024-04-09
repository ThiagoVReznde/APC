#include <stdio.h>

int main(){
    int n, cont = 0, temp, M, m, x = 0;

    printf("\nQuantos valores serão?\n");
    scanf("%d", &n);

    if(n<=1){
    printf("o valor de N deve ser maior que 1.\n");
    return(2);
    }

    while (cont!=n){
        printf("\nDigite o %d valor\n", (cont+1));
        scanf("%d", &temp);
            if(M<temp)
            M = temp;
            if(m>temp)
            m = temp;
        x = (x+temp);
        
                printf("\nTemp = %d\n", temp);
        ++cont;
    }
    
    x=(x/n);
    printf("\n A media eh: %d\n O maior eh: %d\n O menor eh: %d\n", x, M, m);
    return(1);
}
