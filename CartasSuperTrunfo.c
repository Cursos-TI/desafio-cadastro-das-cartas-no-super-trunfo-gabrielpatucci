#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
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

//primeira carta
    printf("População: ");
    scanf("%d", &populacao);

    printf("Área(em km): ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &numpostostur);

//mostrar primeira carta
    printf("Carta 1: \n");
    printf("População: %d \n", populacao);
    printf("Área: %.5f \n", area);
    printf("PIB: %.5f \n", pib);
    printf("Numéro de pontos turisticos: %d \n", numpostostur);

//segunda carta
    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área(em km): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &numpostostur2);

//mostrar segunda carta
    printf("Carta 2: \n");
    printf("População: %d \n", populacao2);
    printf("Área: %.5f \n", area2);
    printf("PIB: %.5f \n", pib2);
    printf("Numéro de pontos turisticos: %d \n", numpostostur2);




    return 0;
}
