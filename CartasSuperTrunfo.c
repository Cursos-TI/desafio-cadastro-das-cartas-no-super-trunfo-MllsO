#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Camilla da Silva de Araujo Osorio - 2025

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado[20];
    char codCarta[4];
    char nomeCidade[20];
    int populacao;
    float area;
    float pib;
    int turistico;

    printf("Super Trunfo!\n");

    printf("Carta da 1° cidade:\n");
    printf("Digite o nome do Estado: ");
    scanf("%s", estado);
    printf("Digite o código da cidade (A letra do Estado seguida de um número de 01 a 04, sem espaçamento): ");
    scanf("%s", codCarta);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);
    printf("Digite o número da população: ");
    scanf("%d", &populacao);
    printf("Digite o número da área em km²: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turistico);

    // Exibição dos dados da primeira carta:
    printf("Carta Um");
    printf("Estado: %s\n", estado);
    printf("Código da cidade: %s\n", codCarta);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", turistico);

    printf("Carta da 2° cidade:\n");
    printf("Digite o nome do Estado: ");
    scanf("%s", estado);
    printf("Digite o código da cidade (A letra do Estado seguida de um número de 01 a 04, sem espaçamento): ");
    scanf("%s", codCarta);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);
    printf("Digite o número da população: ");
    scanf("%d", &populacao);
    printf("Digite o número da área em km²: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turistico);

    // Exibição dos dados da segunda carta:
    printf("Estado: %s\n", estado);
    printf("Código da cidade: %s\n", codCarta);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", turistico);

    return 0;
}
