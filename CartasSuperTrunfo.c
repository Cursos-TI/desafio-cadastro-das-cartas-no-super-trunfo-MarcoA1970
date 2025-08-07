#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

struct CartaSuperTrunfo {
   char estado;                //Letra do estado
   char codigo[4];            //Codigo da carta
   char nomeCidade[100];      //Nome da cidade
   int população;             //População da cidade
   float area;                //Area da cidade
   float pib;                 //PIB
   int pontosTuristicos;      //Numero de pontos turisticos
};

int main () {
    struct CartaSuperTrunfo carta1;  //dados carta 1
    struct CartaSuperTrunfo carta2;  //dados carta 2

// entrada de dados carta 1

    printf ("Cadastro da Carta 1:\n");

    printf ("Digite a letra do Estado (A-H): ");
    scanf (" %c", &carta1.estado);

    printf ("Digite o código da carta (ex: A01) : ");
    scanf (" %s", carta1.codigo);

    printf ("Digite o nome da cidade: ");
    scanf (" %[^]", carta1.nomeCidade);

    


}
