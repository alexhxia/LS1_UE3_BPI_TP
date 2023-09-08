/** 
 * Alexia HOCINE 
 * BPI TP06 EX3
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int n, n2;
  float s, t, x;
  
  printf("Saisir une somme initiale et un taux annuel :");
  scanf("%f %f", &s, &t);
  
  printf("Saisir un nb d'année :");
  scanf("%d", &n);
  
  x = s;
  for (int k = 1 ; k <= n ; ++k) {
    x = x * (1 + t * 0.01);
  }
  printf("Au bout de %d, vous aurez : %0.2f\n", n, x);
  
  x = s; n2 = 0;
  while (x <= 2 * s) {
    x = x * (1 + t * 0.01);
    ++n2;
  }
  printf("Au bout de %d, vous aurez au moins doublé : %0.2f\n", n2, x);
  
	return EXIT_SUCCESS;
}
