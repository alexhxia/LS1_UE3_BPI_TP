/** 
 * Alexia HOCINE 
 * BPI TP09 EX4
 */

#include <stdlib.h>
#include <stdio.h>

void RemplirTab(int nbElt, int T[]) {
  printf("Entrez %d entiers : \n", nbElt);
  for (int k = 0 ; k < nbElt ; ++k) {
    scanf("%d", &T[k]);
  }  
}

void AfficherTab(int nbElt, int T[]) {
  printf("Le tableau contient les valeurs : \n");
  for (int k = 0 ; k < nbElt ; ++k) {
    printf("%d ", T[k]);
  }
  printf("\n");
}

int SommeTab(int nbElt, int T[]) {
  int s = T[0];
  
  for (int k = 1 ; k < nbElt ; ++k) {
    s += T[k];
  }
  
  return s;
}


int main() {
  int nbElt = 5, T[nbElt];
  
  RemplirTab(nbElt, T);
  
  AfficherTab(nbElt, T);
  
  printf("La somme des éléments du tableau est : %d.\n", SommeTab(nbElt, T));
  
	return EXIT_SUCCESS;
}
