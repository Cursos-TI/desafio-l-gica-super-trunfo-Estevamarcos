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
    
    // Cálculo de PIB per capita (não é comparado no menu, mas pode ser adicionado)
     printf("PIB per Capita: R$%.2f\n", pibPerCapita1 );
     printf("PIB per Capita: R$%.2f\n", pibPerCapita2);

    int opcao;

    printf("=== SUPER TRUNFO: Comparação de Cidades ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s e %s...\n", NomeCidade1,  NomeCidade2);

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", NomeCidade1, populacao1);
            printf("%s: %d habitantes\n",  NomeCidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", NomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n",  NomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.3f km²\n", NomeCidade1, area1);
            printf("%s: %.3f km²\n",  NomeCidade2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", NomeCidade1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n",  NomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: R$%.2f\n",NomeCidade1, PIB1);
            printf("%s: R$%.2f\n",  NomeCidade2, PIB2);
            if (PIB1 > PIB2) {
                printf("Resultado: %s venceu!\n",NomeCidade1);
            } else if (PIB2 > PIB1) {
                printf("Resultado: %s venceu!\n",  NomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", NomeCidade1, pontosTuristicos1);
            printf("%s: %d pontos\n",  NomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", NomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s venceu!\n",  NomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        

        case 5:
            printf("Atributo: Densidade Demográfica (MENOR vence)\n");
            printf("%s: %.2f hab/km²\n",NomeCidade1, densidade1);
            printf("%s: %.2f hab/km²\n",NomeCidade2 , densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n",NomeCidade1 );
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n",NomeCidade2 );
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida. Por favor, escolha um número entre 1 e 5.\n");
    }




      return 0;
      
}

      