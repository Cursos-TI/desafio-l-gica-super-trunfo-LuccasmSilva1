#include <stdio.h>



int main() {
    char estado1[10], estado2[10];
    char Codigo_da_carta1[4], Codigo_da_carta2[4];
    char Nome_da_cidade1[10], Nome_da_cidade2[10];
    int populaçao1, populaçao2;
    float area1, area2;
    int Numero_de_pontos_turísticos1, Numero_de_pontos_turísticos2;

    
    printf("Digite o estado: ");
    scanf("%s", &estado1);

    printf("Digite o codigo da carta: ");
    scanf("%c", &Codigo_da_carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &Nome_da_cidade1);

    printf("Digite a população: ");
    scanf("%d", &populaçao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &Numero_de_pontos_turísticos1);

    
    printf("\nEstado: %s\n", estado1);
    printf("Código: %c\n", Codigo_da_carta1);
    printf("Nome da cidade: %s\n", Nome_da_cidade1);
    printf("População: %d\n", populaçao1);
    printf("Área: %.2f km²\n", area1);
    printf("Número de Pontos Turísticos: %d\n", Numero_de_pontos_turísticos1);

    return 0;
}