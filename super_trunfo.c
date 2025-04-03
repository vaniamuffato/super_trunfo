#include <stdio.h>
#include <string.h>

int main(){

    //declarar as variáveis de acordo com seu tipo
    char estado1[2], estado2[2];
    char codigo1[3], codigo2[3], cidade1[30], cidade2[30];
    int pop1, pop2, ptstur1, ptstur2;
    float area1, area2, pib1, pib2, denspop1, denspop2, pibpc1, pibpc2;

    printf("Bem vindo ao cadastro de cartas do Super Trunfo - Cidades!\n");
    
    //solicitar informações ao usuário e gravar as mesmas nas variáveis
    printf("Você vai digitar as informações da primeira carta.\n");
    printf("Digite o nome da cidade: ");
    fgets(cidade1, 30, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;
    printf("Digite a sigla do Estado: ");
    scanf("%c", &estado1);
    setbuf(stdin, NULL);
    printf("Digite a população da cidade: ");
    scanf("%d", &pop1);
    printf("Digite a área da cidade: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &ptstur1);
    
    printf("\nAgora você vai digitar as informações da segunda carta.\n");
    setbuf(stdin, NULL);
    printf("Digite o nome da cidade: ");
    fgets(cidade2, 30, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;
    printf("Digite a sigla do Estado: ");
    scanf("%s", &estado2);
    printf("Digite a população da cidade: ");
    scanf("%d", &pop2);
    printf("Digite a área da cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &ptstur2);

    //calcular densidade populacional e pib per capita
    denspop1 = (float) pop1 / area1;
    denspop2 = (float) pop2 / area2;
    pibpc1 = (float) pib1 / pop1;
    pibpc2 = (float) pib2 / pop2;

    //imprimir na tela as informações de cada carta
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: A01\n", estado1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", ptstur1);
    printf("Densidade populacional: %.2f hab/m²\n", denspop1);
    printf("PIB per Capita: %.2f reais\n", pibpc1);

    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: A02\n", estado2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", ptstur2);
    printf("Densidade populacional: %.2f hab/m²\n", denspop2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);

    //finalizar o programa
    return 0;

}