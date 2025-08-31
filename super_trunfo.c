#include <stdio.h>

/*
  Super Trunfo — Nível Novato
  Lê e exibe os dados de DUAS cartas (sem if/for/while).
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

    /* Carta 2 */
    char estado2;
    char codigo2[5];
    char cidade2[80];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

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

    /* -------- Saída formatada -------- */
    printf("\n\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}
