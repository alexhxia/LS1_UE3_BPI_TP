/** 
 * Alexia HOCINE 
 * BPI TP01 EX4
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
	int p, q;
  float x, y;
	
	printf("Entrez 2 entiers puis un réel : ");
  scanf("%d %d %f", &p, &q, &x);
  y = p * x / q;
  printf("%f", y);
	return EXIT_SUCCESS;
}
