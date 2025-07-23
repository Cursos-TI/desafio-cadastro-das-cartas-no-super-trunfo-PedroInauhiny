
#include <stdio.h> // Biblioteca padrão para entrada e saída (printf, scanf)

int main() {
    // Declaração das variáveis da carta 1
    char estado[3], codigo_de_carta[4], nome_da_cidade[15];
    // Declaração das variáveis da carta 2
    char estado2[3], codigo_de_carta2[4], nome_da_cidade2[15];
    // Demais atributos das cartas
    int populacao, pontos_turisticos, populacao2, pontos_turisticos2;
    float area, PIB, area2, PIB2;

    // Início do jogo
    printf("Bem vindo ao Super Trunfo Paises Online\nComo jogar: Digite as informacoes de duas cartas para comecar a batalha\n");

    // Coleta de dados da carta 1
    printf("Digite o estado da carta 1: ");
    scanf("%s", estado);

    printf("Digite o codigo de 3 digitos da carta 1 (ex: A01, B03): ");
    scanf("%s", codigo_de_carta);

    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", nome_da_cidade);

    printf("Digite o numero de populacao da carta 1: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade da carta 1: ");
    scanf("%f", &area);

    printf("Digite PIB da cidade da carta 1: ");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos da carta 1: ");
    scanf("%d", &pontos_turisticos);

    // Coleta de dados da carta 2
    printf("Digite agora as informacoes da carta 2\n");

    printf("Digite o estado da sua carta 2: ");
    scanf("%s", estado2);

    printf("Digite o codigo de 3 digitos da carta 2 (ex: A01, B03): ");
    scanf("%s", codigo_de_carta2);

    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", nome_da_cidade2);

    printf("Digite o numero de populacao da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade da carta 2: ");
    scanf("%f", &area2);

    printf("Digite PIB da cidade da carta 2: ");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos da carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos dados da carta 1
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s\nCódigo: %s\nNome da Cidade: %s\n", estado, codigo_de_carta, nome_da_cidade);
    printf("Populacao: %d\nArea: %.2f km²\nPIB: %.2f bilhoes de reais\nPontos Turisticos: %d\n", populacao, area, PIB, pontos_turisticos);

    // Exibição dos dados da carta 2
    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s\nCódigo: %s\nNome da Cidade: %s\n", estado2, codigo_de_carta2, nome_da_cidade2);
    printf("Populacao: %d\nArea: %.2f km²\nPIB: %.2f bilhoes de reais\nPontos Turisticos: %d\n", populacao2, area2, PIB2, pontos_turisticos2);

    return 0; // Fim do programa
}
