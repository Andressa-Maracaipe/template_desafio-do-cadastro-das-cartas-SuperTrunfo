#include <stdio.h>
 
int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4]; // Array para armazenar o código (ex: A01 + \0)
    char cidade1[50]; // Array para armazenar o nome da cidade
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    
    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // === CADASTRO DA PRIMEIRA CARTA (SÃO PAULO) ===
    printf("=== CADASTRO DA CARTA 1 ===\n");
    
    // Atribuindo os valores conforme o exemplo do comando
    estado1 = 'A';
    printf("Estado: A\n");
    
    // Cópia segura da string para o array de caracteres
    codigo1[0] = 'A';
    codigo1[1] = '0';
    codigo1[2] = '1';
    codigo1[3] = '\0'; // Caractere nulo para indicar fim da string
    printf("Código: A01\n");
    
    // Atribuindo o nome da cidade
    cidade1[0] = 'S';
    cidade1[1] = 'a';
    cidade1[2] = 'o';
    cidade1[3] = ' ';
    cidade1[4] = 'P';
    cidade1[5] = 'a';
    cidade1[6] = 'u';
    cidade1[7] = 'l';
    cidade1[8] = 'o';
    cidade1[9] = '\0';
    printf("Nome da Cidade: Sao Paulo\n");
    
    populacao1 = 12325000;
    printf("Populacao: 12325000\n");
    
    area1 = 1521.11;
    printf("Area: 1521.11 km2\n");
    
    pib1 = 699.28;
    printf("PIB: 699.28 bilhoes de reais\n");
    
    pontosTuristicos1 = 50;
    printf("Numero de Pontos Turisticos: 50\n");
    
    printf("\n"); // Linha em branco para separar os cadastros
    
    // === CADASTRO DA SEGUNDA CARTA (RIO DE JANEIRO) ===
    printf("=== CADASTRO DA CARTA 2 ===\n");
    
    // Atribuindo os valores conforme o exemplo do comando
    estado2 = 'B';
    printf("Estado: B\n");
    
    // Cópia segura da string para o array de caracteres
    codigo2[0] = 'B';
    codigo2[1] = '0';
    codigo2[2] = '2';
    codigo2[3] = '\0'; // Caractere nulo para indicar fim da string
    printf("Código: B02\n");
    
    // Atribuindo o nome da cidade
    cidade2[0] = 'R';
    cidade2[1] = 'i';
    cidade2[2] = 'o';
    cidade2[3] = ' ';
    cidade2[4] = 'd';
    cidade2[5] = 'e';
    cidade2[6] = ' ';
    cidade2[7] = 'J';
    cidade2[8] = 'a';
    cidade2[9] = 'n';
    cidade2[10] = 'e';
    cidade2[11] = 'i';
    cidade2[12] = 'r';
    cidade2[13] = 'o';
    cidade2[14] = '\0';
    printf("Nome da Cidade: Rio de Janeiro\n");
    
    populacao2 = 6748000;
    printf("Populacao: 6748000\n");
    
    area2 = 1200.25;
    printf("Area: 1200.25 km2\n");
    
    pib2 = 300.50;
    printf("PIB: 300.50 bilhoes de reais\n");
    
    pontosTuristicos2 = 30;
    printf("Numero de Pontos Turisticos: 30\n");
    
    printf("\n"); // Linha em branco para separar cadastro da exibição
    
    // === EXIBIÇÃO DOS DADOS ===
    printf("=== DADOS DAS CARTAS CADASTRADAS ===\n\n");
    
    // Exibição da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    
    printf("\n"); // Linha em branco entre as cartas
    
    // Exibição da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    
    return 0;
}
 