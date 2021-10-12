#include <stdio.h>
#include <stdlib.h>
 
int main () {
   int i, n;
   time_t t;
   
   n = 10;
   
  
   srand((unsigned) time(&t));
 
   
   for( i = 0 ; i < n ; i++ ) {
      printf("%d\n", rand() % 70);
   }
   
   return(0);
}
