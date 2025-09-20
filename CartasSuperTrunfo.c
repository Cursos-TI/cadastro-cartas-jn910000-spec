#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// Definição da struct para a carta do Super Trunfo
typedef struct {
    char pais;
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
    printf("Pais: %c\n", carta.pais);
    printf("Codigo: %s\n", carta.codigo_carta);
    printf("Nome da Cidade: %s\n", carta.nome_cidade);
    printf("Populacao: %d\n", carta.populacao);
    printf("Area: %.2f km2\n", carta.area);
    printf("PIB: %.2f bilhoes de reais\n", carta.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta.num_pontos_turisticos);
}

int main() {
    CartaSuperTrunfo cartas[8]; // Array para armazenar 8 cartas

    // Dados das cartas (País A: Brasil)
    cartas[0].pais = 'A';
    strcpy(cartas[0].codigo_carta, "A01");
    strcpy(cartas[0].nome_cidade, "Sao Paulo - BR");
    cartas[0].populacao = 12325000;
    cartas[0].area = 1521.11;
    cartas[0].pib = 699.28;
    cartas[0].num_pontos_turisticos = 50;

    cartas[1].pais = 'A';
    strcpy(cartas[1].codigo_carta, "A02");
    strcpy(cartas[1].nome_cidade, "Rio de Janeiro - BR");
    cartas[1].populacao = 6748000;
    cartas[1].area = 1200.25;
    cartas[1].pib = 300.50;
    cartas[1].num_pontos_turisticos = 30;

    // Dados das cartas (País B: Argentina)
    cartas[2].pais = 'B';
    strcpy(cartas[2].codigo_carta, "B01");
    strcpy(cartas[2].nome_cidade, "Buenos Aires - AR");
    cartas[2].populacao = 3077000;
    cartas[2].area = 203.00;
    cartas[2].pib = 160.00;
    cartas[2].num_pontos_turisticos = 45;
    
    cartas[3].pais = 'B';
    strcpy(cartas[3].codigo_carta, "B02");
    strcpy(cartas[3].nome_cidade, "Cordoba - AR");
    cartas[3].populacao = 1391000;
    cartas[3].area = 576.00;
    cartas[3].pib = 25.00;
    cartas[3].num_pontos_turisticos = 20;

    // Dados das cartas (País C: Estados Unidos)
    cartas[4].pais = 'C';
    strcpy(cartas[4].codigo_carta, "C01");
    strcpy(cartas[4].nome_cidade, "Nova York - EUA");
    cartas[4].populacao = 8468000;
    cartas[4].area = 778.2;
    cartas[4].pib = 1700.00;
    cartas[4].num_pontos_turisticos = 80;

    cartas[5].pais = 'C';
    strcpy(cartas[5].codigo_carta, "C02");
    strcpy(cartas[5].nome_cidade, "Los Angeles - EUA");
    cartas[5].populacao = 3970000;
    cartas[5].area = 1302.00;
    cartas[5].pib = 750.00;
    cartas[5].num_pontos_turisticos = 65;

    // Dados das cartas (País D: Japão)
    cartas[6].pais = 'D';
    strcpy(cartas[6].codigo_carta, "D01");
    strcpy(cartas[6].nome_cidade, "Toquio - JP");
    cartas[6].populacao = 13960000;
    cartas[6].area = 2194.00;
    cartas[6].pib = 1600.00;
    cartas[6].num_pontos_turisticos = 90;

    cartas[7].pais = 'D';
    strcpy(cartas[7].codigo_carta, "D02");
    strcpy(cartas[7].nome_cidade, "Quioto - JP");
    cartas[7].populacao = 1475000;
    cartas[7].area = 827.83;
    cartas[7].pib = 80.00;
    cartas[7].num_pontos_turisticos = 70;

    // Exibindo as informações das cartas usando um loop
    for (int i = 0; i < 8; i++) {
        exibir_carta(cartas[i], i + 1);
    }

    return 0;
}