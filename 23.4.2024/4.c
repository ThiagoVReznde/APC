#include <stdio.h>
int abluble, cont = 0;

int main(){
    while (cont!=1)
    {
        printf("\n1- Bom dia!\n2- Boa tarde!\n3- Boa noite!\n4- Sair\n");
        scanf("%d", &abluble);

        switch (abluble)
        {
        case (1):
            printf("Dia! :D\n");
        break;
        case (2):
            printf("Tarde! :D\n");
        break;
        case (3):
            printf("Noite! :D\n");
        break;
        case (4):
            printf("\nSaiu entao\nTchau Tchaaaaaaau!\n");
            cont++;
        break;
        default:
            printf("\namigo nao foi isso oq eu pedi\n");
        break;
        }
    }
    
    return(0);
}
