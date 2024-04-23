#include <stdio.h>
int abluble;

int main(){

        printf("Digite o Codigo do Produto (de 1 a 7)\n");
        scanf("%d", &abluble);

        switch (abluble)
        {
        case (1):
            printf("Alimento nao perecivel\n");
        break;
        case (2):
            printf("Alimento perecivel\n");
        break;
        case (3):
            printf("Vestuario\n");
        break;
        case (4):
            printf("Higiene Pessoal\n");
        break;
        case (5):
            printf("Limpeza\n");
        break;
        case (6):
            printf("Utensilio Domestico\n");
        break;
        case (7):
            printf("Outros\n");       
        break;
        default:
            printf("Digite um codigo valido na proxima :^)\n");
        break;
        }
    
    return(0);
}
