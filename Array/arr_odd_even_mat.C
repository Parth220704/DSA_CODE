#include<stdio.h>
#include<conio.h>
void ex(int,int,int);

void main()
{
	int no1,no2,choice;
	clrscr();

	do
	{
		printf("Enter choice : ");
		scanf("%d",&choice);

		if(choice==0)
		{
			exit(0);
		}

		printf("Enter no 1 : ");
		scanf("%d",&no1);
		printf("Enter no 2 : ");
		scanf("%d",&no2);

		ex(no1,no2,choice);
	}while(1);
}

void ex(int n1,int n2,int choice)
{
	int sum=0,min=0,even=0,odd=0,i;
	switch(choice)
	{
		case 1:
			sum = n1+ n2;
			min = sum/2;
			printf("ANS = %d\n",min);
			break;
		case 2:
			for(i=n1;i<=n2;i++)
			{
				if(i%2==0)
				{
					even = even + 1;
				}
				else
				{
					odd = odd + 1;
				}
			}
			printf("Count of Even No = %d\n",even);
			printf("Count of odd No = %d\n",odd);
			break;
		default:
			printf("Enter valied choice!!!");
			break;
	}
}