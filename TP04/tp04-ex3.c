/** 
 * Alexia HOCINE 
 * BPI TP04 EX3
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int nbkm, nbJ;
  float p1, p2, f1, f2;
  
  printf("Saisir le prix 1 : ");
  scanf("%f", &p1);
  
  printf("Saisir le prix 2 : ");
  scanf("%f", &p2);
  
  printf("Saisir le nb de km : ");
  scanf("%d", &nbkm);
  
  printf("Saisir le nb de jours : ");
  scanf("%d", &nbJ);
  
  f1 = 1. * 80 * nbJ;
  if (nbkm / nbJ > 500) {
    f1 += 1. * p1 * nbkm / nbJ;
  }
  
  if (nbkm >= 2000) {
    f2 = 1. * 2000 * p2 + (nbkm - 2000) * p2 * 0.885;
  } else {
    f2 = 1. * nbkm * 2000;
  }
  
  if (f1 > f2) {
    printf("Le forfait p2 est plus avantageux : %f", f2);
  } else {
    printf("Le forfait p1 est plus avantageux : %f", f1);
  }
  
	return EXIT_SUCCESS;
}
