/** 
 * Alexia HOCINE 
 * BPI TP04 EX1
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int t;
  
  printf("Saisir une année > 1582 : ");
  scanf("%d", &t);
  
  if (t > 1582 && ((t % 400 == 0) || (t % 100 != 0 && t % 4 == 0))) {
    printf("%d est une année bissextile.", t);
  } else {
    printf("%d n'est pas une année bissextile.", t);
  }
  
	return EXIT_SUCCESS;
}
