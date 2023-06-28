#include <stdio.h>

void BackwardsAlphabet(char currLetter) {
    if (currLetter == 'a') {
        printf("%c\n", currLetter);
    }
    else {
        printf("%c ", currLetter);
        BackwardsAlphabet(currLetter - 1);
    }

}

int main(void) {
    char startingLetter;
    printf("Enter a letter in the alphabet: ");
    scanf("%c", &startingLetter);

    BackwardsAlphabet(startingLetter);

    return 0;
}