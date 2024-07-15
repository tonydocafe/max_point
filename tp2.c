#include "tp2.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
// AVISO:
    if (argc != 3) {
        printf("Uso: %s <estrategia> <nome_do_arquivo>\n", argv[0]);
        return 1;
    }
// Arquivos
    int quantidade;
    FILE *arquivo;
    FILE *arquivo_saida;

    arquivo = fopen(argv[2], "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
     arquivo_saida = fopen("saida.txt", "w");
    if (arquivo_saida == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        fclose(arquivo_saida);
        return 1;
    }
    fscanf(arquivo, "%d", &quantidade);

//Tempo 
    long tempo_inicial = tempo_atual();

   
    menu(arquivo, arquivo_saida, quantidade, argc, argv);

    
    long tempo_final = tempo_atual();

    
    long tempo = tempo_final - tempo_inicial;

// Fechando Arquivos    
    fclose(arquivo);
    fclose(arquivo_saida);

    
    printf("Tempo de execução: %ld microssegundos\n", tempo);

    return 0;
}