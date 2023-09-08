/** 
 * Alexia HOCINE 
 * BPI TP07 EX4
 */

#include <stdlib.h>
#include <stdio.h>

int Factorielle(int n) {
  int f = 1; 
  
  for (int k = 2 ; k <= n ; ++k) {
    f *= k;
  }
  return f;
}

int main() {
  int n;
  
  printf("Entrez un entier : ");
  scanf("%d", &n);
  printf("La factorielle de %d est : %d.\n", n, Factorielle(n));
  
	return EXIT_SUCCESS;
}
