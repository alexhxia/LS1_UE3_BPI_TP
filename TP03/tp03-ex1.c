/** 
 * Alexia HOCINE 
 * BPI TP03 EX1
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int x, y, z;
	
  printf("Saisir deux entiers : ");
  scanf("%d%d", &x, &y);
  z = 1;
  if (x > 0 && y < 2) {
    x = x + 1;
    y = 0;
  } else {
    y = 2 * y;
    x = 0;
    z = 0;
  }  
  printf("%d %d %d\n", x, y, z);
  
	return EXIT_SUCCESS;
}
