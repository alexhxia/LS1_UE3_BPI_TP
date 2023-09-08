/** 
 * Alexia HOCINE 
 * BPI TP04 EX6
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int n, s;
  
  printf("Saisir un entier positf : ");
  scanf("%d", &n);
  
  for (int k = 1 ; k <= n ; k += 2) {
    s += k;
  }  
  printf("%d\n", s);
  
	return EXIT_SUCCESS;
}
