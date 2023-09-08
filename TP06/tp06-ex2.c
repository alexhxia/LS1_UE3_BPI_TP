/** 
 * Alexia HOCINE 
 * BPI TP06 EX2
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int n;
  
  n = 0;
  for (int k = 1 ; k <= 30 ; k++) {    
    if (k % 3 == 0) {
      printf("%d : multiple de 3\n", k);
    }
    ++n;
  }
  printf("\nNb d'itération : %d\n\n", n);
  
  n = 0;
  for (int k = 3 ; k <= 30 ; k = k + 3) {
    printf("%d", k);
    
    if (k % 3 == 0) {
      printf(" : multiple de 3\n");
    }
    ++n;
  }
  printf("\nNb d'itération : %d\n", n);
  
	return EXIT_SUCCESS;
}
