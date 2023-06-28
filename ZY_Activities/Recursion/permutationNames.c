#include <stdlib.h>
#include <stdio.h>
#include <string.h>

const int MAX_NAME_SIZE = 50; 

// TODO: Write function to create and output all permutations of 
// the list of names.
void PrintAllPermutations(char **permList, int permSize, char **nameList, int nameSize) {
    char tempList[MAX_NAME_SIZE];
    int i;

    if (permSize == nameSize) {
        for (i = 0; i < nameSize; ++i) {
            printf("%s ", permList[i]);
        }
        printf("\n");
    }
    else {
        for (i = 0; i < nameSize; ++i) {
            if (nameList[i] != NULL) {
                strcpy(tempList, nameList[i]);
                permList[permSize] = tempList;
                nameList[i] = NULL;
                
                PrintAllPermutations(permList, permSize + 1, nameList, nameSize);
                
                nameList[i] = tempList;
            }
        }
    }   
    
}

int main(void) {
   int size;
   int i = 0;
   char name[MAX_NAME_SIZE];
   scanf("%d", &size);
   char *nameList[size];
   char *permList[size];

   for (i = 0; i < size; ++i) {
      nameList[i] = (char *)malloc(MAX_NAME_SIZE);
      scanf("%s", name);
      strcpy(nameList[i], name);
   }

   PrintAllPermutations(permList, 0, nameList, size);
   
   // Free dynamically allocated memory
   for (i = 0; i < size; ++i) {
      free(nameList[i]);
   }
   
   return 0;
}