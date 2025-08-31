#include <stdio.h>

/*
  Super Trunfo — Nível Aventureiro
  Lê e exibe os dados de DUAS cartas (sem if/for/while).
  Adiciona cálculos de densidade populacional e PIB per capita.
  Observação: use ponto para decimais (ex.: 1521.11), não vírgula.
*/

int main(void) {
    /* Carta 1 */
    char estado1;
    char codigo1[5];      /* ex.: "A01" (3+1), deixei 5 por folga */
    char cidade1[80];     /* suporta nome com espaços */
    int populacao1;
    float area1;
    float pib1;           /* em bilhões de reais */
    int pontos1;
    float densidade1;     /* Densidade populacional (hab/km²) */
    float pib_per_capita1; /* PIB per capita (reais por habitante) */

    /* Carta 2 */
    char estado2;
    char codigo2[5];
    char cidade2[80];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;     /* Densidade populacional (hab/km²) */
    float pib_per_capita2; /* PIB per capita (reais por habitante) */

    /* -------- Entrada Carta 1 -------- */
    printf("=== Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código (ex: A01): ");
    scanf(" %4s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);  /* lê até a quebra de linha, aceita 
espaços */

    printf("Populacao (inteiro): ");
    scanf("%d", &populacao1);

    printf("Area em km2 (use ponto, ex: 1521.11): ");
    scanf("%f", &area1);

    printf("PIB em bilhões (use ponto, ex: 699.28): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos (inteiro): ");
    scanf("%d", &pontos1);

    /* -------- Entrada Carta 2 -------- */
    printf("\n=== Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código (ex: A01): ");
    scanf(" %4s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao (inteiro): ");
    scanf("%d", &populacao2);

    printf("Area em km2 (use ponto, ex: 1200.25): ");
    scanf("%f", &area2);

    printf("PIB em bilhões (use ponto, ex: 300.50): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos (inteiro): ");
    scanf("%d", &pontos2);

    /* -------- CÁLCULOS NIVEL AVENTUREIRO -------- */
    /* Cálculo da densidade populacional (hab/km²) */
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    
    /* Cálculo do PIB per capita (R$ por habitante) */
    /* PIB em bilhões, então multiplicamos por 1.000.000.000 para 
converter para reais */
    pib_per_capita1 = (pib1 * 1000000000.0f) / populacao1;
    pib_per_capita2 = (pib2 * 1000000000.0f) / populacao2;

    /* -------- Saída formatada -------- */
    printf("\n\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
