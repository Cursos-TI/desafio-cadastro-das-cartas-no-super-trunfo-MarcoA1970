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
    int opcao;                 //para o menu de escolha

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

    carta1.SuperPoder = carta1.populacao + carta1.area + carta1.pib + carta1.pontosTuristicos + carta1.pibpercapita + (1.0/carta1.denspopulacional);

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

    carta2.SuperPoder = carta2.populacao + carta2.area + carta2.pib + carta2.pontosTuristicos + carta2.pibpercapita + (1.0/carta2.denspopulacional);

 // ===== Menu Interativo =====
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparando: %s vs %s\n", carta1.nomeCidade, carta2.nomeCidade);

    switch (opcao) {
        case 1: // População
            printf("População: %lu vs %lu\n", carta1.populacao, carta2.populacao);
            if (carta1.populacao > carta2.populacao)
                printf("Venceu: %s\n", carta1.nomeCidade);
            else if (carta2.populacao > carta1.populacao)
                printf("Venceu: %s\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("Área: %.2f km² vs %.2f km²\n", carta1.area, carta2.area);
            if (carta1.area > carta2.area)
                printf("Venceu: %s\n", carta1.nomeCidade);
            else if (carta2.area > carta1.area)
                printf("Venceu: %s\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("PIB: %.2f bilhões vs %.2f bilhões\n", carta1.pib, carta2.pib);
            if (carta1.pib > carta2.pib)
                printf("Venceu: %s\n", carta1.nomeCidade);
            else if (carta2.pib > carta1.pib)
                printf("Venceu: %s\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("Pontos Turísticos: %d vs %d\n", carta1.pontosTuristicos, carta2.pontosTuristicos);
            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("Venceu: %s\n", carta1.nomeCidade);
            else if (carta2.pontosTuristicos > carta1.pontosTuristicos)
                printf("Venceu: %s\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade Demográfica (menor vence)
            printf("Densidade: %.2f hab/km² vs %.2f hab/km²\n", carta1.denspopulacional, carta2.denspopulacional);
            if (carta1.denspopulacional < carta2.denspopulacional)
                printf("Venceu: %s\n", carta1.nomeCidade);
            else if (carta2.denspopulacional < carta1.denspopulacional)
                printf("Venceu: %s\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        case 6: // PIB per Capita
            printf("PIB per Capita: R$ %.2f vs R$ %.2f\n", carta1.pibpercapita, carta2.pibpercapita);
            if (carta1.pibpercapita > carta2.pibpercapita)
                printf("Venceu: %s\n", carta1.nomeCidade);
            else if (carta2.pibpercapita > carta1.pibpercapita)
                printf("Venceu: %s\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        case 7: // Super Poder
            printf("Super Poder: %.2f vs %.2f\n", carta1.SuperPoder, carta2.SuperPoder);
            if (carta1.SuperPoder > carta2.SuperPoder)
                printf("Venceu: %s\n", carta1.nomeCidade);
            else if (carta2.SuperPoder > carta1.SuperPoder)
                printf("Venceu: %s\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }
    
    return 0;

}