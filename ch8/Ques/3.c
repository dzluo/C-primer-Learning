

#include<stdio.h>

void main(void)
{

	int lowchar   = 0;
	int upperchar = 0;
	int ch;
	while((ch = getchar()) != EOF)
		if((ch > 96) && (ch < 123))
			lowchar++;
		else if((ch > 64) && (ch < 91))
			upperchar++;

	printf("you have enter %d lowcase characters and %d uppercase characters", lowchar, upperchar);

}
