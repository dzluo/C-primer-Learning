

#include<stdio.h>
#define COUNT 100
#define RANGE 10
void main(void)
{
  int list[COUNT];
  int count[RANGE];
  int i;
  int k;
  for(i = 0; i < RANGE; i++)
    count[i] = 0;
  for(k = 0; k < COUNT; k++)
    { 
      int j;
      list[k] = (rand() % RANGE) + 1;
      for(j = 0; j < RANGE; j++)
          {
            if(list[k] == j+1)
              {
              count[j]++;
              continue;
              }
          }
    }
   for(i = 0; i < RANGE; i++)
     printf("%d : %d\n", i+1, count[i]);
}
