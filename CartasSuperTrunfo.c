#include <stdio.h>

int main(){

    //variáveis carta 1
    char    estado1;
    char    codigo1 [5], cidade1 [25];
    int     populacao1, pontosturisticos1;
    float   area1, pib1;
    float   densidade1;
    float   pibpercapita1;
    float   superpoder1;
    char    resultado1 [30];

    //variáveis carta 2
    char    estado2;
    char    codigo2 [5], cidade2 [25];
    int     populacao2, pontosturisticos2;
    float   area2, pib2;
    float   densidade2;
    float   pibpercapita2;
    float   superpoder2;
    char    resultado2 [30];


    //registro carta 1
    printf  ("\nResgistre sua primeira carta\n");

    printf  ("Digite a letra do Estado: \n"); //ex.: A
    scanf   (" %c", &estado1);

    printf  ("Digite o codigo da carta: \n"); //primeiro a letra do Estado e depois o número da carta daquele estado
    scanf   ("%s", codigo1);

    printf  ("Digite o nome da cidade: \n");
    scanf   ("%s", cidade1);

    printf  ("Digite a população da sua cidade: \n");
    scanf   ("%d", &populacao1);

    printf  ("Digite a quantidade de pontos turísticos: \n");
    scanf   ("%d", &pontosturisticos1);

    printf  ("Digite a área da cidade: \n");
    scanf   ("%f", &area1);

    printf  ("Digite o PIB da cidade: \n");
    scanf   ("%f", &pib1);

    densidade1 = populacao1 / area1;

    pibpercapita1 = pib1 / populacao1;

    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (area1 / populacao1);


    //registro carta 2
    printf  ("\nRegistre sua segunda carta\n");

    printf  ("Digite a letra do Estado: \n"); //ex.: A
    scanf   (" %c", &estado2);

    printf  ("Digite o codigo da carta: \n"); //primeiro a letra do Estado e depois o número da carta daquele estado
    scanf   ("%s", codigo2);

    printf  ("Digite o nome da cidade: \n");
    scanf   ("%s", cidade2);

    printf  ("Digite a população da sua cidade: \n");
    scanf   ("%d", &populacao2);

    printf  ("Digite a quantidade de pontos turísticos: \n");
    scanf   ("%d", &pontosturisticos2);

    printf  ("Digite a área da cidade: \n");
    scanf   ("%f", &area2);

    printf  ("Digite o PIB da cidade: \n");
    scanf   ("%f", &pib2);

    densidade2 = populacao2 / area2;

    pibpercapita2 = pib2 / populacao2;

    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (area2 / populacao2);

    //Carta 1
    printf  ("\n***CARTA 1***\n");
    printf  ("Estado: %c \n", estado1);
    printf  ("Código: %s \n", codigo1);
    printf  ("Nome da Cidade: %s \n", cidade1);
    printf  ("População: %d \n", populacao1);
    printf  ("Pontos turísticos: %d \n", pontosturisticos1);
    printf  ("Área em Km²: %.2f Km² \n", area1);
    printf  ("PIB: %.2f bilhões de reais \n", pib1);
    printf  ("Densidade populacional: %.2f hab/km² \n", densidade1);
    printf  ("PIB per Capita: %.2f reais \n", pibpercapita1);
    printf  ("Super Poder: %f \n", superpoder1);

    //Carta 2
    printf  ("\n***CARTA 2***\n");
    printf  ("Estado: %c \n", estado2);
    printf  ("Código: %s \n", codigo2);
    printf  ("Nome da Cidade: %s \n", cidade2);
    printf  ("População: %d \n", populacao2);
    printf  ("Pontos turísticos: %d \n", pontosturisticos2);
    printf  ("Área em Km²: %.2f Km² \n", area2);
    printf  ("PIB: %.2f bilhões de reais \n", pib2);
    printf  ("Densidade populacional: %.2f hab/km² \n", densidade2);
    printf  ("PIB per Capita: %.2f reais \n", pibpercapita2);
    printf  ("Super Poder: %f \n", superpoder2);
    
    //Comparação valores entre cartas

    printf  ("\n***COMPARAÇÃO DE CARTAS***\n");
    printf  (" 1 = carta 1 ganhou ; 0 = carta 2 ganhou\n");
    printf  ("População: %d \n", populacao1 > populacao2);
    printf  ("Área: %d \n", area1 > area2);
    printf  ("PIB: %d \n", pib1 > pib2);
    printf  ("Pontos Turísticos: %d \n", pontosturisticos1 > pontosturisticos2);
    printf  ("Densidade Populacional: %d \n", densidade1 < densidade2);
    printf  ("PIB per Capita: %d \n", pibpercapita1 > pibpercapita2);
    printf  ("Super Poder: %d \n", superpoder1 > superpoder2);
    
}