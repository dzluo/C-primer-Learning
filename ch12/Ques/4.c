
#include<stdio.h>
#include<ctype.h>

static int num;

void myfun(void);

void main(void)
{
  int ch;
  puts("Test for Calling number of the function, To start, Enter y(yes): ");
  while(!isalpha(ch = getchar()))
    continue;
  while(ch != EOF)
    {
      if(ch == 'y' || ch == 'Y' )
      {
        myfun();
        printf("Called %d\n", num);
        puts("To call again, enter y. n to quit");
      }
      else if(ch == 'n' || ch == 'N')
        break;
      else
        puts("Invalid input, Please input Yes or No.");

      while( (ch = getchar()) != '\n')
        continue;
      while(!isalpha(ch = getchar()))
        continue;
    }
}

void myfun(void)
{
  num++;
}

