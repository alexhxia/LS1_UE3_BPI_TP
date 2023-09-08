/** 
 * Alexia HOCINE 
 * BPI TP02 EX4
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int h, m, s;
	
  printf("Saisir une valeure horaire sous la forme h:m:s : ");
  scanf("%d:%d:%d", &h, &m, &s);
  s += (m  + h * 60) * 60 + 1;
  s = s % (24 * 3600);
  h = s / 3600;
  s -= h * 3600;
  m = s / 60;
  s -= m * 60;
  printf("%02d:%02d:%02d\n", h, m, s);
  
	return EXIT_SUCCESS;
}
