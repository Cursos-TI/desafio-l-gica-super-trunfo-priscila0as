#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1[50];
    char codigoDaCarta1[5];
    char cidade1[20];
    int populacao1;
    float area1;
    float PIB1;
    int pontosTuristicos1;
    float divisao;

    char estado2[50];
    char codigoDaCarta2[5];
    char cidade2[20];
    int populacao2;
    float area2;
    float PIB2;
    int pontosTuristicos2;
    
    // Cadastro das cartas
    char estado1[50]="P";
    char codigoDaCarta1[5] = "P01";
    char cidade1[20] = "Recife";
    int populacao1 = 22446688;
    float area1 = 54.321;
    float PIB1 = 123.456;
    int pontosTuristicos1 = 50;
    float divisao;

    char estado2[50]= "B";
    char codigoDaCarta2[5] = "B02";
    char cidade2[20] = "Brasília";
    int populacao2 = 11335577;
    float area2 = 12.345;
    float PIB2 = 654.321;
    int pontosTuristicos2 = 31;

    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
     printf("\nCarta 1:\n");
    printf("Digite o Estado: \n");
    scanf("%s", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigoDaCarta1);
   
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f m²\n", area1);
    printf("PIB: %f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    printf("\nCarta 2:\n");
    printf("Digite o Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigoDaCarta2);
   
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f m²\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
     if (populacao1 > populacao2){
        printf("Carta 1 tem maior população.\n");
    } else {
        printf("Carta 2 tem maior população.\n");
    }

    if (pontosTuristicos1 > pontosTuristicos2){
        printf("Carta 1 tem mais pontos turísticos.\n");
    } else {
        printf("Carta 2 tem mais pontos turísticos.\n");
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
        printf("Carta 1 - Recife: 22446688 população.\n Carta 2 - Brasília: 11335577 população.\n Resultado: Carta 1 - Recife venceu!\n");
        printf("Carta 1 - Recife: 50 pontos turísticos.\n Carta 2 - Brasília: 31 pontos turísticos.\n Resultado: Carta 1 - Recife venceu!\n");

    return 0;

}
