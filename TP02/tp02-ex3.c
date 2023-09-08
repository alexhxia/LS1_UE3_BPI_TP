/** 
 * Alexia HOCINE 
 * BPI TP02 EX3
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int h, m, s;
	
  printf("Saisir une valeure horaire en s : ");
  scanf("%d", &s);
  s = s % (24 * 3600);
  h = s / 3600;
  s -= h * 3600;
  m = s / 60;
  s -= m * 60;
  printf("%02d:%02d:%02d\n", h, m, s);
  
	return EXIT_SUCCESS;
}
