#include <stdio.h>

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Entrada de dados para a Carta 1
    printf("Digite os dados da Carta 1:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf(" %3s", codigo1);
    limparBuffer();

    printf("Nome da Cidade: ");
    scanf("%[^\n]", nomeCidade1);
    limparBuffer();

    printf("População: ");
    scanf("%d", &populacao1);
    limparBuffer();

    printf("Área (km²): ");
    scanf("%f", &area1);
    limparBuffer();

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    limparBuffer();

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    limparBuffer();

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    //____________________________________________________________________________________________________________________

    // Entrada de dados para a Carta 2
    // Declaração das variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("\nDigite os dados da Carta 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf(" %3s", codigo2);
    limparBuffer();

    printf("Nome da Cidade: ");
    scanf("%[^\n]", nomeCidade2);
    limparBuffer();

    printf("População: ");
    scanf("%d", &populacao2);
    limparBuffer();

    printf("Área (km²): ");
    scanf("%f", &area2);
    limparBuffer();

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    limparBuffer();

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    limparBuffer();

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}


