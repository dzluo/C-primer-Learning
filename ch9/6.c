

#include<stdio.h>
#include<ctype.h>

int proc(int ch); 

void main(void)
{
  int ch;
  while((ch = getchar()) != EOF)
      printf("%d ", proc(ch));
}

int proc(int ch)
{
  int position;
  if(isalpha(ch))
    position = tolower(ch) - 96;
  else
    position = -1;
  
  return position; 

}
