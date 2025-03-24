
#include <stdio.h>

int main() {
    // Declarar variáveis Produto, int estoque, double valor_unitario
    // int quantidade_minima
    char produtoA[30] = "produto A";
    char produtoB[30] = "produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int EstoqueMinimoA = 500;
    unsigned int EstoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    // Exibir as informações dos produtos
    printf("Produto %s tem estoque %u e o valor unitario e R$ %.2f\n" , produtoA, estoqueA, valorA); 
    printf("Produto %s tem estoque %u e o valor unitario e R$ %.2f\n" , produtoB, estoqueB, valorB);


    // Comparações com o valor mínimo de estoque
    resultadoA = estoqueA > EstoqueMinimoA;
    resultadoB = estoqueB > EstoqueMinimoB;  
    
    printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA); 
    printf("O produto %s tem estoque minimo %d\n", produtoB, resultadoB); 

    // Comparações entre os valores totais dos produtos
    printf("O valor total de A (R$ %.2f) e maior o valor total de B (R$ %.2f): %d\n", 
                                      estoqueA * valorA,
                                      estoqueB * valorB, 
                                      (estoqueA * valorA) > (estoqueB * valorB));


    return 0;
}   
