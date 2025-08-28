#include <stdio.h>
#include <conio.h>

void pattern(int);

void main()
{
	int n;

	clrscr();

	printf("Enter Matrix Size : ");
	scanf("%d", &n);

	pattern(n);

	getch();
}

void pattern(int rows)
{
	int i, j,number=1, count, start, end;

	for(i=0;i<rows;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}

		 count = rows - i;
		 start = number;
		 end = number + count - 1;

		if(i % 2 == 0)
		{
			for(j=start;j<=end ; j++)
			{
				printf("%d",j);
			}
		}

		else
		{
			for(j = end; j >= start; j--)
			{
				printf("%d", j);
			}
		}

		number += count;

		printf("\n");
	}
}