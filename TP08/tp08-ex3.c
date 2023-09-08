/** 
 * Alexia HOCINE 
 * BPI TP08 EX3
 */

#include <stdlib.h>
#include <stdio.h>

void Triangle(int n) {
  
  for (int i = 1 ; i <= n; ++i) {
    for (int j = 1 ; j <= i; ++j) {
      printf("%d", i);
    }
    printf("\n");
  }
}

int main() {
  int n;
  
  printf("Entrez un entier : ");
  scanf("%d", &n);
  Triangle(n);
  
	return EXIT_SUCCESS;
}
