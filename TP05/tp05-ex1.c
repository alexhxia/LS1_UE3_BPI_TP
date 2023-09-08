/** 
 * Alexia HOCINE 
 * BPI TP05 EX1
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int m, n, s;
  
  printf("Saisir deux entiers positifs : ");
  scanf("%d %d", &m, &n);
  
  for (int i = 1 ; i <= m ; ++i) {
    for (int j = 1 ; j <= n ; ++j) {
      s += i + j;
    }  
  }  
  printf("%d\n", s);
  
	return EXIT_SUCCESS;
}
