#include <stdio.h>
// Define a function UpdateTimeWindow() with parameters timeStart, timeEnd, and offsetAmount. Each parameter is of type int. The function adds offsetAmount to each of the first two parameters. Make the first two parameters pass by pointer.

// Define void UpdateTimeWindow(...)

/* Your solution goes here  */
void UpdateTimeWindow(int *timeStart, int *timeEnd, int offsetAmount)
{
    *timeStart += offsetAmount;
    *timeEnd += offsetAmount;
}

int main(void)
{
    int timeStart;
    int timeEnd;
    int offsetAmount;

    scanf("%d", &timeStart);
    scanf("%d", &timeEnd);
    scanf("%d", &offsetAmount);
    printf("timeStart = %d, timeEnd = %d\n", timeStart, timeEnd);

    UpdateTimeWindow(&timeStart, &timeEnd, offsetAmount);
    printf("timeStart = %d, timeEnd = %d\n", timeStart, timeEnd);

    return 0;
}