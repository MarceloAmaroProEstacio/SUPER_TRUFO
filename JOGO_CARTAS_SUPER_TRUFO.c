#include <stdio.h>

void limparBuffer() {
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
    float densidadePopulacional1;
    float pibPerCapita1;

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

    // Cálculos da densidade populacional e PIB per capita para a Carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Ajuste de escala do PIB para reais

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Declaração das variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // Entrada de dados para a Carta 2
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

    // Cálculos da densidade populacional e PIB per capita para a Carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // Ajuste de escala do PIB para reais

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}

