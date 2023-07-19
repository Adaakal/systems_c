#include<stdio.h>
#include<string.h>

int main(void) {
   
  char c[20] = { 0 };
  char newCase[20] = { 0 };
  int i;
  
  while(fgets(c, sizeof(c), stdin) != NULL) {
    for (int i = 0; i <= sizeof(c); ++i) {
      /*upper case to lower case */
      if ((c[i] >= 65) && (c[i] <= 90)) {
        newCase[i] = c[i] + 32;
      } //end if
      /*lower case to upper case */
      if ((c[i] >= 97) && (c[i] <= 122)) {
        newCase[i] = c[i] - 32;
      } //end if
    }//end for
    
    printf("%s\n", newCase);
    
    /* zero out the arrays */
    memset(c, 0, sizeof(c));
    memset(newCase, 0, sizeof(newCase));
  }//end while
  
  return 0;
}
