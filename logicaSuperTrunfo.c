#include <stdio.h>
#include <string.h>

int main() {
    char estado1[20], estado2[20];
    char codigo_da_carta1[4], codigo_da_carta2[4];
    char nome_da_cidade1[20], nome_da_cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;

    // Entrada da carta 1
    printf("Carta 1:\n");
    printf("Digite o estado: ");
    scanf("%s", estado1);
    printf("Digite o código da carta: ");
    scanf("%s", codigo_da_carta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_da_cidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos1);

    // Entrada da carta 2
    printf("\nCarta 2:\n");
    printf("Digite o estado: ");
    scanf("%s", estado2);
    printf("Digite o código da carta: ");
    scanf("%s", codigo_da_carta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_da_cidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    // Novos dados
    float densidade_populacional1 = populacao1 / area1;
    float densidade_populacional2 = populacao2 / area2;
    float PIB_per_Capita1 = (pib1 * 1000000000) / populacao1;
    float PIB_per_Capita2 = (pib2 * 1000000000) / populacao2;
    int opcao1, opcao2;
   

    // Exibir dados
    printf("\n  CARTA 1 \n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", nome_da_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", numero_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f\n", PIB_per_Capita1);

    printf("\n  CARTA 2 \n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nome_da_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f\n", PIB_per_Capita2);

    // Menu
    
    printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade populacional\n6. PIB per capita\n");
    scanf("%d", &opcao1);

    printf("\nEscolha o SEGUNDO atributo para comparar:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade populacional\n6. PIB per capita\n");
    scanf("%d", &opcao2);
    
    // area de comparaçao dos dados no menu
    
    float v1[6] = {populacao1, area1, pib1, numero_de_pontos_turisticos1, 1 / densidade_populacional1, PIB_per_Capita1};
    float v2[6] = {populacao2, area2, pib2, numero_de_pontos_turisticos2, 1 / densidade_populacional2, PIB_per_Capita2};
    int resultado1 = (v1[opcao1 - 1] > v2[opcao1 - 1]) ? 1 : (v1[opcao1 - 1] < v2[opcao1 - 1] ? -1 : 0);
    int resultado2 = (v1[opcao2 - 1] > v2[opcao2 - 1]) ? 1 : (v1[opcao2 - 1] < v2[opcao2 - 1] ? -1 : 0);
    int soma = resultado1 + resultado2;
    
    printf("\n RESULTADO FINAL \n");
    if (soma > 0)
        printf("A vencedora é: %s!\n", nome_da_cidade1);
    else if (soma < 0)
        printf("A cidade vencedora é: %s!\n", nome_da_cidade2);
    else
        printf("Empate entre %s e %s!\n", nome_da_cidade1, nome_da_cidade2);

    return 0;
}