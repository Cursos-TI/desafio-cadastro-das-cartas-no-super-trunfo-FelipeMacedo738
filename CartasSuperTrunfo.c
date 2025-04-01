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
 char estado1, codigo1[4], nomeCidade1[50];
 unsigned long int populacao1;
 float area1, pib1, pibPerCapita1, densidade1, superPoder1;
 int pontosTuristicos1;

 // Declaração de variáveis para a segunda carta
 char estado2, codigo2[4], nomeCidade2[50];
 unsigned long int populacao2;
 float area2, pib2, pibPerCapita2, densidade2, superPoder2;
 int pontosTuristicos2;

 // Entrada de dados para a primeira carta
 printf("Digite o estado da primeira cidade (A-H): ");
 scanf(" %c", &estado1);
 printf("Digite o código da primeira cidade (ex: A01): ");
 scanf(" %3s", codigo1);
 printf("Digite o nome da primeira cidade: ");
 scanf(" %49s", nomeCidade1);
 printf("Digite a população da primeira cidade: ");
 scanf(" %lu", &populacao1);
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
 scanf(" %lu", &populacao2);
 printf("Digite a área da segunda cidade (km²): ");
 scanf(" %f", &area2);
 printf("Digite o PIB da segunda cidade (em bilhões): ");
 scanf(" %f", &pib2);
 printf("Digite o número de pontos turísticos da segunda cidade: ");
 scanf(" %d", &pontosTuristicos2);

 // Cálculo do PIB per capita e densidade populacional
 pibPerCapita1 = pib1 / populacao1;
 densidade1 = populacao1 / area1;
 pibPerCapita2 = pib2 / populacao2;
 densidade2 = populacao2 / area2;

 // Cálculo do Super Poder
 superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);
 superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

 // Exibição das comparações
 printf("\nComparação de Cartas:\n");
 printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
 printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
 printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
 printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 2, pontosTuristicos1 > pontosTuristicos2);
 printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2);
 printf("PIB per Capita: Carta %d venceu (%d)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 2, pibPerCapita1 > pibPerCapita2);
 printf("Super Poder: Carta %d venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2);

 return 0;
}

