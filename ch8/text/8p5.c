

#include<stdio.h>

void display(char ch, int row, int col)
{
	int i, j;
	for(i = 0; i < row; i++)
	{
		{
		for(j = 0; j < col; j++)
			putchar(ch);
		}
	putchar('\n');
	}

}


int main(void)

{
int ch;
int row, col;
while ((ch = getchar()) != '\n')
	{
	scanf("%d %d", &row, &col);
	display(ch, row, col);
	while(getchar() != '\n')
		continue;
	printf("test\n");
	}
}
