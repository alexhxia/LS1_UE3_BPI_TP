/** 
 * Alexia HOCINE 
 * BPI TP05 EX5
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int n, m;
  
  printf("Saisir un entier positif : ");
  scanf("%d", &n);
  
  for (int k = 1 ; k < n ; k++) {
    printf("*\n");
  }
  
  m = n / 2 + 1;
  for (int k = 1 ; k <= m ; k++) {
    printf("*");
  }
  
	return EXIT_SUCCESS;
}
