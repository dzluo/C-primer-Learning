

#include<stdio.h>
#include "pel3-3a.h"
int main(void)
{
  int mode;
  printf("Enter 0 for metric mode, 1 for US mode: ");
  scanf("%d", &mode);
  while(mode >= 0)
  { 
    int inmode;
    float distance;
    float fuel;
    inmode = set_mode(mode);
    get_info(inmode, &distance, &fuel);
    show_info(inmode, distance, fuel);
    printf("Enter 0 for metric mode, 1 for US mode");
    printf("(-1 to quit): ");
    scanf("%d", &mode);
  }
  printf("Done\n");
  return 0;
}
