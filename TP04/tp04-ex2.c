/** 
 * Alexia HOCINE 
 * BPI TP04 EX2
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int x, y;
  char c;
  
  printf("Saisir deux entiers et un opérateur : ");
  scanf("%d %d %c", &x, &y, &c);
  
  if (c == '+') {
    printf("%d %c %d = %d", x, c, y, x + y);
  } else if (c == '-') {
    printf("%d %c %d = %d", x, c, y, x - y);
  } else if (c == '*') {
    printf("%d %c %d = %d", x, c, y, x * y);
  } else if (c == '/') {
    printf("%d %c %d = %.2f", x, c, y, 1. * x / y);
  } else {
    printf("%c n'est pas une opération arithmétique.", c);
  }
  
	return EXIT_SUCCESS;
}
