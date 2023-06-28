#include <stdio.h>
void PrintNumPattern(int num1, int num2)
{
    // Base case
    if (num1 < 0)
    {
        printf("%d ", num1);
        return;
    }
    // Output decreasing order first
    printf("%d ", num1);
    PrintNumPattern(num1 - num2, num2);
    // Output increasing order
    printf("%d ", num1);
}
int main(void)
{
    int num1;
    int num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    PrintNumPattern(num1, num2);
}
