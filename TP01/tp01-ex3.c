/** 
 * Alexia HOCINE 
 * BPI TP01 EX3
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
	int n,m;
	
	printf("Entrez 2 valeurs entières : ");
  scanf("%d %d", &n, &m);
	printf("Leur somme est : %d\n", n + m);
	printf("Leur différence est : %d\n", n - m);
	printf("Leur produit est : %d\n", n * m);
	printf("Leur quotient est : %f\n", 1. * n / m);
	printf("Leur moyenne est : %f\n", (n + m) / 2.);
	return EXIT_SUCCESS;
}
