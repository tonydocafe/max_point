#include <stdio.h>

// Função recursiva para encontrar o máximo de pontos sem considerar elementos adjacentes
int maximo_de_pontos_recursivo(int sequencia[], int A, int quantidade) {
    // Caso base: se o índice atual for maior ou igual à quantidade, retornamos 0
    if (A >= quantidade)
        return 0;

    // Opção 1: excluímos o elemento atual e passamos para o próximo
    int C = maximo_de_pontos_recursivo(sequencia, A + 1, quantidade);

    // Opção 2: incluímos o elemento atual e pulamos o próximo
    int B = sequencia[A] + maximo_de_pontos_recursivo(sequencia, A + 2, quantidade);

    // Retornamos o maior valor entre excluir e incluir o elemento atual
    return (B > C) ? B : C;
}

int main() {
    int quantidade; // Declaração da variável para armazenar a quantidade de elementos na sequência
    printf("Digite a quantidade de elementos: "); // Pede ao usuário para digitar a quantidade de elementos
    scanf("%d", &quantidade); // Lê a quantidade de elementos do usuário

    int sequencia[quantidade]; // Declara um array para armazenar a sequência de números com tamanho baseado na quantidade fornecida
    printf("Digite a sequência de números separados por espaço: "); // Pede ao usuário para digitar a sequência de números
    // Lê a sequência de números fornecida pelo usuário e armazena no array 'sequencia'
    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &sequencia[i]);
    }

    // Calcula e imprime o máximo de pontos que podem ser obtidos com base na sequência fornecida
    printf("Max score: %d\n", maximo_de_pontos_recursivo(sequencia, 0, quantidade));
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
