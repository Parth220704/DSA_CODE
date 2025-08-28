#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,num=1,n,temp;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		if(i%2 == 1)
		{
			for(j=1;j<=n+1-i;j++)
			{
				printf("%d",num);
				num++;
			}
		}
		else
		{
			temp = num + n - i;
			for(j=1;j<=n+1-i;j++)
			{
				printf("%d",temp);
				temp--;
				num++;
			}
		}
		printf("\n");
	}
	getch();

}