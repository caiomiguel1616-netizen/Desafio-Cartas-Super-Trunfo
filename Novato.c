#include <stdio.h>

int main() {
    // ===============================
    // BEM-VINDO
    // ===============================
    printf("=====================================\n");
    printf(" BEM-VINDO AO SUPER TRUNFO DE CIDADES\n");
    printf("=====================================\n\n");
    printf("Voce vai cadastrar 2 cartas.\n");
    printf("Para cada carta, informe:\n");
    printf("- Estado (uma letra de A a H)\n");
    printf("- Codigo da carta (ex: A01, B03)\n");
    printf("- Nome da cidade (sem espacos)\n");
    printf("- Populacao\n");
    printf("- Area em km²\n");
    printf("- PIB em bilhoes de reais\n");
    printf("- Numero de pontos turisticos\n\n");
    printf("Vamos comecar!\n\n");

    // ===============================
    // Declaração das variáveis
    // ===============================

    // Carta 1
    char estado1;                  
    char codigo1[4];               
    char nomeCidade1[50];          
    int populacao1;                
    float area1;                   
    float pib1;                    
    int pontosTuristicos1;         

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ===============================
    // Entrada de dados da Carta 1
    // ===============================
    printf("Digite os dados da Carta 1:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade (sem espacos): ");
    scanf("%s", nomeCidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // ===============================
    // Entrada de dados da Carta 2
    // ===============================
    printf("\nDigite os dados da Carta 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade (sem espacos): ");
    scanf("%s", nomeCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ===============================
    // Saída dos dados da Carta 1
    // ===============================
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    // ===============================
    // Saída dos dados da Carta 2
    // ===============================
    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
