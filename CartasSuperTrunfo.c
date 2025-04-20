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

    char estado1[20], codCarta1[4], cidade1[20];
    unsigned long int populacao1;
    float area1, pib1;
    int turistico1;

    char estado2[20], codCarta2[4], cidade2[20];
    unsigned long int populacao2;
    float area2, pib2;
    int turistico2;

    printf("Super Trunfo!\n");

    printf("Carta da 1° cidade:\n");
    printf("Digite o nome do Estado: ");
    scanf("%s", estado1);
    printf("Digite o código da cidade (A letra do Estado seguida de um número de 01 a 04, sem espaçamento): ");
    scanf("%s", codCarta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite o número da população: ");
    scanf("%lu", &populacao1);
    printf("Digite o número da área em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turistico1);

    printf("\n");

    float densidadePopulacional1 = (float)populacao1 / area1;
    float pibPerCapita1 = (float)pib1 / populacao1;
    //(população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")
    float superPoder1 = (float)(populacao1 + area1 + pib1 + turistico1 + pibPerCapita1) - densidadePopulacional1;

    // Exibição dos dados da primeira carta:
    printf("Carta Um \n");
    printf("Estado: %s\n", estado1);
    printf("Código da cidade: %s\n", codCarta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área em km²: %.2f km² \n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", turistico1);
    printf("Densidade populacional: %.2f Km² \n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais \n", pibPerCapita1);
    printf("O super poder da carta é: %.2f! \n", superPoder1);

    printf("\n");
    printf("\n");

    printf("Carta da 2° cidade:\n");
    printf("Digite o nome do Estado: ");
    scanf("%s", estado2);
    printf("Digite o código da cidade (A letra do Estado seguida de um número de 01 a 04, sem espaçamento): ");
    scanf("%s", codCarta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite o número da população: ");
    scanf("%lu", &populacao2);
    printf("Digite o número da área em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turistico2);

    printf("\n");

    float densidadePopulacional2 = (float)populacao2 / area2;
    float pibPerCapita2 = (float)pib2 / populacao2;
    //(população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")
    float superPoder2 = (float)(populacao2 + area2 + pib2 + turistico2 + pibPerCapita2) - densidadePopulacional2;

    // Exibição dos dados da segunda carta:
    printf("Carta Dois: \n");
    printf("Estado: %s\n", estado2);
    printf("Código da cidade: %s\n", codCarta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área em km²: %.2f\n Km²", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", turistico2);
    printf("Densidade populacional: %.2f Km² \n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais \n", pibPerCapita2);
    printf("O super poder da carta é: %.2f! \n", superPoder2);

    printf("\n");
    printf("\n");

    /*Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), exibindo o resultado da comparação
    (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).*/

    // Comparações com saída formatada
    printf("\nComparação de Cartas:\n");

    printf("População: Carta %d venceu (%d)\n", populacao1 >= populacao2 ? 1 : 2, populacao1 >= populacao2 ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", area1 >= area2 ? 1 : 2, area1 >= area2 ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", pib1 >= pib2 ? 1 : 2, pib1 >= pib2 ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", turistico1 >= turistico2 ? 1 : 2, turistico1 >= turistico2 ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidadePopulacional1 <= densidadePopulacional2 ? 1 : 2, densidadePopulacional1 <= densidadePopulacional2 ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibPerCapita1 >= pibPerCapita2 ? 1 : 2, pibPerCapita1 >= pibPerCapita2 ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoder1 >= superPoder2 ? 1 : 2, superPoder1 >= superPoder2 ? 1 : 0);

    return 0;
}
