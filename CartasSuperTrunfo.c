#include <stdio.h>

int main() {

//declarando variáveis
    char estado1;
    char codigo1 [5], cidade1 [30];
    int populacao1, pontost1;
    float area1, pib1;

    char estado2;
    char codigo2 [5], cidade2 [30];
    int populacao2, pontost2;
    float area2, pib2;


//Registrando carta 1
    printf("Carta 1 \n");

    printf("Digite a letra do Estado: \n"); //Ex.: A, N, H...
    scanf(" %c", &estado1);

    printf("Digite o código: \n"); //Ex: inicial da letra do estado: A e o número 01 (A01)
    scanf("%s", codigo1);

    printf("digite o nome da cidade: \n"); //Iniciar com letra Maiúscula
    scanf("%s", cidade1);

    printf("Digite a populção: \n"); //Número inteiro
    scanf("%d", &populacao1);

    printf("Digite a Quantidade de pontos turísticos: \n"); //Número inteiro
    scanf("%d", &pontost1);

    printf("Digite o tamanho da área em km²: \n"); //Número decimal em km²
    scanf("%f", &area1);

    printf("Digite o PIB: \n"); //Em bilhões de reais
    scanf("%f", &pib1);

//Registrando carta 2
    printf("Carta 2 \n");

    printf("Digite a letra do Estado: \n"); //Ex.: A, N, H...
    scanf(" %c", &estado2);

    printf("Digite o código: \n"); //Ex: inicial da letra do estado: A e o número 01 (A01)
    scanf("%s", codigo2);

    printf("digite o nome da cidade: \n"); //Iniciar com letra Maiúscula
    scanf("%s", cidade2);

    printf("Digite a populção: \n"); //Número inteiro
    scanf("%d", &populacao2);

    printf("Digite a Quantidade de pontos turísticos: \n"); //Número inteiro
    scanf("%d", &pontost2);

    printf("Digite o tamanho da área em km²: \n"); //Número decimal em km²
    scanf("%f", &area2);

    printf("Digite o PIB: \n"); //Em bilhões de reais
    scanf("%f", &pib2);


//Saída de dados Carta 1

    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Pontos Turísticos %d \n", pontost1);
    printf("Área: %f km² \n", area1);
    printf("PIB: %f bilhões de reais \n", pib1);

//Saída de dados Carta 2

    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Pontos Turísticos %d \n", pontost2);
    printf("Área: %f km² \n", area2);
    printf("PIB: %f bilhões de reais \n", pib2);

    return 0;
}