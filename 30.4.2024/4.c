//Crie um programa que recebe nome de um produto
//, preço e quantidade. Calcule o preço do estoque.

#include <stdio.h>
#include <string.h>

char nome[3][10];
int i, qnt;
float preco, total;

int main(){
    for (i = 0; i < 3; i++)
    {
    
    printf("\nNome Produto:");
    scanf("%s", nome[i]);

    printf("\nPreco Produto:");
    scanf("%f", &preco);
    
    printf("\nQnt Produto:");
    scanf("%d", &qnt);

    total = qnt*preco;

    printf("\nO estoque de %s tem um custo de:\n R$ %.2f", nome[i], total);
    }
    
return(0);
}
