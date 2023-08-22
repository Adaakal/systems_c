#include <stdio.h>

int CalculateCost(int age, int units) {
   int cost;
   if (age > 18 && age < 27) {
      if (units > 7) {
         cost = (units - 7) * 100; 
      }
      else {
         cost = 0;
      }
   }
   else {
      if (units < 3) {
         cost = units * 100;
      }
      else {
         cost = (units - 2) * 400 + 300;
      }
   }
   return cost;
}
    
int main(void) {
   int costReturned = CalculateCost(19, 9);
   
   printf("%d\n", costReturned);
   
   return 0;
}