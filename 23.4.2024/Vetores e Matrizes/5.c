#include <stdio.h>

int num[3] = {5,2,8}, i, par, n;

int main(){
    printf("Qnts valores?\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("De o %dº valor\n", (i+1));
        scanf("%d", &num[i]);

        if(num[i]%2==0)
            par++;

    }

printf("\ntem %d pares\n", par);
return(0);
}
