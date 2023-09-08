/** 
 * Alexia HOCINE 
 * BPI TP03 EX5
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  char a, b, c;
	
  printf("Saisir trois caractères : ");
  scanf("%c%c%c", &a, &b, &c);
  
  if (a <= b && a <=c) {
    if (b <= c) {
      printf("%c < %c < %c\n", a, b, c);
    } else {
      printf("%c < %c < %c\n", a, c, b);
    }
  } else if (b <= c && b <= a) {
    if (a <= c) {
      printf("%c < %c < %c\n", b, a, c);
    } else {
      printf("%c < %c < %c\n", b, c, a);
    }
  } else  {
    if (a <= b) {
      printf("%c < %c < %c\n", c, a, b);
    } else {
      printf("%c < %c < %c\n", c, b, a);
    }
  }
  
	return EXIT_SUCCESS;
}
