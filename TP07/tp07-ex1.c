/** 
 * Alexia HOCINE 
 * BPI TP07 EX1
 */

#include <stdlib.h>
#include <stdio.h>

float Polynome(float x) {
  float resultat;
  
  resultat = 3 * x * x - 4 * x + 1;
  
  return resultat;
}

int main() {
  float v, r;
  
  printf("Entrez une valeur de type flottant : ");
  scanf("%f", &v);
  r = Polynome(v);
  printf("La valeur du polynome pour %f est %f.\n", v, r);
  
	return EXIT_SUCCESS;
}
