// #include <stdio.h>

// int NFact(int N) {
//     int factResult;

//     if(N<=1) {
//         factResult = 1;
//     } else {
//        factResult = N * NFact(N-1);
//     }
//     return factResult;
// }

// int main(void) {
//     int inputVal;

//     printf("Enter number: ");
//     scanf("%d", &inputVal);

//     printf("Input val: %d  Result is %d\n", inputVal, NFact(inputVal));
// }

#include <stdio.h>

void count_down(int n);

int main()

{

    count_down(5);

}

void count_down(int n)

{

if (n)

{

printf("%d ! ", n);

count_down(n - 1);

}

else

printf("Blast Off!\n");

}