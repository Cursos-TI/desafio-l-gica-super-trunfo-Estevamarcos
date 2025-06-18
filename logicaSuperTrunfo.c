#include <stdio.h>
int main() {
    // carta 1 - Guaxupé
    char estado1[]= "MG";
    char codigo1[]= "A01";
    char NomeCidade1[]="Guaxupé";
    int populacao1= 52621;
    float area1= 286398;
    float PIB1= 270577155.89;
    int pontosTuristicos1 = 4;

    //cálculos
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = PIB1 / populacao1;

     // carta 2 - Tapiratiba
    char estado2[]= "SP";
    char codigo2[]= "B02";
    char NomeCidade2[]="Tapiratiba";
    int populacao2= 15936;
    float area2= 220.575;
    float PIB2= 161548000.0;
    int pontosTuristicos2=3;

    // cálculos
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = PIB2 / populacao2;

     // Exibição da carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: R$.%.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // cálculos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$%.2f\n", pibPerCapita1 );

     printf("\n"); // aqui pula-se uma linha

    // Exibição da carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: R$%.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    //Cálculos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$%.2f\n", pibPerCapita2);

     printf("\n"); // aqui pula-se uma linha

      // Comparação de um único atributo  (População)
    printf("Comparação de Cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %d habitantes\n", NomeCidade1, populacao1);
    printf("Carta 2 - %s: %d habitantes\n", NomeCidade2 , populacao2);

     printf("\n"); // aqui pula-se uma linha

    // Comparação usando if-else
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", NomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n",NomeCidade2 );
    } else {
        printf("Resultado: Empate! Ambas as cidades têm a mesma população.\n");
    }


      return 0;
} 