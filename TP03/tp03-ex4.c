/** 
 * Alexia HOCINE 
 * BPI TP03 EX4
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
  char c;
	
  printf("Saisir un caractère : ");
  scanf("%c", &c);
  
  if ('A' <= c && c <= 'Z') {
    printf("MAJUSCULE\n");
  } else if ('a' <= c && c <= 'z') {
    printf("MINUSCULE\n");
  } else if ('0' <= c && c <= '9') {
    printf("CHIFFRE\n");
  } else {
    printf("AUTRE\n");
  }
  
	return EXIT_SUCCESS;
}
