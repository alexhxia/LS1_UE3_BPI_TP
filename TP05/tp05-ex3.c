/** 
 * Alexia HOCINE 
 * BPI TP05 EX3
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int m, n;
  
  printf("Saisir deux entiers positifs : ");
  scanf("%d", &n);
  
  m = 0;
  while (n > 0) {
    m *= 10;
    m += n % 10;
    n /= 10;
  }
  printf("%d\n", m);
  
	return EXIT_SUCCESS;
}
