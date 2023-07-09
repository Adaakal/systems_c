//To print all the entries within the directory, you can use the readdir function call within a loop.

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>



int main(int argc, char* argv[]) {
    DIR *directory;            // the directory
    struct dirent *entry;      // each entry
    
    directory = opendir(".");  // open the directory
    
    if (directory == NULL) {
        printf("Unable to open directory.\n");
        exit(0);
    }
    
    while (1) {
        entry = readdir(directory);  // readdir function call to read the next directory entry
        
        if (entry == NULL)
            break;
        
        printf("%s\n", entry->d_name);
    }
    
    closedir(directory);  // close the directory
    
    return 0;
}
