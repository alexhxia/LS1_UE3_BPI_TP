/** 
 * Alexia HOCINE 
 * BPI TP10 EX3
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char ROT13_Maj(char c) {
  return (char) ('A' + ((c - 'A' + 13) % 26));
}

void ROT13(size_t n, char chaine[]) {
  for (int k = 0 ; k < n ; ++k) {
    chaine[k] = ROT13_Maj(chaine[k]);
  }
}

int main() {
  size_t n = 20; 
  char chaine[n];
  
  printf("Saisir une chaine de caractères majuscules : ");
  scanf("%s", chaine);
  ROT13(strlen(chaine), chaine);
  printf("%s\n", chaine);
    
	return EXIT_SUCCESS;
}
