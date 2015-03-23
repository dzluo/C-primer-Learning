

#include<stdio.h>
#define COUNT 10
#define RANGE 10
void main(void)
{
  int list[COUNT - 1];
  int count[RANGE - 1];
  int i;
  for(i = 0; i < RANGE; i++)
    count[i] = 0;
  for(i = 0; i < COUNT; i++)
    { 
      int j;
      list[i] = (rand() % RANGE) + 1;
      printf("%d\n", list[i]);
      for(j = 1; j <= RANGE; j++)
          {
            if(list[i] == j)
            count[j-1]++;
          }
    }
  for(i = 0; i < RANGE; i++)
    printf("%d : %d\n", i+1, count[i]);
}
