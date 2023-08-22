#include <stdio.h>

double ComputeAverage(int numCount) {
   double valuesSum = 0;
   int currValue = 0;

   for (int i = 0; i < numCount; ++i) {
      printf("Enter number: ");
      scanf("%d", &currValue);
      valuesSum += currValue;
   }

   return valuesSum / numCount;
}

int main(void) {
   int numValues;
   double averageVal;

   printf("Enter number of values: ");
   scanf("%d", &numValues);
   averageVal = ComputeAverage(numValues);

   printf("Average: ");
   printf("%.3f\n", averageVal);
   return 0;
}