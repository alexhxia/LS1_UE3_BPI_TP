/** 
 * Alexia HOCINE 
 * BPI TP10 EX4
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void RenverseTab(size_t n, char chaine[]) {
  char t;
  printf("size : %d\n", (int) n);
  for (int k = 0 ; k < n / 2 ; ++k) {
    t = chaine[k];
    chaine[k] = chaine[n - k - 1];
    chaine[n - k - 1] = t;
  }
}

int main() {
  size_t n = 20; 
  char chaine[n];
  
  printf("Saisir une chaine de caractères : ");
  scanf("%s", chaine);
  RenverseTab(strlen(chaine), chaine);
  printf("%s\n", chaine);
    
	return EXIT_SUCCESS;
}
