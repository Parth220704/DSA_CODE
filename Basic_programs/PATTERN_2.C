#include <stdio.h>
#include <conio.h>

void pattern_77(int);

void main()
{
	int n;

	clrscr();

	printf("Enter n : ");
	scanf("%d", &n);

	pattern_77(n);

	getch();
}

void pattern_77(int n)
{
	int i, j, num, temp, count=0, k=n*n;

	for(i=1; i<=n; i++)
	{
		for(j=1; j<i; j++)
		{
			count++;
		}
	}

	num = k - count;

	for(i=1; i<=n; i++)
	{
		for(j=1; j<i; j++)
		{
			printf(" ");
		}

		if(i%2 == 1)
		{
			for(j=1; j<=n-i+1; j++)
			{
				printf("%d", num);
				num--;
			}
		}
		else
		{
			temp = num - n + i;

			for(j=1; j<=n-i+1; j++)
			{
				printf("%d", temp);
				temp++;
				num--;
			}
		}
		printf("\n");
	}
}