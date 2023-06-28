#include <stdio.h>

void CountDown(int countInt) {
    if (countInt <= 0) {
        printf("Go!\n");
    }
    else {
        printf("%d\n", countInt);
        CountDown(countInt - 1);
    }
}

int main(void) {
    CountDown(5);
    return 0;
}u908u7y87huyhuyhbnu90juiou