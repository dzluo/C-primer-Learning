
#include<stdio.h>

void two(void)
{
	printf("two\n");
}

void one_three(void)
{
	printf("one\n");
	two();
	printf("three\n");
}

int main(void)
{
	printf("start now:\n");
	one_three();
	printf("done!\n");
}
