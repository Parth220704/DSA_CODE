#include <stdio.h>
#include <conio.h>

void print();

void main()
{
	clrscr();

	print();

	getch();
}

void print()
{
	int i, j, a, b;
	char ch[100][100];

	printf("\nEnter Total Array Of No : ");
	scanf("%d", &a);

	printf("\nEnter Max Character Size : ");
	scanf("%d", &b);

	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			printf("\nEnter ch[%d][%d] Value : ", i  , j);
			scanf(" %c", &ch[i][j]);

			if(ch[i][j] == '0')
			{
				break;
			}
		}

	}

	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			if(ch[i][j] != '0')
			{
				printf("\nch[%d][%d] : %c", i, j, ch[i][j]);
			}
		}
		printf("\n");
	}
}
