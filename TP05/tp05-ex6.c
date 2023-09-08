/** 
 * Alexia HOCINE 
 * BPI TP05 EX6
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int n;
  float s;
  
  printf("Saisir un entier positif : ");
  scanf("%d", &n);
  
  s = 1;
  for (int k = 2 ; k <= n ; k++) {
    s += 1. / k;
  }
  printf("%f", s);
  
	return EXIT_SUCCESS;
}
