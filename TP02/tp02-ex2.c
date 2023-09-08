/** 
 * Alexia HOCINE 
 * BPI TP02 EX2
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int h, m, s;
	
  printf("Saisir une valeure horaire sous la forme h:m:s : ");
  scanf("%d:%d:%d", &h, &m, &s);
  s += (m  + h * 60) * 60;
  printf("%d\n", s);
  
	return EXIT_SUCCESS;
}
