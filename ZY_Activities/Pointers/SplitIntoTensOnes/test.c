#include <stdio.h>

void testSplitIntoTensOnes()
{
    int tensPlace;
    int onesPlace;
    int userInt;

    // Test Case 1
    userInt = 41;
    testSplitIntoTensOnes(&tensPlace, &onesPlace, userInt);
    printf("Test Case 1: userInt = %d\n", userInt);
    printf("  Expected Output: tensPlace = 4, onesPlace = 1\n");
    printf("  Actual Output: tensPlace = %d, onesPlace = %d\n", tensPlace, onesPlace);
    printf("\n");

    // Test Case 2
    userInt = 99;
    testSplitIntoTensOnes(&tensPlace, &onesPlace, userInt);
    printf("Test Case 2: userInt = %d\n", userInt);
    printf("  Expected Output: tensPlace = 9, onesPlace = 9\n");
    printf("  Actual Output: tensPlace = %d, onesPlace = %d\n", tensPlace, onesPlace);
    printf("\n");

    // Add more test cases as needed
}

int main(void)
{
    testSplitIntoTensOnes();

    return 0;
}
