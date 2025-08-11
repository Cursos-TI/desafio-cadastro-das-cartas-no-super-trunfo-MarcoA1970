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

// Função para mostrar o menu dinâmico, excluindo a opção 'excluir'
void exibirMenu(int excluir) {
    printf("\nEscolha um atributo:\n");
    if (excluir != 1) printf("1 - População\n");
    if (excluir != 2) printf("2 - Área\n");
    if (excluir != 3) printf("3 - PIB\n");
    if (excluir != 4) printf("4 - Pontos Turísticos\n");
    if (excluir != 5) printf("5 - Densidade Demográfica (menor vence)\n");
    if (excluir != 6) printf("6 - PIB per Capita\n");
    if (excluir != 7) printf("7 - Super Poder\n");
    printf("Opção: ");
}

// Função que retorna o valor do atributo solicitado da carta
float obterValor(struct CartaSuperTrunfo c, int atributo) {
    switch (atributo) {
        case 1: return (float)c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return (float)c.pontosTuristicos;
        case 5: return c.denspopulacional;
        case 6: return c.pibpercapita;
        case 7: return c.SuperPoder;
        default: return 0.0f;
    }
}

int main () {
    struct CartaSuperTrunfo carta1;  //dados carta 1
    struct CartaSuperTrunfo carta2;  //dados carta 2
    int opcao1;                 //para o menu de escolha
    int opcao2;                 //para o menu de escolha
    

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

 // Escolha do primeiro atributo
    exibirMenu(0);
    scanf("%d", &opcao1);
    if (opcao1 < 1 || opcao1 > 7) {
        printf("Opção inválida! Encerrando.\n");
        return 1;
    }

    // Escolha do segundo atributo (excluindo o primeiro)
    exibirMenu(opcao1);
    scanf("%d", &opcao2);
    if (opcao2 < 1 || opcao2 > 7 || opcao2 == opcao1) {
        printf("Opção inválida! Encerrando.\n");
        return 1;
    }

    // Obter valores dos atributos escolhidos
    float c1_a1 = obterValor(carta1, opcao1);
    float c2_a1 = obterValor(carta2, opcao1);
    float c1_a2 = obterValor(carta1, opcao2);
    float c2_a2 = obterValor(carta2, opcao2);

    // Pontuação inicial
    int pontosC1 = 0, pontosC2 = 0;

    // Comparação atributo 1
    if (opcao1 == 5) { // densidade: menor vence
        (c1_a1 < c2_a1) ? pontosC1++ : (c2_a1 < c1_a1) ? pontosC2++ : 0;
    } else { // maior vence
        (c1_a1 > c2_a1) ? pontosC1++ : (c2_a1 > c1_a1) ? pontosC2++ : 0;
    }

    // Comparação atributo 2
    if (opcao2 == 5) { // densidade: menor vence
        (c1_a2 < c2_a2) ? pontosC1++ : (c2_a2 < c1_a2) ? pontosC2++ : 0;
    } else { // maior vence
        (c1_a2 > c2_a2) ? pontosC1++ : (c2_a2 > c1_a2) ? pontosC2++ : 0;
    }

    // Soma dos valores
    float somaC1 = c1_a1 + c1_a2;
    float somaC2 = c2_a1 + c2_a2;

    // Exibir resultado
    printf("\n===== Resultado da Comparação =====\n");
    printf("Carta 1: %s\n", carta1.nomeCidade);
    printf("Carta 2: %s\n", carta2.nomeCidade);

    // Mostrar nome dos atributos para melhor leitura
    char* nomesAtributos[8] = {"", "População", "Área", "PIB", "Pontos Turísticos", "Densidade Demográfica", "PIB per Capita", "Super Poder"};

    printf("\nAtributo 1 (%s): %.2f vs %.2f\n", nomesAtributos[opcao1], c1_a1, c2_a1);
    printf("Atributo 2 (%s): %.2f vs %.2f\n", nomesAtributos[opcao2], c1_a2, c2_a2);

    printf("\nSoma Carta 1: %.2f\n", somaC1);
    printf("Soma Carta 2: %.2f\n", somaC2);

    // Determinar vencedor pela soma
    if (somaC1 > somaC2)
        printf("\nVencedor: %s\n", carta1.nomeCidade);
    else if (somaC2 > somaC1)
        printf("\nVencedor: %s\n", carta2.nomeCidade);
    else
        printf("\nEmpate!\n");

    return 0;

}