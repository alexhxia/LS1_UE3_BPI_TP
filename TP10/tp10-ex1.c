/** 
 * Alexia HOCINE 
 * BPI TP10 EX1
 */

#include <stdlib.h>
#include <stdio.h>


void RemplirTab(int nbElt, char T[]) {
  printf("Entrez %d caractères : \n", nbElt);
  for (int k = 0 ; k < nbElt ; ++k) {
    scanf("%c", &T[k]);
  }  
}

void AfficherTab(int nbElt, char T[]) {
  printf("Le tableau contient les valeurs : \n");
  for (int k = 0 ; k < nbElt ; ++k) {
    printf("%c ", T[k]);
  }
  printf("\n");
}

int NbMaj(int nbElt, char T[]) {
  int nbMaj = 0;
  
  for (int k = 0 ; k < nbElt ; ++k) {
    if ('A' <= T[k] && T[k] <= 'Z') {
      ++nbMaj;
    }
  }
  
  return nbMaj;
}

int main() {
  int nbElt = 5; 
  char T[nbElt];
  
  RemplirTab(nbElt, T);
  
  AfficherTab(nbElt, T);
  
  printf("Nb de Majuscule : %d.\n", NbMaj(nbElt, T));
  
	return EXIT_SUCCESS;
}
