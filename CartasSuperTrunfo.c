#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// Definição da struct para a carta do Super Trunfo
typedef struct {
    char estado;
    char codigo_carta[5];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int num_pontos_turisticos;
} CartaSuperTrunfo;

// Função para exibir os dados de uma carta
void exibir_carta(CartaSuperTrunfo carta, int numero_carta) {
    printf("\n--- Carta %d ---\n", numero_carta);
    printf("Estado: %c\n", carta.estado);
    printf("Codigo: %s\n", carta.codigo_carta);
    printf("Nome da Cidade: %s\n", carta.nome_cidade);
    printf("Populacao: %d\n", carta.populacao);
    printf("Area: %.2f km2\n", carta.area);
    printf("PIB: %.2f bilhoes de reais\n", carta.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta.num_pontos_turisticos);
}

int main() {
    CartaSuperTrunfo carta1;
    CartaSuperTrunfo carta2;

    // Dados da carta de São Paulo
    carta1.estado = 'A';
    strcpy(carta1.codigo_carta, "A01");
    strcpy(carta1.nome_cidade, "Sao Paulo");
    carta1.populacao = 12325000;
    carta1.area = 1521.11;
    carta1.pib = 699.28;
    carta1.num_pontos_turisticos = 50;

    // Dados da carta do Rio de Janeiro
    carta2.estado = 'B';
    strcpy(carta2.codigo_carta, "B02");
    strcpy(carta2.nome_cidade, "Rio de Janeiro");
    carta2.populacao = 6748000;
    carta2.area = 1200.25;
    carta2.pib = 300.50;
    carta2.num_pontos_turisticos = 30;

    // Exibindo as informações das cartas
    exibir_carta(carta1, 1);
    exibir_carta(carta2, 2);

    return 0;
}
    