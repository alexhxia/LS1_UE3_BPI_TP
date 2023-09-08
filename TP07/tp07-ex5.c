/** 
 * Alexia HOCINE 
 * BPI TP07 EX5
 */

#include <stdlib.h>
#include <stdio.h>

int Rectangle(int n) {
  int f = 1; 
  
  for (int i = 1 ; i <= n ; ++i) {
    for (int j = 1 ; j <= n ; ++j) {
      if (i == 1 || j == 1 || i == n || j == n) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return f;
}

int main() {
  int n;
  
  printf("Entrez un entier : ");
  scanf("%d", &n);
  Rectangle(n);
  
	return EXIT_SUCCESS;
}
