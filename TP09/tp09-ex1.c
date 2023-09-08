/** 
 * Alexia HOCINE 
 * BPI TP09 EX1
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int T[5] = {0, 0, 0, 0, 0};
  
  printf("Entrez 5 entiers : \n");
  for (int k = 0 ; k < 5 ; ++k) {
    scanf("%d", &T[k]);
  }  
  
  printf("Le tableau contient les valeurs : \n");
  for (int k = 0 ; k < 5 ; ++k) {
    printf("%d ", T[k]);
  }
  
	return EXIT_SUCCESS;
}
