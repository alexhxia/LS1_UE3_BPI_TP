/** 
 * Alexia HOCINE 
 * BPI TP10 EX2
 */

#include <stdlib.h>
#include <stdio.h>


void RemplirTab_SuiteFibonacci(int nbElt, int F[]) {
  F[0] = 1;
  F[1] = 1;
  
  for (int k = 2 ; k < nbElt ; ++k) {
    F[k] = F[k - 1] + F[k - 2];
  }  
}

void AfficherTab(int nbElt, int T[]) {
  printf("Le tableau contient les valeurs : \n");
  for (int k = 0 ; k < nbElt ; ++k) {
    printf("%d ", T[k]);
  }
  printf("\n");
}



int main() {
  int nbElt = 20; 
  int F[nbElt];
  
  RemplirTab_SuiteFibonacci(nbElt, F);
  
  AfficherTab(nbElt, F);
    
	return EXIT_SUCCESS;
}
