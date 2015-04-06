
#include<stdio.h>

struct mon{
  char month[20];
  char monshort[3];
  int  days;
  int  monindex;
};

void main(int argc, char *argv[])
{
  int i;
  int daycount = 0;
  struct mon oneyear[12] = {
  {"January",   "Jan", 31, 1},
  {"February",  "Feb", 28, 2},
  {"March",     "Mar", 31, 3},
  {"April",     "Apr", 30, 4},
  {"May",       "May", 31, 5},
  {"June",      "Jun", 30, 6},
  {"July",      "Jul", 31, 7},
  {"August",    "Aug", 31, 8},
  {"September", "Sep", 30, 9},
  {"October",   "Oct", 31, 10},
  {"November",  "Nov", 30, 11},
  {"December",  "Dec", 31, 12}
  };
  for(i = 0; i < atoi(argv[1]); i++)
    daycount += oneyear[i].days; 
  printf("Unitl the month: %d, there are %d days\n", atoi(argv[1]), daycount);
}
