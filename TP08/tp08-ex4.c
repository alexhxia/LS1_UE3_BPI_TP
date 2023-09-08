/** 
 * Alexia HOCINE 
 * BPI TP08 EX4
 */

#include <stdlib.h>
#include <stdio.h>

float Combinaison(int n, int p) {
  int nf, pf, npf, kf;
  
  nf = 1; pf = 1; npf = 1; kf = 1;
  for (int k = 2 ; k <= n || k <= p ; ++k) {
    kf *= k;
    if (k == n) {
      nf = kf;
      
    }
    if (p == k) {
      pf = kf;
      
    } 
    if ((n - p) == k) {
      npf = kf;
      
    }
  }
  
  return 1. * nf / npf / pf;
}

int main() {
  int n, p;
  
  printf("Entrez 2 entiers p, n : ");
  scanf("%d%d", &p, &n);
  printf("Combinaison de %d parmi %d est : %f.", p, n, Combinaison(p, n));
  
	return EXIT_SUCCESS;
}
