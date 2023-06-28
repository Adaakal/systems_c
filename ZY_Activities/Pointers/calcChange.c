#include <stdio.h>

// Complete the program to compute the number of quarter, dime, nickel, and penny coins that equal total cents, using the fewest coins (i.e., using the most possible of a larger coin first).

void ComputeChange(int totCents, int* numQuarters, int* numDimes, int* numNickels, int* numPennies)
{ // FIXME add four pass by pointer parameters
    *numQuarters = totCents / 25;
    *numDimes = (totCents % 25) / 10;
    *numNickels = ((totCents % 25) % 10) / 5;
    *numPennies = ((totCents % 25) % 10) % 5;
    printf("%d quarters %d dimes %dnickels %d cents\n", *numQuarters, *numDimes, *numNickels, *numPennies);
}

int main(void)
{

    int totalCents;     // Total amount of change needed
    int quartersChange; // Number of quarters used for change
    int dimesChange;    // Number of dimes used for change
    int nickelsChange;  // Number of nickels used for change
    int penniesChange;  // Number of pennies used for change

    totalCents = 67;

    ComputeChange(totalCents, &quartersChange, &dimesChange, &nickelsChange, &penniesChange); // FIXME Add four pointer arguments

    printf("Change for %d cents is:\n", totalCents);
    printf("  %d quarters\n", quartersChange);
    printf("  %d dimes\n", dimesChange);
    printf("  %d nickels\n", nickelsChange);
    printf("  %d pennies\n", penniesChange);

    return 0;
}
