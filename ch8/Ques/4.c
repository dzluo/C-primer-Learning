

#include<stdio.h>
#include<ctype.h>
void main(void)
{
	long sumchar = 0;
	long sumword = 0;
	float avar = 0;
	int ch;
	int FF = 0;   //To indicate the lasting of a word
	while((ch = getchar()) != EOF)
	{
		if(isalpha(ch))
		  {
		    if(FF == 0)
		      sumword++;
		    FF = 1;
	            sumchar++;	
		  }
		else if(isspace(ch) || ispunct(ch))
		  FF = 0;
	}
	if(sumword != 0)
	  avar = sumchar / sumword;
	else
	  avar = 0;
	printf("You have entered %d words, and the toatal chars is %d, the avarage is %.2f.\n", sumword, sumchar, avar);
}
	
