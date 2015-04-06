
#include<stdio.h>
#include<string.h>

struct mon{
  char month[20];
  char monshort[3];
  int  days;
};

void main(int argc, char *argv[])
{
  int daycount = 0;
  char tmon[4];
  struct mon oneyear[12] = {
  {"January",   "Jan", 31},
  {"February",  "Feb", 28},
  {"March",     "Mar", 31},
  {"April",     "Apr", 30},
  {"May",       "May", 31},
  {"June",      "Jun", 30},
  {"July",      "Jul", 31},
  {"August",    "Aug", 31},
  {"September", "Sep", 30},
  {"October",   "Oct", 31},
  {"November",  "Nov", 30},
  {"December",  "Dec", 31}
  };
  int i;

  printf("Please input the month:");
  scanf("%s", tmon);
  while(getchar() != '\n')
    continue;
  for(i = 0; i < 12; i++)
    {
     if(strcmp(oneyear[i].monshort, tmon) == 0)
     {
	daycount += oneyear[i].days;
        break;
     }
     else
     daycount += oneyear[i].days;
    }
  printf("Unitl the month: %s, there are %d days\n", tmon, daycount);
}
