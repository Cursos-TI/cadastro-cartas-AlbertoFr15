#include <stdio.h>
#include <string.h>

int main() {

    printf("Desafio Cartas Super Trunfo\n\n");

    // ===== CARTA 1 =====
    char estado1[10], codigo1[4], nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    // ===== CARTA 2 =====
    char estado2[10], codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

    // ===== ENTRADA CARTA 1 =====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado\n");
    scanf("%s", estado1);
    printf("Digite o codigo do estado\n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade\n");
    scanf("%s", nomeCidade1);
    printf("Digite a população\n");
    scanf("%lu", &populacao1);
    printf("Digite a area do estado\n");
    scanf("%f", &area1);
    printf("Digite o pib do estado\n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos\n");
    scanf("%d", &pontosTuristicos1);


    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
        
    
    // ===== ENTRADA CARTA 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado\n");
    scanf("%s", estado2);
    printf("Digite o codigo do estado\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade\n");
    scanf("%s", nomeCidade2);
    printf("Digite a população\n");
    scanf("%lu", &populacao2);
    printf("Digite a area do estado\n");
    scanf("%f", &area2);
    printf("Digite o pib do estado\n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos\n");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // ===== MENU DE ATRIBUTOS =====
    int atr1, atr2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    scanf("%d", &atr1);

    // Segundo menu dinâmico
    printf("\nEscolha o SEGUNDO atributo:\n");
    for (int i = 1; i <= 5; i++) {
        if (i != atr1) {
            printf("%d - ", i);
            switch (i) {
                case 1: printf("População\n"); break;
                case 2: printf("Área\n"); break;
                case 3: printf("PIB\n"); break;
                case 4: printf("Pontos Turísticos\n"); break;
                case 5: printf("Densidade Demográfica\n"); break;
            }
        }
    }
    scanf("%d", &atr2);

    // ===== ATRIBUTO 1 =====
    switch (atr1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontosTuristicos1; valor1_c2 = pontosTuristicos2; break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
    }

    // ===== ATRIBUTO 2 =====
    switch (atr2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontosTuristicos1; valor2_c2 = pontosTuristicos2; break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
    }

    // ===== SOMA DOS ATRIBUTOS =====
    float soma1, soma2;

    // Ajuste para densidade (menor vence)
    soma1 = (atr1 == 5 ? -valor1_c1 : valor1_c1) +
            (atr2 == 5 ? -valor2_c1 : valor2_c1);

    soma2 = (atr1 == 5 ? -valor1_c2 : valor1_c2) +
            (atr2 == 5 ? -valor2_c2 : valor2_c2);

    // ===== RESULTADO =====
    printf("\n======= RESULTADO =======\n");
    printf("%s x %s\n\n", nomeCidade1, nomeCidade2);

    printf("Atributo 1: %.2f x %.2f\n", valor1_c1, valor1_c2);
    printf("Atributo 2: %.2f x %.2f\n", valor2_c1, valor2_c2);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nomeCidade1, soma1);
    printf("%s: %.2f\n", nomeCidade2, soma2);

    if (soma1 > soma2)
        printf("\nVencedora: %s\n", nomeCidade1);
    else if (soma2 > soma1)
        printf("\nVencedora: %s\n", nomeCidade2);
    else
        printf("\nEmpate!\n");

    return 0;
}

