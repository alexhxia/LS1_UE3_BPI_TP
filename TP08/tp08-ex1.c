/** 
 * Alexia HOCINE 
 * BPI TP08 EX1
 */

#include <stdlib.h>
#include <stdio.h>

int ConjectureSyracuse(int n) {
  int t = 0;
  int k = n; 
  
  while (k > 1) {
    if (k % 2 == 0) {
      k /= 2;
    } else {
      k = 3 * k + 1;
    }
    ++t;
  }
  
  return t;
}

int main() {
  int n;
  
  printf("Entrez un entier : ");
  scanf("%d", &n);
  printf("La durée de vol de la conjoncture de Syracuse pour %d est %d.\n", 
      n, ConjectureSyracuse(n));
  
	return EXIT_SUCCESS;
}
