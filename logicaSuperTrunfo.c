#include <stdio.h>




int main() {
    char estado1[20],estado2[20];
    char codigo_da_carta1[4],codigo_da_carta2[4];
    char nome_da_cidade1[20] , nome_da_cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
    float densidade_Populacional1, densidade_populacional2;
    float PIB_per_Capita1, PIB_per_Capita2;
    float Super_Poder1 , Super_Poder2 ;

    // Dados da carta 1
    printf("Carta 1 :\n");

    printf("digite o estado: ");
    scanf("%s", estado1);

    printf("digite o codigo da carta: ");
    scanf("%s", codigo_da_carta1);

    printf("digite o nome da cidade: ");
    scanf("%s", nome_da_cidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos1);

    // Dados da carta 2
    printf("\nCarta 2 :\n");

    printf("digite o estado: ");
    scanf("%s", estado2);

    printf("digite o codigo da carta: ");
    scanf("%s", codigo_da_carta2);

    printf("digite o nome da cidade: ");
    scanf("%s", nome_da_cidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    // novos dados
    densidade_Populacional1 = populacao1 / area1;
    densidade_populacional2 = populacao2 / area2;
    PIB_per_Capita1 = (pib1 * 1000000000)/populacao1;
    PIB_per_Capita2 = (pib2 * 1000000000)/populacao2;
    float densidade1 = 1/densidade_Populacional1;
    float densidade2 = 1/densidade_populacional2;
    int escolha_do_jogador;
    int maior;
    
    
    //dados da carta 1
    printf("\nCarta 1 :\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo_da_carta1);
    printf("Nome da cidade: %s\n", nome_da_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_Populacional1);
    printf("PIB per capita: %.2f reais\n", PIB_per_Capita1);
 

    //dados da carta 2
    printf("\nCarta 2 :\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo_da_carta2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n", PIB_per_Capita2);

    
    // Menu do jogo
    printf("\nmenu do jogo\n");
    printf("1.comparar populaçâo\n");
    printf("2.comparar a area\n");
    printf("3.comparar o pib\n");
    printf("4.comparar o numero de pontos turisticos\n");
    printf("5.comparar a densidade populacional\n");
    printf("6.comparar o pib per capita\n");
    printf("\nescolha do jogaror:");
    scanf("%d", &escolha_do_jogador);


    switch (escolha_do_jogador) {
    case 1:
        maior = (populacao1 > populacao2) ? 1 : 2;
        printf("A População: %d ganhou\n" , maior);
        break;

    case 2:
        maior = (area1 > area2) ? 1 : 2 ; 
        printf("A Área: %d ganhou\n", maior);
        break;

    case 3:
        maior = (pib1 > pib2) ? 1 : 2 ;
        printf("O PIB: %d ganhou\n", maior);
        break;

    case 4:
        maior = (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2) ? 1 : 2 ;
        printf("A cidade: %d tem mais pontos turísticos\n",maior);    
        break;

    case 5:
        maior = (densidade1 < densidade2) ? 1 : 2 ;
        printf("A densidade populacional: %d ganhou\n",maior);
        break;

    case 6:
        maior = (PIB_per_Capita1 > PIB_per_Capita2) ? 1 : 2 ;
        printf("O PIB per capita: %d ganhou\n", maior);
        break;

    default:
        printf("Número inválido\n");
        break;
}
    
    return 0;
}