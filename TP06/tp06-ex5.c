/** 
 * Alexia HOCINE 
 * BPI TP06 EX5
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int k, u0, un;
  
  printf("Saisir une valeur initiale et un rang : \n");
  scanf("%d%d", &u0, &k);
  
  un = u0;
  for (int i = 1 ; i <= k ; ++i) {
    if (un % 2 == 0) {
      un = un / 2;
    } else {
      un = (3 * un + 1) / 2;
    }
  }
  printf("La valeur du rang %d est %d", k, un);
  
	return EXIT_SUCCESS;
}
