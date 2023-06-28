#include <stdio.h>
// What is the output of the following code snippet :

char c1 = 'A';
char c2 = 'B';
char tmp;

char *p = &c1;
char *q = &c2;

tmp = *p;
*p = *q;
*q = tmp;

printf("%c, %c, %c", tmp, *p, *q);