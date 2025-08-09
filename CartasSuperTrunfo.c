#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //variaveis da primeira carta
    int populacao;
    int numpostostur;
    float area;
    float pib;
    //variaveis da segunda carta
    int populacao2;
    int numpostostur2;
    float area2;
    float pib2;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Primeira carta:
    printf("População: ");
    scanf("%d", &populacao);

    printf("Área(em km): ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &numpostostur);

    printf("Carta 1 cadastrada \n");
    
    // Segunda carta
    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área(em km): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &numpostostur2);

    printf("Carta 2 cadastrada \n");
    
    // Exibição dos Dados das Cartas:
    //mostrar primeira carta
    printf("Carta 1: \n");
    printf("População: %d \n", populacao);
    printf("Área: %.5f \n", area);
    printf("PIB: %.5f \n", pib);
    printf("Numéro de pontos turisticos: %d \n", numpostostur);
    //mostrar segunda carta
    printf("Carta 2: \n");
    printf("População: %d \n", populacao2);
    printf("Área: %.5f \n", area2);
    printf("PIB: %.5f \n", pib2);
    printf("Numéro de pontos turisticos: %d \n", numpostostur2);
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
