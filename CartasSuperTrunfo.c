#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Julia

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    
    char nomeEstado_1, nomeEstado_2;
    char codigoCidade_1[4], codigoCidade_2[4];
    char nome_1[100], nome_2[100];
    int populacao_1, populacao_2, pontoTuristico_1, pontoTuristico_2;
    float area_1, area_2, PIB_1, PIB_2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    
    printf("Cadastro da Carta 1: \n");

    printf("Informe nome do Estado (A a H): ");
    scanf(" %c", &nomeEstado_1);

    printf("Informe o código da Carta (ex: A01, B02): ");
    scanf("%s", &codigoCidade_1);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nome_1);

    printf("Informe a população desta Cidade: ");
    scanf("%d", &populacao_1);

    printf("Informe a area dessa Cidade (ex. 1200.18): ");
    scanf("%f", &area_1);

    printf("Informe o PIB desta Cidade (em bilhões de reais, ex. 300.28): ");
    scanf("%f", &PIB_1);

    printf("Informe a quantidade de pontos turísticos dessa Cidade: ");
    scanf("%d", &pontoTuristico_1);


    printf("Cadastro da Carta 2: \n");

    printf("Informe nome do Estado (A a H): ");
    scanf(" %c", &nomeEstado_2);

    printf("Informe o código da Carta (ex: A01, B02): ");
    scanf("%s", &codigoCidade_2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nome_2);

    printf("Informe a população desta Cidade: ");
    scanf("%d", &populacao_2);

    printf("Informe a area dessa Cidade (ex. 1200.18): ");
    scanf("%f", &area_2);

    printf("Informe o PIB desta Cidade (em bilhões de reais, ex. 300.28): ");
    scanf("%f", &PIB_2);

    printf("Informe a quantidade de pontos turísticos dessa Cidade: ");
    scanf("%d", &pontoTuristico_2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta 1\n");
    printf("Estado: %c \n", nomeEstado_1);
    printf("Código: %s \n", codigoCidade_1);
    printf("Nome da Cidade: %s \n", nome_1);
    printf("População: %d \n", populacao_1);
    printf("Área: %.2f km² \n", area_1);
    printf("PIB: %.2f bilhões de reais \n", PIB_1);
    printf("Número de Pontos Turísticos: %d \n", pontoTuristico_1);

    printf("Carta 2\n");
    printf("Estado: %c \n", nomeEstado_2);
    printf("Código: %s \n", codigoCidade_2);
    printf("Nome da Cidade: %s \n", nome_2);
    printf("População: %d \n", populacao_2);
    printf("Área: %.2f km² \n", area_2);
    printf("PIB: %.2f bilhões de reais \n", PIB_2);
    printf("Número de Pontos Turísticos: %d \n", pontoTuristico_2);

    return 0;
}
