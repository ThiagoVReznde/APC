#include <stdio.h>
float C = 1.7, J = 1.1, cont = 0;

float main(){
    while(C>J){
        C=(C+0.02);
        J=(J+0.03);
        ++cont;
    }
printf("\nLevarao %.0f anos\n", cont);
return(1);
}
