#include <stdio.h>

int main() {
    
    // Declaração de variáveis para as duas cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    //~~~~~~~~~~~~~~~~~~~~~~~ Entrada dos dados da Carta 1 ~~~~~~~~~~~~~~~~~~~~~~~//
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    //~~~~~~~~~~~~~~~~~~~~~~~ Entrada dos dados da Carta 2 ~~~~~~~~~~~~~~~~~~~~~~~//
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    //~~~~~~~~~~~~~~~~~~~~~~~ Cálculos ~~~~~~~~~~~~~~~~~~~~~~~//
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    //~~~~~~~~~~~~~~~~~~~~~~~ Exibição das Cartas ~~~~~~~~~~~~~~~~~~~~~~~//
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~ CARTA 1 ~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade: %.2f hab/km²\nPIB per Capita: %.2f reais\n",
        estado1, codigo1, cidade1, populacao1, area1, pib1, pontos1, densidade1, pibPerCapita1);

    printf("\n~~~~~~~~~~~~~~~~~~~~~~~ CARTA 2 ~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade: %.2f hab/km²\nPIB per Capita: %.2f reais\n",
        estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2, densidade2, pibPerCapita2);

    //~~~~~~~~~~~~~~~~~~~~~~~ Comparação ~~~~~~~~~~~~~~~~~~~~~~~//
    // Escolha do atributo para comparação: POPULAÇÃO
    printf("\n~~~~~~~~~ Comparação de Cartas (Atributo: População) ~~~~~~~~~\n");
    printf("Carta 1 - %s: %d habitantes\n", cidade1, populacao1);
    printf("Carta 2 - %s: %d habitantes\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate! Ambas as cartas têm a mesma população.\n");
    }

    return 0;
}
