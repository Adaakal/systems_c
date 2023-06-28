#include <stdio.h>
#include <string.h>

// Declare an array named sandwichesList that stores 3 items of type Sandwich.

typedef struct Sandwich_struct
{
    char sandwichName[75];
    char ingredients[75];
} Sandwich;

int main(void)
{

    /* Your code goes here */
    Sandwich sandwichesInStore[3];

    strcpy(sandwichesInStore[0].sandwichName, "Chicken and Bacon");
    strcpy(sandwichesInStore[1].sandwichName, "Chicken breast");
    strcpy(sandwichesInStore[2].sandwichName, "Chicken with peppers");
    strcpy(sandwichesInStore[0].ingredients, "Crispy chicken, onions, lettuce, bacon, mayonnaise");
    strcpy(sandwichesInStore[1].ingredients, "Grilled chicken, lettuce, tomato");
    strcpy(sandwichesInStore[2].ingredients, "Grilled chicken, red and green peppers, barbecue sauce");

    printf("%s: %s\n", sandwichesInStore[0].sandwichName, sandwichesInStore[0].ingredients);
    printf("%s: %s\n", sandwichesInStore[1].sandwichName, sandwichesInStore[1].ingredients);
    printf("%s: %s\n", sandwichesInStore[2].sandwichName, sandwichesInStore[2].ingredients);

    return 0;
}