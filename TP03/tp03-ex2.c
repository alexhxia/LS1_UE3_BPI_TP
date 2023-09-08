/** 
 * Alexia HOCINE 
 * BPI TP03 EX2
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int x, y;
	
  printf("Saisir deux entiers : ");
  scanf("%d%d", &x, &y);
  if (x > y) {
    printf("Le maximum est : %d\n", x);
  } else {
    printf("Le maximum est : %d\n", y);
  }  
  
	return EXIT_SUCCESS;
}
