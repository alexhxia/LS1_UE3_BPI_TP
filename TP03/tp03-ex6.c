/** 
 * Alexia HOCINE 
 * BPI TP03 EX6
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  char c;
	
  printf("Saisir une lettre : ");
  scanf("%c", &c);
  
  if ('a' <= c && c <= 'z') {
    printf("%c", 'A' + (c - 'a'));
  } else if ('A' <= c && c <= 'Z') {
    printf("%c", 'a' + (c - 'A'));
  }
  
	return EXIT_SUCCESS;
}
