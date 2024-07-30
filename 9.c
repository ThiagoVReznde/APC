#include <stdio.h>
float Notas[3] = {8, 8, 0};
float Maiores[2];


float MaiorCalc();
float MediaCalc();

int main(){
    MaiorCalc(&Notas, Maiores, 3);

    printf("meida %f\n", MediaCalc(Notas, 3));
    printf("maiores %f\n", MediaCalc(Maiores, 2));
}



float MaiorCalc(float Vetor[], float Maiores[], int TamanhoMatriz){
    int i;

    Maiores[0] = Vetor[0];
    for (i = 0; i < TamanhoMatriz+1; i++)
    {
        if (Maiores[0]<Vetor[i+1])
        {
            Maiores[1] = Maiores [0];
            Maiores[0] = Vetor[i+1];
        }
    }
    return (*Maiores);
}

float MediaCalc(float Vetor[], int TamanhoMatriz){
    int i, soma = 0;

    for (i = 0; i < TamanhoMatriz; i++)
    {
        soma+=Vetor[i];
    }
    
    return((float)soma/TamanhoMatriz);
}