
#include<stdio.h>
#include<stdlib.h>
#define CNTL_Z '\032'
#define SLEN 50
int main(void)
{
  char file[SLEN];
  char ch;
  FILE * fp;
  long count, last;

  puts("Enter the name of the file to be processed: ");
  gets(file);
  fp = fopen(file, "wb");
  fseek(fp, 0L, SEEK_END);
  last = ftell(fp);
  for(count = 1L; count <= last; count++)
  {
    fseek(fp, -count, SEEK_END);
    ch = getc(fp);
//    if(ch != CNTL_Z && ch != 'r')
      putchar(ch);
  }
  putchar('\n');
  fclose(fp);
  return 0;
}
