

#include<stdio.h>
#define COUNT 100
#define RANGE 10
void main(void)
{
  int list[COUNT - 1];
  int i;
  int j;
  int k;
  for(i = 0; i < COUNT; i++)
	{
          list[i] = rand() % RANGE + 1;   // to generate a new number;
          for (j = 0; j < i; j++)
            if(list[i] > list[j])         // to compare the new number with the old ones one by one
              {
                int temp; 
                temp = list[i];
                for(k = i; k > j; k--)    // If find the interval, insert the new one
                  list[k] = list[k-1];
                list[j] = temp;
                break;
              }
        }
   for(i = 0; i < COUNT; i++)
     printf("%d\n", list[i]);
}
