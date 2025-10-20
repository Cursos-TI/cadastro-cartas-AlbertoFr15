#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  printf("Desafio Cartas Super Trunfo\n");
  
  //Declaração das variaveis da primeira carta
  char estado1;
  char codigo1[4];
  char nomeCidade1[50];
  int populacao1;
  float area1, pib1;
  int pontosTuristicos1;

  //Declaração das variaveis da segunda carta
  char estado2;
  char codigo2[4];
  char nomeCidade2[50];
  int populacao2;
  float area2, pib2;
  int pontosTuristicos2;

  //Entrada de dados da primeira carta
  printf("===Cadastro da carta 1===\n");
  printf("Estado (A-H): ");
  scanf("%c",&estado1);

  printf("Codigo da carta (ex: A01):\n");
  scanf("%s",codigo1);

  printf("Nome da Cidade:\n");
  scanf("%[^\n]",nomeCidade1); //Lê string com espaços

  printf("População:");
  scanf("%d",&populacao1);

  printf("Area (em km²):");
  scanf("%f",&area1);

  printf("PIB (em reais):");
  scanf("%f",&pib1);
  
  printf("Numero de Pontos Turisticos: ");
  scanf("%d",&pontosTuristicos1);

  //Entrada de dados da segunda carta
  printf("\n===Cadastro da Carta2===\n");
  printf("Estado(A-H):\n ");
  scanf("%c", &estado2);

  printf("Codigo da carta (ex: B02): ");
  scanf("%s", codigo2);

  printf("Nome da Cidade: ");
  scanf("%[^\n]", nomeCidade2);

  printf("Populacao: ");
  scanf("%d", &populacao2);

  printf("Area(em km²): ");
  scanf("%f", &area2);

  printf("PIB (em reais): ");
  scanf("%f", &pib2);

  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos2);

  //Exibição dos dados
  printf("\n======================\n");
  printf("Carta1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %d\n", nomeCidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km²\n", area1);
  printf("PIB: %.2f de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

  printf("Carta2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %d\n", nomeCidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %.2f de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

  printf("================================\n");

return 0;
} 
