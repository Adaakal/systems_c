#define _XOPEN_SOURCE 500       
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

void printHelp(FILE *stream, char progname[]);

int main(int argc, char *argv[]) {

  char mph[10] = {0};
  int opt;
  int cont = 0;
  
  /* parse command line options */
  while ((opt = getopt(argc, argv, "h:c") != -1)) {
    switch(opt) {
      case 'h':
        printHelp(stdout, argv[0]);
        return 0;
      case 'c':
        cont = 1;
        break;
      default:
        printHelp(stderr, argv[0]);
        return 1;
    }//end switch
  }//end while

  while(fgets()) {
    /* check if mph is numeric and convert */
    if(strspn(mph, "0123456789.-\n") == strlen(mph)) {
      printf("%.1f\n", (atof(mph)*1.60934));
    }//end if
    /* if mph not numeric, print error and return */
    else {
      fprintf(stderr, "Found non-numeric value\n");
      if (cont == 1) {  //check if -c is set
        continue;       //skip and continue if -c is set
      } //end if
      else
        return 1;       //stop if -c not set
    }//end else
  }//end while
  
  return 0;
}



//Function printHelp
void printHelp(FILE *stream, char progname[]) {
  fprintf(stream, "%s [-c] [-h]\n", progname);
  fprintf(stream, " -c continues even if non-numeric value found\n"
          "-h print help\n");
}
