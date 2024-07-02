//O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo de substituição na qual cada letra do texto é substituída por outra, que se apresenta no alfabeto abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três  posições. ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que faça uso desse Código de César (3 posições), entre com uma string e retorne a string codificada. Exemplo:
//String: a ligeira raposa marrom saltou sobre o cachorro cansado
//Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR


#include <stdio.h>
#include <string.h>

char teste[99];
char certo[]="D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR";
const CIFRA = 3;
int i, cu;


int main()
{
    gets(teste);
    printf("%s\n", teste);

    for (i = 0; i < strlen(teste); i++)
    {
        teste[i] = toupper(teste[i]);

        if (teste[i]+CIFRA>=91)
        {
            teste[i]-=23;
            printf("- %c\n", teste[i]);
            teste[i]-=CIFRA;
        }

        if (teste[i]==32)
            teste[i]-=CIFRA;

        teste[i]+=CIFRA;
    }

    printf("\nOutput: ");
        puts(teste);
        printf("\n---------------------\n");
        puts(certo);

    printf("\nResultado stcmp: %d\n", strncmp(teste, certo, 56));
    return 1;
}


