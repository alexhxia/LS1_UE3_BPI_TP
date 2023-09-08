/** 
 * Alexia HOCINE 
 * BPI TP06 EX4
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int n, max;
  
  printf("Saisir des entiers positifs : \n");
  n = 0; max = 0;
  while (n >= 0) {
    scanf("%d\n", &n);
    if (max < n) {
      max = n;
    }
  }
  printf("Maximum saisi : %d\n", max);
  
	return EXIT_SUCCESS;
}
