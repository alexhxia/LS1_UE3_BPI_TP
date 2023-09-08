/** 
 * Alexia HOCINE 
 * BPI TP05 EX4
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int n, f;
  
  printf("Saisir un entier positif : ");
  scanf("%d", &n);
  
  f = 1;
  for (int k = 2 ; k <= n ; k++) {
    f *= k;
  }
  printf("%d\n", f);
  
	return EXIT_SUCCESS;
}
