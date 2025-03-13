#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// Teste Giancarlo

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
        char estado1, estado2;
        char codigo1[5], codigo2[5];
        char cidade1[100], cidade2[100];
        int populacao1, populacao2;
        float area1, area2, pib1, pib2;
        int pontosTuristicos1, pontosTuristicos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
        // leitura de dados para definir a primeira carta:
    printf("--> Digite as informações para definir a primeira carta <-- \n\n");
    
    printf("Escolha uma letra entre de 'A' a 'H' para representar o estado: ");
    scanf(" %c", &estado1);

    printf("A letra escolhida para representar o estado seguida de um número de 01 a 04 (Ex: A01, B02, C03...): ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1); 

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em Km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);


        // leitura de dados para definir a segunda carta:
    printf("\n \n--> Digite as informações para definir a segunda carta <-- \n\n");
    
    printf("Escolha uma letra entre de 'A' a 'H' para representar o estado: ");
    scanf(" %c", &estado2);

    printf("A letra escolhida para representar o estado seguida de um número de 01 a 04 (Ex: A01, B02, C03...): ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2); 

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em Km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

        //Visualização de dados -- Carta 01:
    printf("\n======== Informações da primeira carta ========\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Quantidade de pontos turisticos: %d\n", pontosTuristicos1);


        //Visualização de dados -- Carta 02:
    printf("\n======== Informações da segunda carta ========\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Quantidade de pontos turisticos: %d", pontosTuristicos2);

    return 0;
}