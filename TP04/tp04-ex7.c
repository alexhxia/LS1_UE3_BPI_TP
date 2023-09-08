/** 
 * Alexia HOCINE 
 * BPI TP04 EX7
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int n, s;
  
  printf("Saisir un entier positf : ");
  scanf("%d", &n);
  
  for (int k = 2 ; k <= n ; k += 2) {
    s += k;
  }  
  printf("%d\n", s);
  
	return EXIT_SUCCESS;
}
