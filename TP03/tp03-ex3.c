/** 
 * Alexia HOCINE 
 * BPI TP03 EX3
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int x, y, z;
	
  printf("Saisir trois entiers : ");
  scanf("%d%d%d", &x, &y, &z);
  if (x > y && x > z) {
    printf("Le maximum est : %d\n", x);
  } else if (y > x && y > z) {
    printf("Le maximum est : %d\n", y);
  } else {
    printf("Le maximum est : %d\n", z);
  }
  
	return EXIT_SUCCESS;
}
