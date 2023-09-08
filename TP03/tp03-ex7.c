/** 
 * Alexia HOCINE 
 * BPI TP03 EX7
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  int h, m, s;
	
  printf("Saisir une horaire sous la forme h m s : ");
  scanf("%d %d %d", &h, &m, &s);
  
  ++s;
  while (s > 59) {
    s -= 60;
    ++m;
  }
  while (m > 59) {
    m -= 60;
    ++h;
  }
  h = h % 24;
  
  printf("%02d:%02d:%02d", h, m, s);
  
	return EXIT_SUCCESS;
}
