/** 
 * Alexia HOCINE 
 * BPI TP12 EX1
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

void initTab(size_t tailleT, int T[]) {
  for (int k = 0 ; k < tailleT ; ++k) {
    T[k] = 0;
  }
}

// 0 == true && 1 == false
int isParfait(int n) {
  int nbDiviseur = 0;
  int s = 0;
  int nbDivMax = n;
  int tabDiviseur[nbDivMax];
  
  initTab(nbDivMax, tabDiviseur);
  
  for (int k = 1 ; k < nbDivMax ; ++k) {
    if (n % k == 0) {
      tabDiviseur[nbDiviseur] = k;
      ++nbDiviseur;
    }
  }
  
  for (int k = 0 ; k < nbDiviseur ; ++k) {
    s += tabDiviseur[k];
  }
  
  return s == n;
}

int main() {
  int n;
  
  printf("Saisir un entier positif : ");
  scanf("%d", &n);
  
  if (isParfait(n)) {
    printf("L'entier %d est parfait.", n);
  } else {
    printf("L'entier %d n'est pas parfait.", n);
  }
    
	return EXIT_SUCCESS;
}
