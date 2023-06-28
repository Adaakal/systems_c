#include <stdio.h>
#include <string.h>

// Assign listOfPizzas's first element's caloriesInSlice with the value in listOfPizzas's second element's caloriesInSlice.

typedef struct Pizza_struct
{
    char pizzaName[75];
    int caloriesInSlice;
} Pizza;

int main(void)
{
    Pizza listOfPizzas[2];

    scanf("%s", listOfPizzas[0].pizzaName);
    scanf("%d", &listOfPizzas[0].caloriesInSlice);

    scanf("%s", listOfPizzas[1].pizzaName);
    scanf("%d", &listOfPizzas[1].caloriesInSlice);

    /* Your code goes here */
    listOfPizzas[0].caloriesInSlice = listOfPizzas[1].caloriesInSlice;

    printf("A %s slice contains %d calories.\n", listOfPizzas[0].pizzaName, listOfPizzas[0].caloriesInSlice);
    printf("A %s slice contains %d calories.\n", listOfPizzas[1].pizzaName, listOfPizzas[1].caloriesInSlice);

    return 0;
}