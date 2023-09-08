/** 
 * Alexia HOCINE 
 * BPI TP09 EX5
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

int MaxTab(int nbElt, int T[]) {
  int max = T[0];
  
  for (int k = 1 ; k < nbElt ; ++k) {
    if (max < T[k]) {
      max = T[k];
    }
  }
  
  return max;
}

int MinTab(int nbElt, int T[]) {
  int min = T[0];
  
  for (int k = 1 ; k < nbElt ; ++k) {
    if (min > T[k]) {
      min = T[k];
    }
  }
  
  return min;
}

int main() {
  int nbElt = 5, T[nbElt], moyenne;
  
  RemplirTab(nbElt, T);
  
  AfficherTab(nbElt, T);
  
  moyenne = (SommeTab(nbElt, T) - MinTab(nbElt, T) - MaxTab(nbElt, T)) 
      / (nbElt - 2);
  printf("La moyenne Olympique est : %d.\n", moyenne);
  
	return EXIT_SUCCESS;
}
