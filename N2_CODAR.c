#include <stdio.h>

int main (){
int idade,  matricula;
float altura;
char nome[50];

printf("Digite sua idade; \n");
scanf("%d", &idade);
printf("Digite sua Altura: \n");
scanf("%f", &altura);


printf("Digote seu nome: \n");
scanf("%s" , &nome);

printf("Digite sua matricula \n");
scanf("%d" , &matricula);    

printf("Nome do aluno: %s - Matricula: %d \n", nome, matricula);
printf("Idade: %d - Altura: %f", idade, altura);

return 0;


    }


