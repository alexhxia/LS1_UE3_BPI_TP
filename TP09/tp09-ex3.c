/** 
 * Alexia HOCINE 
 * BPI TP09 EX3
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
}

int MaxTab(int nbElt, int T[]) {
  int max = T[0];
  
  for (int k = 1 ; k < nbElt ; ++k) {
    if (max < T[k]) {
      max = T[k];
    }
  }
  
  return max;
}

int main() {
  int T[5] = {0, 0, 0, 0, 0};
  
  RemplirTab(5, T);
  
  AfficherTab(5, T);
  
  printf("Son maximum est : %d.\n", MaxTab(5, T));
  
	return EXIT_SUCCESS;
}
