#include <stdio.h>
#include <string.h>

int main(void)
{
    // char objectInfo[100] = "Shoes 14 19";
    // char object[50];
    // int quantity;
    // int price;

    // sscanf(objectInfo, "%s %d %d", object, &quantity, &price);

    // printf("%s x%d\n", object, quantity);
    // printf("Price: %d", price);

    char object1Info[100] = "Eraser 5 4";
    char object2Info[100] = "Mug 13 16";
    char object3Info[100] = "Headphones 21 26";

    char object[50];
    int quantity;
    int price;

    sscanf(object3Info, "%s %d %d", object, &quantity, &price);

    printf("%s x%d\n", object, quantity);
    printf("Price: %d", price);

    return 0;
}