
#include<stdio.h>
#include<string.h>

struct mon{
  char month[20];
  char monshort[3];
  int  days;
  int  imon;
};

//int getline(char s[], int lim){
//  int c,i;
//  i = 0;
//  while((c = getchar()) != EOF && c != '\n' && c < lim - 1)
//    s[i++] = c;
//  s[i] = '\0';
//  return i;
//}

int main(int argc, char *argv[])
{ 
  int daycount = 0;
  int i;
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
  char line[20];
  int  clim = 20;
  int  tday;
  int  tmond = 0;
  char tmons[10];
  int  tyear;
  int  FF = 0;

  printf("Please input the day month year:\n");
  
  gets(line);
//  while(getline(&line, &clim, stdin) > 0)
  if(sscanf(line, "%d %d %d", &tday, &tmond, &tyear) == 3)
    printf("You have entered day : %d, month : %d, year : %d.\n", tday, tmond, tyear);
  else if(sscanf(line, "%d %s %d", &tday, tmons, &tyear) == 3)
    printf("You have entered day : %d, month : %s, year : %d.\n", tday, tmons, tyear);
  else 
    { 
      printf("Invalid : %s\n", line);
      return 0;
    }
  
//  while(getchar() != '\n')
//    continue;
  
  for(i = 0; i < 12; i++)
    {
     if((i == 2) && (tyear % 4 == 0))
       daycount++;
 
     if((tmond == 0) && (strcmp(oneyear[i].monshort, tmons) == 0 || strcmp(oneyear[i].month, tmons) == 0))
     {
	daycount += tday;
        FF = 1;
        break;
     }
     else if(tmond == i + 1)
     {
       daycount += tday;
       FF = 2;
       break;
     }
     else
       daycount += oneyear[i].days;
    }
  if(FF == 1)
    printf("Unitl the month: %s, there are %d days.\n", tmons, daycount);
  else if(FF == 2)
    printf("Until the month %d, there are %d days.\n", tmond, daycount);
  else
    printf("Invalid month you have entered.\n");
}
