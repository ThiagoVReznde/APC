#include <stdio.h>
float A = 7000000, B = 5000000, cont;

float main(){
    while(A>B){
    A*=1.02;
    B*=1.03;
    ++cont;
    }
printf("\nSerao %.0f anos\n", cont);
return(1);
}
