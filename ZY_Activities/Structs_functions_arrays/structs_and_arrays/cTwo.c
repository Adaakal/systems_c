#include <stdio.h>
#include <string.h>

// Assign Barbecue's data member numberOfCalories with a value read from input. Then, assign Ham and Cheese's data member numberOfCalories with another value read from input. Input will contain two integer numbers.

typedef struct Pizza_struct
{
    char pizzaName[75];
    int numberOfCalories;
} Pizza;

int main(void)
{
    Pizza pizzasList[2];

    strcpy(pizzasList[0].pizzaName, "Barbecue");
    strcpy(pizzasList[1].pizzaName, "Ham and Cheese");

    /* Your code goes here */
    scanf("%d", &pizzasList[0].numberOfCalories);
    scanf("%d", &pizzasList[1].numberOfCalories);
    
    scanf("%d", &pizzasList[0].numberOfCalories);
    scanf("%d", &pizzasList[1].numberOfCalories);

    printf("A %s slice contains %d calories.\n", pizzasList[0].pizzaName, pizzasList[0].numberOfCalories);
    printf("A %s slice contains %d calories.\n", pizzasList[1].pizzaName, pizzasList[1].numberOfCalories);

    return 0;
}