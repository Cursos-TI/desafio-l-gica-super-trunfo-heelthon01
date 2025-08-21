//NÍVEL MESTRE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Função para limpar o buffer de entrada
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // Carta 1
    char estado1[50], sigla1[5], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pib_capita1, superPoder1;
    int pontos_turisticos1;

    // Carta 2
    char estado2[50], sigla2[5], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pib_capita2, superPoder2;
    int pontos_turisticos2;

    // Entrada da primeira carta
    printf("=== CARTA 1 ===\n");
    printf("Informe seu estado: ");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0;

    printf("Informe o código da carta: ");
    fgets(sigla1, sizeof(sigla1), stdin);
    sigla1[strcspn(sigla1, "\n")] = 0;

    printf("Informe o nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Informe a população: ");
    scanf("%lu", &populacao1);
    limparBuffer();

    printf("Informe sua área (km²): ");
    scanf("%f", &area1);
    limparBuffer();

    printf("Informe seu PIB (em bilhões): ");
    scanf("%f", &pib1);
    limparBuffer();

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    limparBuffer();

    densidade1 = (area1 != 0.0f) ? (float)populacao1 / area1 : 0.0f;
    pib_capita1 = (populacao1 != 0) ? (pib1 * 1000000000.0f) / (float)populacao1 : 0.0f;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_capita1 + (densidade1 != 0 ? (1.0f / densidade1) : 0.0f);

    // Entrada da segunda carta
    printf("\n=== CARTA 2 ===\n");
    printf("Informe seu estado: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("Informe o código da carta: ");
    fgets(sigla2, sizeof(sigla2), stdin);
    sigla2[strcspn(sigla2, "\n")] = 0;

    printf("Informe o nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Informe a população: ");
    scanf("%lu", &populacao2);
    limparBuffer();

    printf("Informe sua área (km²): ");
    scanf("%f", &area2);
    limparBuffer();

    printf("Informe seu PIB (em bilhões): ");
    scanf("%f", &pib2);
    limparBuffer();

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    limparBuffer();

    densidade2 = (area2 != 0.0f) ? (float)populacao2 / area2 : 0.0f;
    pib_capita2 = (populacao2 != 0) ? (pib2 * 1000000000.0f) / (float)populacao2 : 0.0f;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_capita2 + (densidade2 != 0 ? (1.0f / densidade2) : 0.0f);

    // Exibição das cartas completas
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", sigla1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_capita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", sigla2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_capita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_capita1 > pib_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
