#include <stdio.h>
float A, B, resul;
char operacao;

int main(){
    printf("\nDe A\n");
    scanf(" %f", &A);
    printf("\nDe B\n");
    scanf(" %f", &B);

    printf("\nDe qual operacao (*, +, -, /)\n");
    scanf(" %c", &operacao);
    
    switch(operacao){
        case ('+'):
            resul = A+B;
            break;
        case ('-'):
            resul = A-B;
            break;
        case ('*'):
            resul = A*B;
            break;
        case ('/'):
            if(B==0){
                printf("\nNao eh possivel divisao por 0\n");
                return(1);
            }
            resul = A/B;
            break;
        default:
            printf("De um operador valido");
    }
    
    printf("\n%f %c %f = %f\n", A, operacao, B, resul);

    return(0);
}
