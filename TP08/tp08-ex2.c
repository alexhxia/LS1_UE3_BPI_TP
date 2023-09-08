/** 
 * Alexia HOCINE 
 * BPI TP08 EX2
 */

#include <stdlib.h>
#include <stdio.h>

void Etoile(int h) {
  
  for (int i = 1 ; i <= h; ++i) {
    printf("   ");
    for (int j = 1 ; j <= h; ++j) {
      if (i == j || i == h + 1 - j) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
}

int main() {
  int n;
  
  printf("Entrez une hauteur : ");
  scanf("%d", &n);
  Etoile(n);
  
	return EXIT_SUCCESS;
}
