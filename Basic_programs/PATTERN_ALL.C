#include<stdio.h>
#include<conio.h>

void p_61(int n);
void p_62(int n);
void p_63(int n);
void p_64(int n);
void p_65(int n);
void p_66(int n);
void p_67(int n);
void p_68(int n);
void p_69(int n);
void p_70(int n);
void p_71(int n);
void p_72(int n);

void main()
{
	int n,ch;
	clrscr();
	printf("Enter Number :");
	scanf("%d",&n);

	printf("Enter Choice :");
	scanf("%d",&ch);

	switch(ch)
	{
			case 61: p_61(n);
			break;

			case 62: p_62(n);
			break;

			case 63: p_63(n);
			break;

			case 64: p_64(n);
			break;

			case 65: p_65(n);
			break;

			case 66: p_66(n);
			break;

			case 67: p_67(n);
			break;

			case 68: p_68(n);
			break;

			case 69: p_69(n);
			break;

			case 70: p_70(n);
			break;

			case 71: p_71(n);
			break;

			case 72: p_72(n);
			break;

			default:
			     printf("Enter valied choice...");
	}
	getch();
}

void p_61(int n)
{
	int i,j;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
}

void p_62(int n)
{
	int i,j,k=1;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",k++);
		}
		printf("\n");
	}
}

void p_63(int n)
{
	int i,m=1,j,k;

	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i-1;j++)
		{
			printf(" ");
		}
		for(k = 1; k<=m;k++)
		{
			printf("$");
		}
		m++;
		printf("\n");
	}
}

void p_64(int n)
{
	int i,j;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}

void p_65(int n)
{
	int i,j;

	for(i=1;i<=n;i++)
	{
		int k=65;
		for(j=1;j<=i;j++)
		{
			if(i%2 != 0)
			{
				printf("%d\t",j);
			}
			else
			{
				printf("%c\t",k++);
			}
		}
		printf("\n");
	}
}

 void p_66(int n)
{
	int i,j;

	for(i=1;i<=n;i++)
	{
		int k = 65;
		for(j=1;j<=i;j++)
		{
			printf("%c\t",k++);
		}
		printf("\n");
	}
}

void p_67(int n)
{
	int i,j;

	for(i=1;i<=n;i++)
	{
		if(i%2 != 0)
		{
		       int flag = 1;
		       for(j=1;j<=i;j++)
		       {
				if(flag == 1)
					{
					printf("%d",flag);
					flag = 0;
			}
			else
			{
			   printf("%d",flag);
				flag = 1;
			}
		       }

		}
		else
		{
		    int flag = 0;
		    for(j=1;j<=i;j++)
		       {
				if(flag == 1)
					{
					printf("%d",flag);
					flag = 0;
			}
			else
			{
			   printf("%d",flag);
				flag = 1;
			}
		       }
		}
		printf("\n");
	}
}
void p_68(int n)
{
	int i,j;

	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("$");
		}
		printf("\n");
	}
}

void p_69(int n)
{
	int i,j;

	for(i=n;i>=1;i--)
	{
		for(j=n;j>=n;j--)
		{
			printf("$");
		}
		printf("\n");
	}
}

void p_70(int n)
{
	int i,j;

	for(i=0;i<n;i++)
	{
		for(j=0;j<2*i;j++)
		{
			printf(" ");
		}
		for(k=0;k<n-i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void p_71(int n)
{
	int i,j,k=65,c=97,flag=0;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(flag == 0)
			{
				printf("%c\t",k);
				flag = 1;
			}
			else
			{
			     printf("%c\t",c);
				flag = 0;
			}
		}
		printf("\n");
	}
}

void p_72(int n)
{
	int i,j,k=n*n;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",k--);
		}
		printf("\n");
	}
}
