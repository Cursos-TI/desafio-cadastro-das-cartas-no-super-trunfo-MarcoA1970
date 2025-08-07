#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

struct CartaSuperTrunfo {
   char estado[3];            //Sigla do estado
   char codigo[4];            //Codigo da carta
   char nomeCidade[100];      //Nome da cidade
   unsigned long int populacao;             //População da cidade
   float area;                //Area da cidade
   float pib;                 //PIB
   int pontosTuristicos;      //Numero de pontos turisticos
   float denspopulacional;    //Densidade populacional
   float pibpercapita;        //PIB per capital
   float SuperPoder;          //Trunfo da carta
};

int main () {
    struct CartaSuperTrunfo carta1;  //dados carta 1
    struct CartaSuperTrunfo carta2;  //dados carta 2

// entrada de dados carta 1

    printf ("Cadastro da Carta 1:\n");

    printf ("Digite a sigla do Estado (Ex: MG): ");
    scanf (" %2s", carta1.estado);

    printf ("Digite o código da carta (ex: A01) : ");
    scanf (" %s", carta1.codigo);

    printf ("Digite o nome da cidade: ");
    scanf (" %[^\n]", carta1.nomeCidade);

    printf ("Digite a população: ");
    scanf ("%lu",& carta1.populacao);

    printf ("Digite a area (km²): ");
    scanf ("%f", &carta1.area);

    printf ("Digite o PIB (em bilhões de reais): ");
    scanf ("%f", &carta1.pib);

    printf ("Digite o número de pontos turísticos: ");
    scanf ("%d", &carta1.pontosTuristicos);

    carta1.denspopulacional = (float)carta1.populacao/carta1.area;
    carta1.pibpercapita = (carta1.pib * 1000000000.0f) / carta1.populacao;

    carta1.SuperPoder = carta1.populacao + carta1.area + carta1.pib + carta1.pontosTuristicos + (1.0/carta1.denspopulacional);

    // entrada de dados carta2

    printf ("Cadastro da Carta 2:\n");

    printf ("Digite a sigla do Estado (Ex: MG): ");
    scanf (" %2s", carta2.estado);

    printf ("Digite o código da carta (ex: A01) : ");
    scanf (" %s", carta2.codigo);

    printf ("Digite o nome da cidade: ");
    scanf (" %[^\n]", carta2.nomeCidade);

    printf ("Digite a população: ");
    scanf ("%lu",& carta2.populacao);

    printf ("Digite a area (km²): ");
    scanf ("%f", &carta2.area);

    printf ("Digite o PIB (em bilhões de reais): ");
    scanf ("%f", &carta2.pib);

    printf ("Digite o número de pontos turísticos: ");
    scanf ("%d", &carta2.pontosTuristicos);

    carta2.denspopulacional = (float)carta2.populacao/carta2.area;
    carta2.pibpercapita = (carta2.pib * 1000000000.0f) / carta2.populacao;

    carta2.SuperPoder = carta2.populacao + carta2.area + carta2.pib + carta2.pontosTuristicos + (1.0/carta2.denspopulacional);


    //impressão Carta 1
    printf ("\ncarta 1:\n");
    printf ("Estado: %s\n", carta1.estado);
    printf ("Código: %s\n", carta1.codigo);
    printf ("Nome da cidade: %s\n", carta1.nomeCidade);
    printf ("População: %lu\n", carta1.populacao);
    printf ("Área: %.2f km²\n", carta1.area);
    printf ("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf ("Número de pontos turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", carta1.denspopulacional);
    printf("PIB per capita: R$ %.2f\n", carta1.pibpercapita);
    printf("SuperPoder da Carta 1: %.2f\n", carta1.SuperPoder);



    //impressão Carta 2
    printf ("\ncarta 2:\n");
    printf ("Estado: %s\n", carta2.estado);
    printf ("Código: %s\n", carta2.codigo);
    printf ("Nome da cidade: %s\n", carta2.nomeCidade);
    printf ("População: %lu\n", carta2.populacao);
    printf ("Área: %.2f km²\n", carta2.area);
    printf ("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf ("Número de pontos turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", carta2.denspopulacional);
    printf("PIB per capita: R$ %.2f\n", carta2.pibpercapita);
    printf("SuperPoder da Carta 2: %.2f\n", carta2.SuperPoder);


    return 0;

     }
