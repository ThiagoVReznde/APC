#include <stdio.h>
float compra;
char cliente;

int main(){
    printf("\nDe o total de sua comrpa\n");
    scanf(" %f", &compra);
    printf("\nvoce eh cliente vip ou premium?(V para vip, P para premium)\n");
    scanf(" %c", &cliente);

    switch (cliente)
    {
    case 'v':
        compra*=0.85;
        break;
    case 'p':
        compra*=0.7;
        break;
    default:
        compra*=0.9;
        printf("\nVoce tem direito a um desconto, mas eh maior se for cliente ;)\n");
        break;
    }

    printf("O total eh R$%.2f\n", compra);
    return(0);
}
