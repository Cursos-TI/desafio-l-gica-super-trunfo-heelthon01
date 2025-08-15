#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int logicaSuperTrunfo() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char *atributos[] = {
        "População", "Área", "PIB", "PIB per Capita", "Densidade Populacional", "Pontos Turísticos"
    };
    srand(time(NULL));
    int atributo_sorteado = rand() % 6;

    char estado1[50], sigla1[5], cidade1[50];
    int pontos_turisticos1;
    float populacao1, area1, pib1;

    char estado2[50], sigla2[5], cidade2[50];
    int pontos_turisticos2;
    float populacao2, area2, pib2;

    float densidade1, densidade2, pib_capita1, pib_capita2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    printf("Informe seu estado:\n");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0;

    printf("Informe o código da carta:\n");
    fgets(sigla1, sizeof(sigla1), stdin);
    sigla1[strcspn(sigla1, "\n")] = 0;

    printf("Informe o nome da cidade:\n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Informe a população:\n");
    scanf("%d", &populacao1);

    printf("Informe sua área (m2):\n");
    scanf("%f", &area1);

    printf("Informe seu PIB:\n");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos1);

    densidade1 = populacao1 / area1;
    printf("Densidade Populacional: \n");
    printf("%.2f \n", densidade1);
    pib_capita1 = pib1 / populacao1;
    printf("PIB per Capita: \n");
    printf("%.2f \n", pib_capita1);



    printf("\nInforme seu estado:\n");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("Informe o código da carta:\n");
    fgets(sigla2, sizeof(sigla2), stdin);
    sigla2[strcspn(sigla2, "\n")] = 0;

    printf("Informe o nome da cidade:\n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Informe a população:\n");
    scanf("%d", &populacao2);

    printf("Informe sua área (m2):\n");
    scanf("%f", &area2);

    printf("Informe seu PIB:\n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);

    densidade2 = populacao2 / area2;
    printf("\nDensidade Populacional: \n");
    printf("%.2f \n", densidade2);
    pib_capita2 = pib2 / populacao2;
    printf("PIB per Capita: \n");
    printf("%.2f \n", pib_capita2);
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
printf("\nAtributo escolhido: %s\n", atributos[atributo_sorteado]);

    if (atributo_sorteado == 0) { // População
        printf("Carta 1 - %s %s: %d\n", estado1, sigla1, populacao1);
        printf("Carta 2 - %s %s: %d\n", estado2, sigla2, populacao2);
        if (populacao1 > populacao2)
            printf("Resultado: Carta 1 %s VENCEU!!!\n", strupr(estado1));
        else if (populacao2 > populacao1)
            printf("Resultado: Carta 2 %s VENCEU!!!\n", strupr(estado2));
        else
            printf("Resultado: EMPATE! As populações são iguais\n");
    }

    else if (atributo_sorteado == 1) { // Área
        printf("Carta 1 - %s %s: %.2f\n", estado1, sigla1, area1);
        printf("Carta 2 - %s %s: %.2f\n", estado2, sigla2, area2);
        if (area1 > area2)
            printf("Resultado: Carta 1 %s VENCEU!!!\n", strupr(estado1));
        else if (area2 > area1)
            printf("Resultado: Carta 2 %s VENCEU!!!\n", strupr(estado2));
        else
            printf("Resultado: EMPATE! As áreas são iguais\n");
    }

    else if (atributo_sorteado == 2) { // PIB
        printf("Carta 1 - %s %s: %.2f\n", estado1, sigla1, pib1);
        printf("Carta 2 - %s %s: %.2f\n", estado2, sigla2, pib2);
        if (pib1 > pib2)
            printf("Resultado: Carta 1 %s VENCEU!!!\n", strupr(estado1));
        else if (pib2 > pib1)
            printf("Resultado: Carta 2 %s VENCEU!!!\n", strupr(estado2));
        else
            printf("Resultado: EMPATE! Os PIBs são iguais\n");
    }

    else if (atributo_sorteado == 3) { // PIB per Capita
        printf("Carta 1 - %s %s: %.2f\n", estado1, sigla1, pib_capita1);
        printf("Carta 2 - %s %s: %.2f\n", estado2, sigla2, pib_capita2);
        if (pib_capita1 > pib_capita2)
            printf("Resultado: Carta 1 %s VENCEU!!!\n", strupr(estado1));
        else if (pib_capita2 > pib_capita1)
            printf("Resultado: Carta 2 %s VENCEU!!!\n", strupr(estado2));
        else
            printf("Resultado: EMPATE! O PIB per Capita é igual\n");
    }

    else if (atributo_sorteado == 4) { // Densidade Populacional
        printf("Carta 1 - %s %s: %.2f\n", estado1, sigla1, densidade1);
        printf("Carta 2 - %s %s: %.2f\n", estado2, sigla2, densidade2);
        if (densidade1 < densidade2)
            printf("Resultado: Carta 1 %s VENCEU!!!\n", strupr(estado1));
        else if (densidade2 < densidade1)
            printf("Resultado: Carta 2 %s VENCEU!!!\n", strupr(estado2));
        else
            printf("Resultado: EMPATE! As densidades são iguais\n");
    }

    else if (atributo_sorteado == 5) { // Pontos Turísticos
        printf("Carta 1 - %s %s: %d\n", estado1, sigla1, pontos_turisticos1);
        printf("Carta 2 - %s %s: %d\n", estado2, sigla2, pontos_turisticos2);
        if (pontos_turisticos1 > pontos_turisticos2)
            printf("Resultado: Carta 1 %s VENCEU!!!\n", strupr(estado1));
        else if (pontos_turisticos2 > pontos_turisticos1)
            printf("Resultado: Carta 2 %s VENCEU!!!\n", strupr(estado2));
        else
            printf("Resultado: EMPATE! Os pontos turísticos são iguais\n");
    }

    return 0;
}
