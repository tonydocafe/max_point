#include <stdio.h> 


int maior_numero(int a, int b) {
    return (a > b) ? a : b;
}


int maximo_de_pontos(int sequencia[], int quantidade) {
    
    if (quantidade == 0)
        return 0;

    int A, B = 0, C = 0; 
    
    for (int i = 0; i < quantidade; i++) {
        A = B;
        B = C + sequencia[i];
        C = maior_numero(A, C);
    }

    return maior_numero(B, C);
}

int main() {
    int quantidade; 
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &quantidade); 

    int sequencia[quantidade];
    printf("Digite a sequência de números separados por espaço: "); 
    
    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &sequencia[i]);
    }

    
    printf("Max score: %d\n", maximo_de_pontos(sequencia, quantidade));
    return 0; 
}
