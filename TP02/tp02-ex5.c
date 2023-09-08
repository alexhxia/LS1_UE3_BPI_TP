/** 
 * Alexia HOCINE 
 * BPI TP02 EX5
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int s, d;
	
  printf("Penser très fort à deux entiers. ");
  printf("Saisir leur somme et leur différence : ");
  scanf("%d %d", &s, &d);
  printf("Ce sont vos deux entiers : %.2f %.2f.\n", (s + d) / 2., (s - d) / 2.);
  
	return EXIT_SUCCESS;
}
