/** 
 * Alexia HOCINE 
 * BPI TP06 EX1
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int n;
  
  n = 0;
  for (int k = 1 ; k <= 30 ; k++) {
    printf("%d", k);
    
    if (k % 3 == 0) {
      printf(" : multiple de 3\n");
    } else {
      printf(" : non multiple de 3\n");
    }
    ++n;
  }
  
  printf("\nNb d'itération : %d\n", n);
  
	return EXIT_SUCCESS;
}
