/** 
 * Alexia HOCINE 
 * BPI TP04 EX5
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int x, v, k;
  scanf("%d", &x);
  v = 1;
  for (k = 1 ; k <= x ; ++k) {
    v = 2 * v;
  }  
  printf("%d\n", v);
	return EXIT_SUCCESS;
}
