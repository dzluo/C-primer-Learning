

#include<stdio.h>
void critic(int *units);

int main(void)
{

  int units;
  
  printf("How many pounds to a frinkin of butter?\n");
  scanf("%d", &units);
  while(units != 56)
    critic(&units);
  printf("You must have looked it up!\n");
  return 0;

}

void critic(int *units)
{
  printf("No luck, chumy. Try again.\n");
  scanf("%d", units);
}
