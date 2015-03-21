

#include<stdio.h>

void larger_of(int * x , int * y);


void main(void)
{
	int x, y;
	x = 8;
	y = 10;
	larger_of(&x, &y);
	printf("x=%d,y=%d\n", x , y);
}

void larger_of(int * x, int * y)
{
	int max;
	if(*x > *y)
	  max = *x;
	else
          max = *y;
	*x = max;
	*y = max;
}

