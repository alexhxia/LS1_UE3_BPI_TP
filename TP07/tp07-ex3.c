/** 
 * Alexia HOCINE 
 * BPI TP07 EX3
 */

#include <stdlib.h>
#include <stdio.h>

float ConversionHoraireEnSeconde(int h, int m, int s) {
  return s + 60 * (m + 60 * h);
}

int main() {
  int t, h, m, s;
  
  printf("Entrez une horaire sous le format h:m:s : ");
  scanf("%d:%d:%d", &h, &m, &s);
  t = ConversionHoraireEnSeconde(h, m, s);
  printf("Cette horaire en seconde est : %d.\n", t);
  
	return EXIT_SUCCESS;
}
