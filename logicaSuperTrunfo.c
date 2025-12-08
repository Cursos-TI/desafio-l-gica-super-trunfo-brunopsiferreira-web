#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // ----- CARTA 1 -----

    // O estado tem uma letra de A até H.
    char estado1;

    // O código da carta é a letra de uma estado seguido com um número, exemplo A01, B02.
    char codigoCarta1[4];

    // O nome da cidade pode ter até 50 caracteres.
    char nomeCidade1[50];

    // Área para entrada de dados
    unsigned long int populacao1; // Convertido para unsigned long int
    // int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // ----- CARTA 2 -----

    // O estado tem uma letra de A até H.
    char estado2;

    // O código da carta é a letra de uma estado seguido com um número, exemplo A01, B02.
    char codigoCarta2[4];

    // O nome da cidade pode ter até 50 caracteres.
    char nomeCidade2[50];

    // Área para entrada de dados
    unsigned long int populacao2; // Convertido para unsigned long int
    // int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    printf("Cadastro de Cartas do Super Trunfo\n");
    printf("Insira os dados das duas cartas conforme solicitado.\n");
    printf("Para códigos, use o formato: letra + dois dígitos (ex: A01, B02).\n");
    printf("\n");

    printf("----- Carta 1 -----\n");
    printf("Digite o estado de A a H: ");
    scanf(" %c", &estado1); // espaço antes de %c ignora quebras de linha anteriores

    printf("Digite o código da carta, exemplo A01: ");
    scanf("%3s", codigoCarta1); // lê no máximo 3 caracteres

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade1); // lê até 49 caracteres ou até nova linha

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1); // Precisei alterar de $d para $lu, por ser unsigned long int

    printf("Digite a area em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("----- Carta 2 -----\n");
    printf("Digite o estado de A a H: ");
    scanf(" %c", &estado2); // espaço antes de %c ignora quebras de linha anteriores

    printf("Digite o código da carta, exemplo A01: ");
    scanf("%3s", codigoCarta2); // lê no máximo 3 caracteres

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade2); // lê até 49 caracteres ou até nova linha

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2); // Precisei alterar de $d para $lu, por ser unsigned long int

    printf("Digite a area em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Área para exibição dos dados da cidade

    printf("\n");
    printf("Cartas Cadastradas\n\n");

    // Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1); // Precisei alterar de $d para $lu, por ser unsigned long int
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("\n");

    // Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2); // Precisei alterar de $d para $lu, por ser unsigned long int
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("\n");

    printf("Cadastro das cartas concluido com sucesso!\n");

    // Desáfio Nível Aventureiro

    // Calculando Densidade Populacional e PIB per Capita

    // --- Carta 1 ---

    // Densidade = população ÷ área
    densidade1 = (float)populacao1 / area1; // População convertido para float

    // PIB per capita = PIB da cidade ÷ população
    // Como o PIB foi dado em bilhões sem formatação, precisa converter em float
    // O pib será em reais, então exige a necessidade de fazer a multiplicação por 1000000000
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; // Não precisa mais colocar o float na frente, pois declarei ele acima
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // --- Carta 2 ---
    densidade2 = (float)populacao2 / area2;             // População convertido para float
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2; // Não precisa mais colocar o float na frente, pois declarei ele acima
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Exibição dos resultados
    printf("\n");
    printf("Resultados\n\n");

    // --- Carta 1 ---
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1); // Precisei alterar de $d para $lu, por ser unsigned long int
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    // Novos dados:
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("\n");

    // --- Carta 2 ---
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2); // Precisei alterar de $d para $lu, por ser unsigned long int
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    // Novos dados:
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("\n");

    // IMPORTANTE - Comentei esse trecho do código (desáfio anterior) para não confundir a saída
    // Dados do Super Poder - Nível mestre
    //printf("\nCartas Cadastradas:\n");

    //printf("Carta 1: %s (%c) - Super Poder: %.2f\n", nomeCidade1, estado1, superPoder1);
    //printf("Carta 2: %s (%c) - Super Poder: %.2f\n", nomeCidade2, estado2, superPoder2);

    // Comparando as cartas
    // 1 será igual true e 0 será igual false


    // IMPORTANTE - Comentei esse trecho do código (desáfio anterior) para não confundir a saída
    //printf("\nComparação de Cartas:\n");

    // População maior vence
    // O operador vai "perguntar", populacao1 é maior que populacao2? Se sim, vai retornar 1 se não vai retornar 2, por isso (? 1:2)
    //printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, populacao1 > populacao2);

    // Área maior vence
    //printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, area1 > area2);

    // PIB maior vence
    //printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, pib1 > pib2);

    // Pontos Turísticos maior vence
    //printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2, pontosTuristicos1 > pontosTuristicos2);

    // Densidade Populacional menor vence
    //printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, densidade1 < densidade2);

    // PIB per Capita maior vence
    //printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2, pibPerCapita1 > pibPerCapita2);

    // Super Poder maior vence
    //printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, superPoder1 > superPoder2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("\nComparação de Cartas Atributo Ponto Turístico:\n\n");

    printf("Carta 1 - %s (%c): %d\n", nomeCidade1, estado1, pontosTuristicos1);
    printf("Carta 2 - %s (%c): %d\n", nomeCidade2, estado2, pontosTuristicos2);

    if (pontosTuristicos1 > pontosTuristicos2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    }

    

    return 0;
}
