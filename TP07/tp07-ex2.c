/** 
 * Alexia HOCINE 
 * BPI TP07 EX2
 */

#include <stdlib.h>
#include <stdio.h>

float Max(int x, int y) {
  if (x >= y) {
    return x;
  } else {
    return y;
  }
}

int main() {
  int max, a, b, c, d;
  
  printf("Entrez 4 entiers : ");
  scanf("%d%d%d%d", &a, &b, &c, &d);
  max = Max(a, Max(b, Max(c, d)));
  printf("La valeur maximum est %d.\n", max);
  
	return EXIT_SUCCESS;
}
