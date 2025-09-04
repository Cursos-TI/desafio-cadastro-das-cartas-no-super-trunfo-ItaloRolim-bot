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


    return 0;
}