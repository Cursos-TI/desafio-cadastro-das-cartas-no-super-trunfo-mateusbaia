#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.

    //  Definindo os Atributos das Cartas:

    // ++++ carta 01 ++++++
    char esdado;
    char codigo[5];
    char nomeDaCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // Entrada de dados da carta 1
    printf("Cadastro da carta 1:\n");
    printf("Digite a inicial do estado entre (A - H): ");
    scanf(" %c", &esdado);
    printf("Digite o código da carta (Ex: A01): ");
    scanf("%s", codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos);

    // +++++ carta 02 ++++++
    char esdado2;
    char codigo2[5];
    char nomeDaCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados da carta 2
    printf("\nCadastro da carta 2:\n");
    printf("Digite a inicial do estado entre (A - H): ");
    scanf(" %c", &esdado2);
    printf("Digite o código da carta (Ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade2);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos2);

    // ##### saída de dados das cartas cadastradas #####

    printf("\n++++ Dados cadasstrados +++++\n");
    
    printf("Carta 1:\n");
    printf("Estado: %c\n", esdado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", esdado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
