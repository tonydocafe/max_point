#ifndef TP2_H
#define TP2_H
#include<stdio.h>

int D(int sequencia[], int quantidade);

int A(int sequencia[], int A, int quantidade, int memo []);

void menu(FILE *arquivo, FILE *arquivo_saida, int quantidade, int argc, char *argv[]);

long tempo_atual();

#endif 