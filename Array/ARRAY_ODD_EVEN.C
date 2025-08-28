#include<stdio.h>
#include<conio.h>

void cal_min(int number[],int n);
void count_num(int number[],int n);


void main()
{
	int n,ch,i;
	int number[100];
	clrscr();

	while(1)
	{

		printf("1. For min\n");
		printf("2. For count Odd Even\n");
		printf("Enter your choice :");
		scanf("%d",&ch);
		if(ch == 0)
		{
			exit(0);
		}

		printf("Enter number of Elements : ");
		scanf("%d",&n);

		printf("Enter %d numbers : \n",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&number[i]);
		}


		switch(ch)
		{
			case 1:
				cal_min(number,n);
				break;
			case 2:
				count_num(number,n);
				break;
			default :
				printf("Invalid !!!");
				break;
		}
	}
}
void cal_min(int number[],int n)
{
	int sum=0,i;
	int min;

	for(i=0;i<n;i++)
	{
		sum = sum + number[i];
	       //	printf("%d\n",number[i]);
	}
       //	printf("%d\n",sum);
	min = sum / n;
	printf("MIN = %d\n",min);
}

void count_num(int number[],int n)
{
		int odd=0,even=0,i;

		for(i=0;i<n;i++)
		{
			if(number[i] % 2 == 0)
			{
				even = even + 1;
			}
			else
			{
				odd = odd + 1;
			}
		}
		printf("Count of odd number = %d\n",odd);
		printf("Count of even number = %d\n",even);
}