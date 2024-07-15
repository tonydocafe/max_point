#include "tp2.h"
#include <stdio.h> 
#include <stdlib.h>  

int D(int sequencia[], int quantidade) {
    
     if (quantidade == 0)
        return 0;

    int A, B = 0, C = 0; 
    
    for (int i = 0; i < quantidade; i++) {
        A = B;
        B = C + sequencia[i];
        C = (A > C) ? A : C;
    }

    return (B > C) ? B : C;

}

int A(int sequencia[], int indice, int quantidade, int memo[]) {
   
    if (indice >= quantidade) return 0;
    
    if (memo[indice] != -1) return memo[indice];
    
  
    int C = A(sequencia, indice + 1, quantidade,memo);
    
    
    int B = sequencia[indice] + A(sequencia, indice + 2, quantidade,memo);
    
    
    memo[indice] = (B > C) ? B : C;
    
    
    return memo[indice];
}
