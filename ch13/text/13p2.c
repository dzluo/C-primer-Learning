
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40

int main(int argc, char * argv[])
{
  FILE *in, *out;
  int  ch;
  char name[LEN];
  int  count = 0;
  // To check the format of input
  if(argc < 2)
  { 
    fprintf(stderr, "Usage: %s filename\n", argv[0]);
    exit(1);
  }
  // Open the input file
  if((in = fopen(argv[1], "r")) == NULL) 
  {
    fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
    exit(2);
  }
  // Create the output file name
  strcpy(name, argv[1]);
  strcat(name, ".red");
  // Open the output file
  if((out = fopen(name, "wb")) == NULL)
  {
    fprintf(stderr, "Can't create output file.\n");
    exit(3);
  } 
  // get Char from input file and print in the ouput file
  while((ch = getc(in) != EOF))
    if(count++ %3 == 0)
       putc(ch, out);

  if(fclose(in) != 0 || fclose(out) != 0) 
    fprintf(stderr, "Error in closing files\n");
  return 0;
}
