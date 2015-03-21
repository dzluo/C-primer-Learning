
#include<stdio.h>

int main(void)
{
	float in;
	float out;
	printf("Please input an floating number:");
	scanf("%f" , &in);
	out = in * 2;
	printf("You have entered %f\nYour number mutiplied by 2 is %0.2f\n", in, out);
	return 0;
}
