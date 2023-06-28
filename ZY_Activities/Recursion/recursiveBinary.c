#include <stdio.h>

void GuessNumber(int lowVal, int highVal) {
    int midVal;            // Midpoint of low and high value
    char userAnswer;       // User response

    midVal = (highVal + lowVal) / 2;

    // Prompt user 
    printf("Is it %d? (l/h/y): \n", midVal);
    scanf(" %c", &userAnswer);

    if ( (userAnswer != 'l') && (userAnswer != 'h') ) {
        printf("Thank you!\n");
    }
    else {
        if (userAnswer == 'l') {
            // Guess lower number
            GuessNumber(lowVal, midVal);
        }
        else {
            // Guess higher number
            GuessNumber(midVal, highVal);
        }
    }
}

int main(void) {
    // Print game objective, user input commands
    printf("Choose an integer between 1 and 100.\n");
    printf("Answer with:\n");
    printf("\tl (your num is lower)\n");
    printf("\th (your num is higher)\n");
    printf("\ty (correct! I got it!)\n\n");

    // Call recursive function
    GuessNumber(0, 100);

    return 0;
}