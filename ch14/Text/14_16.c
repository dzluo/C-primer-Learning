
#include<stdio.h>
#include<string.h>
#include<ctypes.h>

char showmenu(void);
void eatline(void);
void show(void(* fp)(char *), char * str);
void ToUpper(char *);
void ToLower(char *);
void Transpose(char *);
void Dummy(char *);

int main(void)
{
  char line[81];
  char copy[81];
  char choice;
  void (*pfun)(char *);
  puts("Enter a string(empty line to quit): ");
  while(gets(line) != NULL && line[0] != '\0')
  {
    while((choice = showmenu()) != 'n')
    {
      switch(choice)
      {
        case 'u' : pfun = ToUpper;
      }

    }


  }

}
