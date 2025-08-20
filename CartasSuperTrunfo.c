#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

   // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.

    //  Definindo os Atributos das Cartas:

    // ++++ carta 01 ++++++
    char esdado;
    char codigo[5]; 
    char NomeDaCidade[50];
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
    scanf(" %[^\n]", NomeDaCidade);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos);


    return 0;
}
