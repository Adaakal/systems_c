/**To make the program work and retrieve the file information, you can add the `stat` 
 * function call with the appropriate argument. 
 * In this case, the argument should be argv[1], which represents the input file name.
**/

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>


int main(int argc, char *argv[]) {
    struct stat fileinfo;   // returned info about a file
    int i;
    
    if (argc != 2) {
        printf("Usage: statfile filename\n");
        exit(0);
    }
    
    i = stat(argv[1], &fileinfo); // stat function call to retrieve file information
    
    if (i == -1) {
        printf("Unable to stat %s\n", argv[1]);
        exit(0);
    }
    
    printf("size: %ld\n", fileinfo.st_size);
    printf("permissions: %o\n", fileinfo.st_mode);
    printf("last modified: %s\n", ctime(&fileinfo.st_mtime));
    
    return 0;
}
