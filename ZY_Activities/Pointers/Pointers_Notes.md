### 8.1 Why pointers: Pass by pointer example ###

Imagine a function that converts total inches into feet and inches. To return two values,
the function can be defined with two **pass by pointer** parameters, by putting a \* before
a parameter name, and \& before the corresponding argument variable^parm.

The & passes the variable's memory address known as a **pointer**, rather than the variable's value.
The \* before the parameter name indicates the parameter is a pointer. The function's statements can update
each argument variable's memory location, effectively "returning" a value. The technique is also known
as **pass by reference**, but the term pass by pointer avoids confusion with pass by reference, parameters in
C++ programs (which are different).


ConvFeetInches' parameters are passed by value, so the arguments' values are copied into local variables.
Upon return, ConvFeetInches' are discarded so the function fails to update the resFeet and resIn variables.

`#include <stdio.h>
#include <stdlib.h>

void ConvFeetInches(int totDist,
                 int inFeet, int inInches) {
   inFeet  = totDist / 12;
   inInches = totDist % 12;
}

int main(void) {
   int initMeasure;
   int resFeet;
   int resIn;

   initMeasure = 45;
   resFeet = 0;
   resIn = 0;

   ConvFeetInches(initMeasure, resFeet, resIn);
   printf("%d feet %d inches\n", resFeet, resIn);

   return 0;
}`

The & before the argument indicates that a variable's memory addresses, known as a pointer, is passed to a pass-by-pointer parameter. The * before the parameter name indicates the parameter is a pointer.
Prepending "*" to a pointer variable's name accesses the value pointed to by the pointer, so the original variable is updated.
Upon return from ConvFeetInches, resFeet and resIn retain their updated values, effectively "returning" two values.

`#include <stdio.h>
#include <stdlib.h>

void ConvFeetInches(int totDist,
                  int* inFeet, int* inInches) {
   *inFeet  = totDist / 12;
   *inInches = totDist % 12;
}

int main(void) {
   int initMeasure;
   int resFeet;
   int resIn;

   initMeasure = 45;
   resFeet = 0;
   resIn = 0;

   ConvFeetInches(initMeasure, &resFeet, &resIn);
   printf("%d feet %d inches\n", resFeet, resIn);

   return 0;
}
`

## Common Pointer Errors ##
```char someChar = 'Z';```
```char* valPointer;```
```*valPointer = &someChar;```
-------------------------------
*syntax error*
-------------------------------
A pointer cannot be assigned with an address
when using the dereference operator *. The 
correct way to assign 
valPointer: ```valPointer = &someChar;```
-------------------------------

```char* newPointer = NULL;```
```char someChar = 'A';```
```*newPointer = 'B';```
-------------------------------
*runtime error*
-------------------------------
newPointer is initialized with NULL 
when it's dereferenced and assigned 'B'.
Dereferencing a null pointer causes the 
program to crash.

