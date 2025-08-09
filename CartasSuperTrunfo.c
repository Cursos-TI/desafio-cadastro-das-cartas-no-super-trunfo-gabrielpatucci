#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Variáveis da primeira carta
    char estado[50];
    char codcarta[20];
    char nomecidade[50];
    int populacao;
    int numpostostur;
    float area;
    float pib;
    
    // Variáveis da segunda carta
    char estado2[50];
    char codcarta2[20];
    char nomecidade2[50];
    int populacao2;
    int numpostostur2;
    float area2;
    float pib2;

    // Cadastro da primeira carta
    printf("Cadastro da Carta 1:\n");
    
    printf("Estado: ");
    scanf("%s", estado);
    
    printf("Código da carta: ");
    scanf("%s", codcarta);
    
    printf("Nome da Cidade: ");
    scanf("%s", nomecidade);
    
    printf("População: ");
    scanf("%d", &populacao);
    
    printf("Área(em km): ");
    scanf("%f", &area);
    
    printf("PIB: ");
    scanf("%f", &pib);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &numpostostur);
    
    printf("\nCarta 1 cadastrada com sucesso!\n");
    

    // Cadastro da segunda carta
    printf("Cadastro da Carta 2:\n");
    
    printf("Estado: ");
    scanf("%s", estado2);

    
    printf("Código da carta: ");
    scanf("%s", codcarta2);

    
    printf("Nome da Cidade: ");
    scanf("%s", nomecidade2);
 
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área(em km): ");
    scanf("%f", &area2);
    
    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &numpostostur2);
    
    printf("\nCarta 2 preenchida.\n");
    
    
    // Mostrar primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codcarta);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", numpostostur);
    
    // Mostrar segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codcarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", numpostostur2);

    return 0;
}