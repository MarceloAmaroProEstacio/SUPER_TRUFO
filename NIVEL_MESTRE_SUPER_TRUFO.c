#include <stdio.h>

// Função para limpar o buffer
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // Declaração de variáveis para as Cartas 1 e 2
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Entrada de dados da Carta 1
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
    scanf("%lu", &populacao1);
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

    // Entrada de dados da Carta 2
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
    scanf("%lu", &populacao2);
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

    // Cálculos para Carta 1
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

    // Cálculos para Carta 2
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Comparação de atributos
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2 ? 1 : 2), (populacao1 > populacao2 ? 1 : 0));
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2 ? 1 : 2), (area1 > area2 ? 1 : 0));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2 ? 1 : 2), (pib1 > pib2 ? 1 : 0));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2 ? 1 : 2), (pontosTuristicos1 > pontosTuristicos2 ? 1 : 0));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2 ? 1 : 2), (densidade1 < densidade2 ? 1 : 0));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2 ? 1 : 2), (pibPerCapita1 > pibPerCapita2 ? 1 : 0));
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2 ? 1 : 2), (superPoder1 > superPoder2 ? 1 : 0));

    return 0;
 /*
 OBS: USEI ESSAS ESPECIFICAÇÕES E DEPOIS FIZ O COMPARATIVO COM O CÓDIGO DO SUPER TRUNFO

Exemplo de Saída:
Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
Densidade Populacional: 8102.47 hab/km²
PIB per Capita: 56724.32 reais

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30
*/

}
