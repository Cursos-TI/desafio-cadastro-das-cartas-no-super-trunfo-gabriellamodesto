#include <stdio.h>

int main() {

    //Declaração de variáveis da primeira carta

    char estado1;
    char codigo1[4];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //Entrada da primeira carta

    printf("Escolha uma estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (exemplo: A01 ou F04): ");
    scanf("%s", codigo1);

    printf("Informe uma cidade: ");
    scanf(" %[^\n]", cidade1); // Para informar nome cidade composto

    printf("Indique o número de habitantes da cidade escolhida: ");
    scanf("%d", &populacao1);

    printf("Informe a área da cidade: ");
    scanf("%f", &area1);

    printf("Indique o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Indique o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    //Declaração de variáveis da segunda carta

    char estado2;
    char codigo2 [4];
    char cidade2 [30];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //Entrada da segunda carta

    printf("Escolha uma estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (exemplo: A01 ou F04): ");
    scanf("%s", codigo2);

    printf("Informe uma cidade do estado escolhido: ");
    scanf(" %[^\n]", cidade2); // Para informar nome de cidade composto

    printf("Indique o número de habitantes da cidade escolhida: ");
    scanf("%d", &populacao2);

    printf("Informe a área da cidade: ");
    scanf("%f", &area2);

    printf("Indique o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Indique o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    //Saída da primeira carta

    printf("Código da Carta: %s\n", codigo1);
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);

    //Saída da segunda carta

    printf("Código da Carta: %s\n", codigo2);
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);

    return 0;

}