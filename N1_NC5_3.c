#include <stdio.h>

int main(){   

   
        int idade;
        float altura;
        char opcao;
        char nome[20];
        // sintaxe scanf
        // scanf("formato1", "formato2, &variavel1, variavel2, ...");
        
        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        printf("A idade é: %d\n", idade);

        printf("Digite a sua altura: ");
        scanf("%f", &altura);
        printf("A altura é: %.2f\n", altura);

        printf("Digite a opcao: ");
        scanf(" %c", &opcao);
        printf("A opcao é: %c\n", opcao);

        printf("Digite seu nome: ");
        scanf("%s", &nome);
        printf("O nome é: %s\n", nome);
        
}