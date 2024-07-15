#include "tp2.h"
#include <stdio.h> 
#include <stdlib.h> 
#include <sys/time.h>
#include <sys/resource.h>



void menu(FILE *arquivo, FILE *arquivo_saida, int quantidade, int argc, char *argv[]){
    
    int *sequencia = (int *) malloc(quantidade * sizeof(int));
    int *memo = (int *)malloc(quantidade*sizeof(int));
    
//para indicar que os resultados ainda não foram calculados.
    for (int i = 0; i < quantidade; i++) {
        memo[i] = -1;
    }
//conferir a sequência 
    if (sequencia == NULL) {
        printf("Erro ao alocar memória.\n");
        fclose(arquivo);
       
    }
//preencher a sequẽncia
    for (int i = 0; i < quantidade; i++) {
        fscanf(arquivo, "%d", &sequencia[i]);
    }
//escrever no arquivo
    if (argv[1][0] == 'D') {
        fprintf(arquivo_saida,"Max score usando D: %d\n", D(sequencia, quantidade));
    } else if (argv[1][0] == 'A') {
        fprintf(arquivo_saida,"Max score usando A: %d\n", A(sequencia,0, quantidade,memo));
    } else {
        printf("Argumento inválido. Use 'A' para a função A ou 'D' para a função D.\n");
    }
    free(sequencia);
    free(memo);

}

long tempo_atual() {
    struct timeval hora_atual;
    gettimeofday(&hora_atual, NULL);
    return hora_atual.tv_sec * 1000000 + hora_atual.tv_usec;
}
