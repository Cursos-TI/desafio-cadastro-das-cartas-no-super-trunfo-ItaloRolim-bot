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


    int opcao;
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("0 - Sair\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nComparação: População\n");
            printf("%s: %d\n", carta1.nomeCidade, carta1.populacao);
            printf("%s: %d\n", carta2.nomeCidade, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("Vencedor: %s\n", carta1.nomeCidade);
            } else if (carta2.populacao > carta1.populacao) {
                printf("Vencedor: %s\n", carta2.nomeCidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            printf("\nComparação: Área\n");
            printf("%s: %.3f km²\n", carta1.nomeCidade, carta1.area);
            printf("%s: %.3f km²\n", carta2.nomeCidade, carta2.area);
            if (carta1.area > carta2.area) {
                printf("Vencedor: %s\n", carta1.nomeCidade);
            } else if (carta2.area > carta1.area) {
                printf("Vencedor: %s\n", carta2.nomeCidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("\nComparação: PIB\n");
            printf("%s: %.2f bilhões de reais\n", carta1.nomeCidade, carta1.pib);
            printf("%s: %.2f bilhões de reais\n", carta2.nomeCidade, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("Vencedor: %s\n", carta1.nomeCidade);
            } else if (carta2.pib > carta1.pib) {
                printf("Vencedor: %s\n", carta2.nomeCidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            printf("\nComparação: Pontos Turísticos\n");
            printf("%s: %d\n", carta1.nomeCidade, carta1.pontosTuristicos);
            printf("%s: %d\n", carta2.nomeCidade, carta2.pontosTuristicos);
            if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                printf("Vencedor: %s\n", carta1.nomeCidade);
            } else if (carta2.pontosTuristicos > carta1.pontosTuristicos) {
                printf("Vencedor: %s\n", carta2.nomeCidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 5:
            printf("\nComparação: Densidade Demográfica\n");
            printf("%s: %.2f habitantes/km²\n", carta1.nomeCidade, densidadePopulacional1);
            printf("%s: %.2f habitantes/km²\n", carta2.nomeCidade, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2) {
                printf("Vencedor: %s\n", carta1.nomeCidade);
            } else if (densidadePopulacional2 < densidadePopulacional1) {
                printf("Vencedor: %s\n", carta2.nomeCidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 0:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opção inválida! Por favor, escolha uma opção do menu.\n");
            break;
    }

    
    // Menu dinâmico para escolha de dois atributos diferentes
    int atributo1 = -1, atributo2 = -1;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    char nomeAtributo1[30], nomeAtributo2[30];

    printf("\n=== DESAFIO FINAL: Escolha dois atributos para comparar ===\n");
    printf("Atributos disponíveis:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");

    // Escolha do primeiro atributo
    do {
        printf("Escolha o primeiro atributo (1-5): ");
        scanf("%d", &atributo1);
        if (atributo1 < 1 || atributo1 > 5) {
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (atributo1 < 1 || atributo1 > 5);

    // Menu dinâmico para o segundo atributo
    printf("\nAtributos restantes:\n");
    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }

    do {
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &atributo2);
        if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1);

    // Definir valores e nomes dos atributos escolhidos
    for (int i = 1; i <= 2; i++) {
        int atributo = (i == 1) ? atributo1 : atributo2;
        switch (atributo) {
            case 1:
                if (i == 1) {
                    valor1_carta1 = carta1.populacao;
                    valor1_carta2 = carta2.populacao;
                    snprintf(nomeAtributo1, sizeof(nomeAtributo1), "População");
                } else {
                    valor2_carta1 = carta1.populacao;
                    valor2_carta2 = carta2.populacao;
                    snprintf(nomeAtributo2, sizeof(nomeAtributo2), "População");
                }
                break;
            case 2:
                if (i == 1) {
                    valor1_carta1 = carta1.area;
                    valor1_carta2 = carta2.area;
                    snprintf(nomeAtributo1, sizeof(nomeAtributo1), "Área");
                } else {
                    valor2_carta1 = carta1.area;
                    valor2_carta2 = carta2.area;
                    snprintf(nomeAtributo2, sizeof(nomeAtributo2), "Área");
                }
                break;
            case 3:
                if (i == 1) {
                    valor1_carta1 = carta1.pib;
                    valor1_carta2 = carta2.pib;
                    snprintf(nomeAtributo1, sizeof(nomeAtributo1), "PIB");
                } else {
                    valor2_carta1 = carta1.pib;
                    valor2_carta2 = carta2.pib;
                    snprintf(nomeAtributo2, sizeof(nomeAtributo2), "PIB");
                }
                break;
            case 4:
                if (i == 1) {
                    valor1_carta1 = carta1.pontosTuristicos;
                    valor1_carta2 = carta2.pontosTuristicos;
                    snprintf(nomeAtributo1, sizeof(nomeAtributo1), "Pontos Turísticos");
                } else {
                    valor2_carta1 = carta1.pontosTuristicos;
                    valor2_carta2 = carta2.pontosTuristicos;
                    snprintf(nomeAtributo2, sizeof(nomeAtributo2), "Pontos Turísticos");
                }
                break;
            case 5:
                if (i == 1) {
                    valor1_carta1 = densidadePopulacional1;
                    valor1_carta2 = densidadePopulacional2;
                    snprintf(nomeAtributo1, sizeof(nomeAtributo1), "Densidade Demográfica");
                } else {
                    valor2_carta1 = densidadePopulacional1;
                    valor2_carta2 = densidadePopulacional2;
                    snprintf(nomeAtributo2, sizeof(nomeAtributo2), "Densidade Demográfica");
                }
                break;
        }
    }

    // Comparação dos atributos individualmente
    printf("\n=== Comparação dos atributos escolhidos ===\n");
    printf("%s vs %s\n", carta1.nomeCidade, carta2.nomeCidade);

    // Primeiro atributo
    printf("\nAtributo 1: %s\n", nomeAtributo1);
    printf("%s: %.2f\n", carta1.nomeCidade, valor1_carta1);
    printf("%s: %.2f\n", carta2.nomeCidade, valor1_carta2);
    int vencedor1 = 0;
    if (atributo1 == 5) { // Densidade Demográfica: menor vence
        vencedor1 = (valor1_carta1 < valor1_carta2) ? 1 : (valor1_carta2 < valor1_carta1 ? 2 : 0);
    } else {
        vencedor1 = (valor1_carta1 > valor1_carta2) ? 1 : (valor1_carta2 > valor1_carta1 ? 2 : 0);
    }
    printf("Vencedor do atributo 1: %s\n", vencedor1 == 1 ? carta1.nomeCidade : (vencedor1 == 2 ? carta2.nomeCidade : "Empate"));

    // Segundo atributo
    printf("\nAtributo 2: %s\n", nomeAtributo2);
    printf("%s: %.2f\n", carta1.nomeCidade, valor2_carta1);
    printf("%s: %.2f\n", carta2.nomeCidade, valor2_carta2);
    int vencedor2 = 0;
    if (atributo2 == 5) { // Densidade Demográfica: menor vence
        vencedor2 = (valor2_carta1 < valor2_carta2) ? 1 : (valor2_carta2 < valor2_carta1 ? 2 : 0);
    } else {
        vencedor2 = (valor2_carta1 > valor2_carta2) ? 1 : (valor2_carta2 > valor2_carta1 ? 2 : 0);
    }
    printf("Vencedor do atributo 2: %s\n", vencedor2 == 1 ? carta1.nomeCidade : (vencedor2 == 2 ? carta2.nomeCidade : "Empate"));

    // Soma dos atributos
    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    printf("\n=== Soma dos atributos ===\n");
    printf("%s: %.2f + %.2f = %.2f\n", carta1.nomeCidade, valor1_carta1, valor2_carta1, soma1);
    printf("%s: %.2f + %.2f = %.2f\n", carta2.nomeCidade, valor1_carta2, valor2_carta2, soma2);

    printf("\n=== Resultado Final ===\n");
    if (soma1 > soma2) {
        printf("Vencedor: %s\n", carta1.nomeCidade);
    } else if (soma2 > soma1) {
        printf("Vencedor: %s\n", carta2.nomeCidade);
    } else {
        printf("Empate!\n");
    }


    return 0;
}