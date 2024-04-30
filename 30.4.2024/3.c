//Crie um programa que recebe nome de um produto
//, preço e quantidade. Calcule o preço do estoque.

#include <stdio.h>
#include <string.h>

char nome[10];
int i, qnt;
float preco, total;

int main(){
    
    printf("\nNome Produto");
    scanf("%s", nome);
    printf("\nPreco Produto");
    scanf("%f", &preco);
    printf("\nQnt Produto");
    scanf("%d", &qnt);
    
    total = qnt*preco;

    printf("O estoque de %s tem um custo de:\n R$ %.2f", nome, total);
return(0);
}
