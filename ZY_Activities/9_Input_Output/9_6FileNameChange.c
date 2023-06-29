/*A photographer is organizing a photo collection about the national parks in the US and would like to annotate the information about each of the photos into a separate set of files. Write a program that reads the name of a text file containing a list of photo file names. The program then reads the photo file names from the text file, replaces the "_photo.jpg" portion of the file names with "_info.txt", and outputs the modified file names.

Assume the unchanged portion of the photo file names contains only letters and numbers, and the text file stores one photo file name per line. If the text file is empty, the program produces no output. Assume also the maximum number of characters of all file names is 100.

Ex: If the input of the program is:

ParkPhotos.txt
and the contents of ParkPhotos.txt are:

Acadia2003_photo.jpg
AmericanSamoa1989_photo.jpg
BlackCanyonoftheGunnison1983_photo.jpg
CarlsbadCaverns2010_photo.jpg
CraterLake1996_photo.jpg
GrandCanyon1996_photo.jpg
IndianaDunes1987_photo.jpg
LakeClark2009_photo.jpg
Redwood1980_photo.jpg
VirginIslands2007_photo.jpg
Voyageurs2006_photo.jpg
WrangellStElias1987_photo.jpg
the output of the program is:

Acadia2003_info.txt
AmericanSamoa1989_info.txt
BlackCanyonoftheGunnison1983_info.txt
CarlsbadCaverns2010_info.txt
CraterLake1996_info.txt
GrandCanyon1996_info.txt
IndianaDunes1987_info.txt
LakeClark2009_info.txt
Redwood1980_info.txt
VirginIslands2007_info.txt
Voyageurs2006_info.txt
WrangellStElias1987_info.txt
*/

#include <stdio.h>
#include <string.h>

const int MAX_FILE_NAME_LENGTH = 100;

int main(void) {
    // A 2D character array used to store the photo file names read from the input file.
    char fileNames[MAX_FILE_NAME_LENGTH][MAX_FILE_NAME_LENGTH];

    // A character array used to store the name of the input file containing the list of photo file names.
    char inputFileName[MAX_FILE_NAME_LENGTH];
    // Character array used to store the modified file names.
    char outputFileName[MAX_FILE_NAME_LENGTH];

    // Read the name of the input file containing the list of photo file names.
    scanf("%s", inputFileName);

    // Open the input file for reading.
    FILE *inputFile = fopen(inputFileName, "r");
    if (inputFile == NULL) {
        printf("Failed to open the input file.\n");
        return 1;
    }

    // Read the photo file names from the text file
    int numFileNames = 0;
    while (fgets(fileNames[numFileNames], MAX_FILE_NAME_LENGTH, inputFile) != NULL) {
        // Remove the newline character at the end of each line
        fileNames[numFileNames][strcspn(fileNames[numFileNames], "\n")] = '\0';
        numFileNames++;
    }

    // Close the input file
    fclose(inputFile);

    // Process each photo file name and output the modified file names
    for (int i = 0; i < numFileNames; i++) {
        // Find the position of "_photo.jpg" in the file name
        char *replacePos = strstr(fileNames[i], "_photo.jpg");
        if (replacePos != NULL) {
            // Calculate the length of the unchanged portion of the file name
            int unchangedLength = replacePos - fileNames[i];

            // Copy the unchanged portion of the file name to the output file name
            strncpy(outputFileName, fileNames[i], unchangedLength);
            // Add the null terminator to the output file name
            outputFileName[unchangedLength] = '\0';

            // Append the "_info.txt" portion to the output file name
            strcat(outputFileName, "_info.txt");

            // Print the modified file name
            printf("%s\n", outputFileName);
        }
    }

    return 0;
}

