

#include<stdio.h>

void main(void)

{
	int ch;
	while((ch = getchar()) != '\n')
	{
		putchar(ch++);
		putchar(++ch);
	}

}
