/**Write a single statement that reads an entire line from stdin. Assign streetAddress with the user input. Ex: If a user enters "1313 Mockingbird Lane", program outputs:
You entered: 1313 Mockingbird Lane
*/

#include <stdio.h>

int main(void)
{
    const int ADDRESS_SIZE_LIMIT = 50;
    char streetAddress[ADDRESS_SIZE_LIMIT];

    printf("Enter street address: ");

    /* Your solution goes here  */
    fgets(streetAddress, ADDRESS_SIZE_LIMIT, stdin);

    printf("You entered: %s", streetAddress);

    /**Complete scanf() to read two comma-separated integers from stdin. Assign userInt1 and userInt2 with the user input. Ex: "Enter two integers separated by a comma: 3, 5", program outputs:
    3 + 5 = 8*/
    int userInt1;
    int userInt2;

    printf("Enter two integers separated by a comma: ");
    scanf("%d, %d", &userInt1, &userInt2);
    printf("%d + %d = %d\n", userInt1, userInt2, userInt1 + userInt2);

    return 0;
}