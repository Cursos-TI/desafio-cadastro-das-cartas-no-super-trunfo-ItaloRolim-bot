#include <stdio.h>

typedef struct {
    char estado[20];
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area; // km²
    float pib;  // bilhões de reais
    int pontosTuristicos;
} CartaSuperTrunfo;

int main() {
    CartaSuperTrunfo carta1 = {
        "Pernambuco",
        "PE01",
        "Recife",
        1653461,
        218.435,
        88.65,
        25
    };

    CartaSuperTrunfo carta2 = {
        "Amazonas",
        "AM02",
        "Manaus",
        2219580,
        11401.093,
        109.20,
        20
    };

    printf("Carta 1:\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.3f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n\n", carta1.pontosTuristicos);

    printf("Carta 2:\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.3f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    
    float densidadePopulacional1 = carta1.populacao / carta1.area;
    float densidadePopulacional2 = carta2.populacao / carta2.area;

    float pibPerCapita1 = carta1.pib * 1000000000 / carta1.populacao;
    float pibPerCapita2 = carta2.pib * 1000000000 / carta2.populacao;

    printf("\nDensidade Populacional da Carta 1: %.2f habitantes/km²\n", densidadePopulacional1);
    printf("PIB per Capita da Carta 1: R$ %.2f\n", pibPerCapita1);

    printf("\nDensidade Populacional da Carta 2: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per Capita da Carta 2: R$ %.2f\n", pibPerCapita2);


    // Calcular o Super Poder de cada carta
    float superPoder1 = carta1.populacao +
                        carta1.area +
                        carta1.pib +
                        carta1.pontosTuristicos +
                        pibPerCapita1 +
                        (1.0f / densidadePopulacional1);

    float superPoder2 = carta2.populacao +
                        carta2.area +
                        carta2.pib +
                        carta2.pontosTuristicos +
                        pibPerCapita2 +
                        (1.0f / densidadePopulacional2);

    printf("\nSuper Poder da Carta 1: %.2f\n", superPoder1);
    printf("Super Poder da Carta 2: %.2f\n", superPoder2);

    // Comparação dos atributos
    printf("\nComparação dos atributos:\n");

    printf("População: %s\n", carta1.populacao > carta2.populacao ? "Carta 1 vence" : "Carta 2 vence");
    printf("Área: %s\n", carta1.area > carta2.area ? "Carta 1 vence" : "Carta 2 vence");
    printf("PIB: %s\n", carta1.pib > carta2.pib ? "Carta 1 vence" : "Carta 2 vence");
    printf("Número de Pontos Turísticos: %s\n", carta1.pontosTuristicos > carta2.pontosTuristicos ? "Carta 1 vence" : "Carta 2 vence");
    printf("PIB per Capita: %s\n", pibPerCapita1 > pibPerCapita2 ? "Carta 1 vence" : "Carta 2 vence");
    printf("Densidade Populacional: %s\n", densidadePopulacional1 < densidadePopulacional2 ? "Carta 1 vence" : "Carta 2 vence");
    printf("Super Poder: %s\n", superPoder1 > superPoder2 ? "Carta 1 vence" : "Carta 2 vence");


    // Escolha do atributo para comparação
    // Neste exemplo, vamos comparar o atributo "População"
    // Você pode trocar para "area", "pib", "densidadePopulacional", ou "pibPerCapita" se desejar

    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d\n", carta1.nomeCidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n", carta2.nomeCidade, carta2.estado, carta2.populacao);

    // Lógica de decisão para determinar a carta vencedora
    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    // Exemplo de comparação usando Densidade Populacional (menor valor vence)
    /*
    printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");
    printf("Carta 1 - %s (%s): %.2f habitantes/km²\n", carta1.nomeCidade, carta1.estado, densidadePopulacional1);
    printf("Carta 2 - %s (%s): %.2f habitantes/km²\n", carta2.nomeCidade, carta2.estado, densidadePopulacional2);

    if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (densidadePopulacional2 < densidadePopulacional1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("Resultado: Empate!\n");
    }
    */


    return 0;
}
