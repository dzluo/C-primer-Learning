
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include "12.h"

int main(void)
{
  int set; 
  int sides, dice;
  srand((unsigned int) time(0));
  printf("Enter the number of sets; enter 0 to q\n");
  scanf("%d", &set);
  printf("How many sides and how many dice?\n");
  while(scanf("%d %d", &sides, &dice) == 2 && sides > 0 && dice > 0 )
  {
    int i;
    int out[set];
    printf("Here are %d sets of %d %d-sided throws.\n", set, dice, sides);
    for(i = 0; i < set; i++)
    {
      out[i] = roll_n_dice(dice, sides);
      if((i + 1) % 7 == 0)
        printf(" %d\n", out[i]);
      else if(i % 7 == 0)
        printf("%7d", out[i]);
      else 
        printf(" %d", out[i]);
    }

  }

  printf("The rollem() function was called %d times.\n", roll_count);
  printf("GOOD FORTUNE TO YOU!\n");
  return 0;

}
