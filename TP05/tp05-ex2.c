/** 
 * Alexia HOCINE 
 * BPI TP05 EX2
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int m, n;
  
  printf("Saisir deux entiers positifs : ");
  scanf("%d %d", &m, &n);
  
  for (int i = 1 ; i <= m ; ++i) {
    ++n;
  }  
  printf("%d\n", n);
  
	return EXIT_SUCCESS;
}
