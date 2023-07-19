#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
  
  /* use getenv() to fetch environment variables */
  printf("your username is %s\n", getenv("USER"));
  printf("home directory is %s\n", getenv("HOME"));
  printf("preferred editor is %s\n", getenv("EDITOR"));
  printf("shell is %s\n", getenv("SHELL"));
}



