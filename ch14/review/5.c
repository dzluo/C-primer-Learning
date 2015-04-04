
#include<stdio.h>

struct mon{
  char month[20];
  char monshort[3];
  int  days;
  int  monindex;
};

void main(void)
{
  struct mon oneyear[2] = {
  {"January", "Jan", 31, 1},
  {"February", "Feb", 30, 2}
  };
  printf("%s", oneyear[1].month);
}
