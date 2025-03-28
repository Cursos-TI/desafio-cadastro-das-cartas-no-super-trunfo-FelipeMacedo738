#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

 // Declaração de variáveis para a primeira carta
 char estado1;
 char codigo1[4];
 char nomeCidade1[50];
 int populacao1;
 float area1;
 float pib1;
 int pontosTuristicos1;

 // Declaração de variáveis para a segunda carta
 char estado2;
 char codigo2[4];
 char nomeCidade2[50];
 int populacao2;
 float area2;
 float pib2;
 int pontosTuristicos2;

 // Entrada de dados para a primeira carta
 printf("Digite o estado da primeira cidade (A-H): ");
 scanf(" %c", &estado1);
 printf("Digite o código da primeira cidade (ex: A01): ");
 scanf(" %3s", codigo1);
 printf("Digite o nome da primeira cidade: ");
 scanf(" %49s", nomeCidade1);
 printf("Digite a população da primeira cidade: ");
 scanf(" %d", &populacao1);
 printf("Digite a área da primeira cidade (km²): ");
 scanf(" %f", &area1);
 printf("Digite o PIB da primeira cidade (em bilhões): ");
 scanf(" %f", &pib1);
 printf("Digite o número de pontos turísticos da primeira cidade: ");
 scanf(" %d", &pontosTuristicos1);

 // Entrada de dados para a segunda carta
 printf("\nDigite o estado da segunda cidade (A-H): ");
 scanf(" %c", &estado2);
 printf("Digite o código da segunda cidade (ex: B02): ");
 scanf(" %3s", codigo2);
 printf("Digite o nome da segunda cidade: ");
 scanf(" %49s", nomeCidade2);
 printf("Digite a população da segunda cidade: ");
 scanf(" %d", &populacao2);
 printf("Digite a área da segunda cidade (km²): ");
 scanf(" %f", &area2);
 printf("Digite o PIB da segunda cidade (em bilhões): ");
 scanf(" %f", &pib2);
 printf("Digite o número de pontos turísticos da segunda cidade: ");
 scanf(" %d", &pontosTuristicos2);

 // Exibição dos dados da primeira carta
 printf("\nCarta 1:\n");
 printf("Estado: %c\n", estado1);
 printf("Código: %s\n", codigo1);
 printf("Nome da Cidade: %s\n", nomeCidade1);
 printf("População: %d\n", populacao1);
 printf("Área: %.2f km²\n", area1);
 printf("PIB: %.2f bilhões de reais\n", pib1);
 printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

 // Exibição dos dados da segunda carta
 printf("\nCarta 2:\n");
 printf("Estado: %c\n", estado2);
 printf("Código: %s\n", codigo2);
 printf("Nome da Cidade: %s\n", nomeCidade2);
 printf("População: %d\n", populacao2);
 printf("Área: %.2f km²\n", area2);
 printf("PIB: %.2f bilhões de reais\n", pib2);
 printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
